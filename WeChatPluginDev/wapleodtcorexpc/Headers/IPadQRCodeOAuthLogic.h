//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, OpenSDKOAuthRequest, QRCodeOAuthData;
@protocol IPadQRCodeOAuthLogicDelegate;

@interface IPadQRCodeOAuthLogic
{
    _Bool _hasStartQuery;
    unsigned int _refreshQRcodeRetryCount;
    unsigned int _svrErrRetryCount;
    unsigned int _networkErrRetryCount;
    unsigned int _lastQueryErrCode;
    unsigned int _queryTimeout;
    id <IPadQRCodeOAuthLogicDelegate> _delegate;
    OpenSDKOAuthRequest *_reqInfo;
    QRCodeOAuthData *_authData;
    MMTimer *_timer;
    unsigned long long _queryStartTimeInMs;
    unsigned long long _queryIntervalInMs;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long queryIntervalInMs; // @synthesize queryIntervalInMs=_queryIntervalInMs;
@property(nonatomic) unsigned int queryTimeout; // @synthesize queryTimeout=_queryTimeout;
@property(nonatomic) unsigned long long queryStartTimeInMs; // @synthesize queryStartTimeInMs=_queryStartTimeInMs;
@property(nonatomic) unsigned int lastQueryErrCode; // @synthesize lastQueryErrCode=_lastQueryErrCode;
@property(nonatomic) unsigned int networkErrRetryCount; // @synthesize networkErrRetryCount=_networkErrRetryCount;
@property(nonatomic) unsigned int svrErrRetryCount; // @synthesize svrErrRetryCount=_svrErrRetryCount;
@property(nonatomic) unsigned int refreshQRcodeRetryCount; // @synthesize refreshQRcodeRetryCount=_refreshQRcodeRetryCount;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool hasStartQuery; // @synthesize hasStartQuery=_hasStartQuery;
@property(retain, nonatomic) QRCodeOAuthData *authData; // @synthesize authData=_authData;
@property(retain, nonatomic) OpenSDKOAuthRequest *reqInfo; // @synthesize reqInfo=_reqInfo;
@property(nonatomic) __weak id <IPadQRCodeOAuthLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onOccurError:(id)arg1 errCode:(int)arg2 errType:(unsigned int)arg3;
- (void)handleQueryState:(id)arg1 error:(id)arg2;
- (void)checkStartQueryQRCodeScanState;
- (void)startQueryQRCodeScanState;
- (void)handleReqAuthResp:(id)arg1 error:(id)arg2;
- (void)requestAuthData;
- (void)resetState;
- (void)sendCancelOperationToSvr;
- (void)restartLogic;
- (void)startLogicWithReqInfo:(id)arg1;
- (void)dealloc;

@end

