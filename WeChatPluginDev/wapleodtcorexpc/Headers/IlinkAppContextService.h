//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface IlinkAppContextService
{
    NSString *app_dir_;
    struct AffIlinkKeeperCallback *aff_ilink_callback;
    struct ContextBridge *ilink_ctx_;
    struct shared_ptr<IlinkSDKCloudSessionCallback> cloud_session_callback_;
    int ilink_cgi_retry_count_;
    long long _selfUin;
}

+ (id)iLinkPath;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) long long selfUin; // @synthesize selfUin=_selfUin;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceInit;
- (void)onAuthOK;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onIPXX:(id)arg1;
- (void)handleNewXmlMsg:(id)arg1;
- (void *)getCloudSession;
- (void)IlinkInit;
- (void)sendRequest:(id)arg1 Retry:(int)arg2;
- (void)sendIlinkAuthRequest:(unsigned int)arg1 body:(const void *)arg2 longPolling:(_Bool)arg3 timeout:(unsigned int)arg4;
- (void)sendCloudSessionRequest:(unsigned int)arg1 body:(const void *)arg2 longPolling:(_Bool)arg3 timeout:(unsigned int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

