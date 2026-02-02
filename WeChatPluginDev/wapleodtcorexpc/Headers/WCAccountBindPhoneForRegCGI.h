//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSNumber, NSString;
@protocol WCAccountBindPhoneForRegCGIDelegate;

@interface WCAccountBindPhoneForRegCGI
{
    id <WCAccountBindPhoneForRegCGIDelegate> _delegate;
    int _accountRegMode;
    NSString *_clientSeqID;
    NSString *_currentUserName;
    unsigned int _nextAuthType;
    _Bool _preserveLoggedIn;
    unsigned int _eventId;
    NSString *_extDeviceRegisterURL;
    NSNumber *_idcRedirectCount;
    NSNumber *_mmtlsSetCount;
}

+ (void)setRequest:(id)arg1 FromAccountData:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *mmtlsSetCount; // @synthesize mmtlsSetCount=_mmtlsSetCount;
@property(retain, nonatomic) NSNumber *idcRedirectCount; // @synthesize idcRedirectCount=_idcRedirectCount;
@property(nonatomic) unsigned int eventId; // @synthesize eventId=_eventId;
@property(nonatomic) _Bool preserveLoggedIn; // @synthesize preserveLoggedIn=_preserveLoggedIn;
@property(retain, nonatomic) NSString *extDeviceRegisterURL; // @synthesize extDeviceRegisterURL=_extDeviceRegisterURL;
@property(retain, nonatomic) NSString *currentUserName; // @synthesize currentUserName=_currentUserName;
@property(retain, nonatomic) NSString *clientSeqID; // @synthesize clientSeqID=_clientSeqID;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleResponse:(id)arg1;
- (_Bool)handleMMTLS;
- (_Bool)handleIdcRedirect:(id)arg1;
- (_Bool)doPostCheckRegState:(id)arg1;
- (_Bool)checkLoginVerifyCode:(id)arg1 verifyCode:(id)arg2 checkType:(unsigned int)arg3 checkCount:(unsigned int)arg4;
- (_Bool)checkRegVerifyCode:(id)arg1 verifyCode:(id)arg2 checkType:(unsigned int)arg3 checkCount:(unsigned int)arg4;
- (_Bool)getRegVoiceVerifyCode:(id)arg1 languageCode:(id)arg2;
- (_Bool)getLoginVoiceVerifyCode:(id)arg1 lastCheckType:(unsigned int)arg2 languageCode:(id)arg3;
- (_Bool)getLoginVerifyCode:(id)arg1 lastCheckType:(unsigned int)arg2;
- (_Bool)getRegVerifyCode:(id)arg1;
- (_Bool)checkLoginPhoneNumberStatus:(id)arg1 tryCount:(unsigned int)arg2 adjustRet:(unsigned int)arg3;
- (_Bool)checkRegPhoneNumberStatus:(id)arg1 tryCount:(unsigned int)arg2 adjustRet:(unsigned int)arg3 accountData:(id)arg4;
- (void)retryFromCgi:(id)arg1;
- (void)createEventFromRequest:(id)arg1;
- (void)logoutIfNeededAndStartRequest:(id)arg1;
- (void)cancelAllEvent;
- (_Bool)isRequesting;
- (unsigned int)cgiNumber;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

