#ifndef SURVIVE_LOGERROR_H
#define SURVIVE_LOGERROR_H

#include "Logging/Observer.h"
#include "Logging/Subject.h"

#include <iostream>

class LogError : public Observer {
public:
	LogError() {}

	void Update(Message const *msg) override;
	std::ostream& Output(std::ostream& out) override;

	friend std::ostream& operator <<(std::ostream& out, const LogError& logError);

	~LogError() {}
};

#endif //SURVIVE_LOGERROR_H