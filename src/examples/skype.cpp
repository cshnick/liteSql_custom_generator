#include <iostream>
#include "litesql.hpp"
#include "main.hpp""

// no name collisions expected
using namespace litesql;
using namespace SkypeDB;

int main(int argc, char **argv) {
	try {
		SkypeDB::main db("sqlite3", "database=/home/ilia/.Skype/sc.ryabokon.ilia/main.db");
		// create tables, sequences and indexes
		db.verbose = true;
		auto ds = select<Messages>(db, Messages::Id > 100 && Messages::Id < 200);
		std::cout << "All messages count " << ds.count() << std::endl;
	} catch (Except e) {
		std::cerr << "Error: " << e << std::endl;
	}

	return 0;
}

