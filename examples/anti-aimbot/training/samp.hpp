namespace samp {
	enum {
		PLAYER_STATE_NONE,
		PLAYER_STATE_ONFOOT,
		PLAYER_STATE_DRIVER,
		PLAYER_STATE_PASSENGER,
		PLAYER_STATE_WASTED,
		PLAYER_STATE_SPAWNED,
		PLAYER_STATE_SPECTATING
	};

	enum {
		SPECIAL_ACTION_NONE = 0,
		SPECIAL_ACTION_DUCK = 1,
		SPECIAL_ACTION_USEJETPACK = 2,
		SPECIAL_ACTION_ENTER_VEHICLE = 3,
		SPECIAL_ACTION_EXIT_VEHICLE = 4,
		SPECIAL_ACTION_DANCE1 = 5,
		SPECIAL_ACTION_DANCE2 = 6,
		SPECIAL_ACTION_DANCE3 = 7,
		SPECIAL_ACTION_DANCE4 = 8,
		SPECIAL_ACTION_HANDSUP = 10,
		SPECIAL_ACTION_USECELLPHONE = 11,
		SPECIAL_ACTION_SITTING = 12,
		SPECIAL_ACTION_STOPUSECELLPHO = 13,
		SPECIAL_ACTION_DRINK_BEER = 20,
		SPECIAL_ACTION_SMOKE_CIGGY = 21,   
		SPECIAL_ACTION_DRINK_WINE = 22,
		SPECIAL_ACTION_DRINK_SPRUNK = 23,
		SPECIAL_ACTION_CUFFED = 24,
		SPECIAL_ACTION_CARRY = 25,    
		SPECIAL_ACTION_PISSING = 68
	};
}