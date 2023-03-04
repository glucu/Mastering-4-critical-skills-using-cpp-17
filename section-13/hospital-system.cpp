#include<iostream>
#include <string>

const int kSpecializationSize{20};
const int kQueueSize{5};

std::string specializations[kSpecializationSize+1][kQueueSize+1]{};
int status[kSpecializationSize+1][kQueueSize+1]{};
int queue_length[kSpecializationSize+1]{};

void left_shift(int sp) {
	int len{ queue_length[sp] };
	for(int front{1}; front != len; ++front) {
		specializations[sp][front - 1] = specializations[sp][front];
		status[sp][front - 1] = status[sp][front];
	}
}

void right_shift(int sp) {
	int len{ queue_length[sp] };
	for(int end{len - 1}; end >= 0; --end) {
		specializations[sp][end + 1] = specializations[sp][end];
		status[sp][end + 1] = status[sp][end];
	}
}

void add_front(int sp, int st, int pos, const std::string &name) {
	specializations[sp][pos] = name;
	status[sp][pos] = st;
	queue_length[sp]++;
}

void add_back(int sp, int st, int pos, const std::string &name) {
	right_shift(sp);
	specializations[sp][pos] = name;
	status[sp][pos] = st;
	queue_length[sp]++;
}

void print_patients() {
	for(int i{}; i != kSpecializationSize; ++i) {
		int len{ queue_length[i] };

		if(len == 0) continue;

		std::cout << "**********************************\n";
		std::cout << "There are " << len << " patients in specialization " << i << '\n';
		for(int patient{}; patient != len; ++patient) {
			std::cout << specializations[i][patient] << ' ';
			if(status[i][patient] == 0) {
				std::cout << "regular\n";
			}
			else {
				std::cout << "urgent\n";
			}
		}
	}
}

void request_patient() {
	std::cout << "Enter specialization: ";
	int sp{};
	std::cin >> sp;

    if(!(sp >= 1 && sp <= 20)) {
        std::cout << "Invalid specialization. Try again\n";
    }
    else {
        int len{queue_length[sp]};
        if (len == 0) {
            std::cout << "No patients at this time. Good work Doctor :)\n";
        } else {
            std::string patient{specializations[sp][0]};
            std::cout << patient << ", please go see the doctor\n";
            left_shift(sp);
            queue_length[sp]--;
        }
    }
}

void add_patients() {
	std::cout << "Enter specialization, name, status: ";
	int sp{}, st{};
	std::string name{};
	std::cin >> sp >> name >> st;

	if(!(sp >= 1 && sp <= 20)) {
		std::cout << "Invalid specialization. Please Try again\n";
	}
	else if(st != 0 && st != 1) {
		std::cout << "Invalid status. Please Try again\n";
	}
	else {
		int pos{ queue_length[sp] };
		if(pos >= kQueueSize) {
			std::cout << "Sorry, we cannot add more patients for this specialization\n";
		}
		else {
			if(st == 0) {
				add_front(sp, st, pos, name);
			}
			else {
				add_back(sp, st, 0, name);
			}
		}
	}
}

int menu() {
	int choice{-1};
	while(choice == -1) {
		std::cout << "\nEnter your choice:\n"
		          << "1) Add new patient\n"
				  << "2) Print all patients\n"
				  << "3) Get next patient\n"
				  << "4) Exit\n";

		std::cin >> choice;
		if(!(choice >= 1 && choice <= 4)) {
			std::cout << "Invalid choice. Try again\n";
			choice = -1;
		}
	}
	return choice;
}

void hospital_system() {
	while(true) {
		int choice{ menu() };

		if(choice == 4) break;

		if(choice == 1) {
			add_patients();
		}
		else if(choice == 2) {
			print_patients();
		}
		else {
			request_patient();
		}
	}
}

int main() {

	hospital_system();

	return 0;
}