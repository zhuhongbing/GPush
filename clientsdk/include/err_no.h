#ifndef __ERR_NO_H__
#define __ERR_NO_H__


namespace gim{


enum{
	STATUS_OK = 0,
	INPUT_FORMAT_ERROR = -1,
	CREATE_SESSION_FAIL = -10,
	GET_KEY_FAIL = -11,
	CHECK_TOKEN_FAIL = -12,
	NO_ENC_UNSUPPORT = -13,
	INVALID_SESSION_ID = -20,
	SESSION_TIMEOUT = -21, 
	NO_SERVICE = -30,
	SERVICE_TOO_BUSY = -33,
	CALL_TIMEOUT = -34,
	INVALID_SN = -40,
	SN_TIMEOUT = -41,
	DECRYPT_FAIL = -50,
	INVALID_TYPE = -60,
	SERVICE_TYPE_ERROR = -70,
	ASSESS_FORBIDDEN = -80,
	INNER_ERROR = -100,
	REQUEST_TIME_OUT = -600020
};

inline const char* getErrStr(int e){
	switch(e){
	case STATUS_OK:
		return "STATUS_OK";
	case INPUT_FORMAT_ERROR:
		return "INPUT_FORMAT_ERROR";
	case CREATE_SESSION_FAIL:
		return "CREATE_SESSION_FAIL";
	case GET_KEY_FAIL:
		return "GET_USER_KEY_FAIL";
	case CHECK_TOKEN_FAIL:
		return "CHECK_TOKEN_FAIL";
	case NO_ENC_UNSUPPORT:
		return "NO_ENC_UNSUPPORT";
	case INVALID_SESSION_ID:
		return "INVALID_SESSION_ID";
	case NO_SERVICE:
		return "NO_SERVICE";
	case SESSION_TIMEOUT:
		return "SESSION_TIMEOUT";
	case SERVICE_TOO_BUSY:
		return "SERVICE_TOO_BUSY";
	case INVALID_SN:
		return "INVALID_SN";
	case SN_TIMEOUT:
		return "SN_TIMEOUT";
	case INVALID_TYPE:
		return "INVALID_TYPE";
	case DECRYPT_FAIL:
		return "DECRYPT_FAIL";
	case SERVICE_TYPE_ERROR:
		return "SERVICE_TYPE_ERROR";
	case ASSESS_FORBIDDEN:
		return "ASSESS_FORBIDDEN";
	case CALL_TIMEOUT:
		return "CALL_TIMEOUT";
	case INNER_ERROR:
		return "INNER_ERROR";
	}
	return "";
}

};


#endif
