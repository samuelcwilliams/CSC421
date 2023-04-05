struct operator {
	int type;
	union {
		int intNum;
		float floatNum;
		double doubleNum;
	};
};

operator op;
op.type = 0;
op.intNum = 352;
