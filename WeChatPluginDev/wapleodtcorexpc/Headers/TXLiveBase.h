//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TXLiveAudioSessionDelegateWrapper;
@protocol TXLiveBaseDelegate;

@interface TXLiveBase : NSObject
{
    struct unique_ptr<liteav::live::TXLogCallbackWrapper, std::default_delete<liteav::live::TXLogCallbackWrapper>> log_callback_wrapper_;
    struct shared_ptr<liteav::live::TXLiveBaseObserverImpl> _client;
    struct unique_ptr<liteav::live::TXNtpServiceCallbackImpl, std::default_delete<liteav::live::TXNtpServiceCallbackImpl>> _ntp_service_callback;
    struct NtpService *_ntp_service;
    TXLiveAudioSessionDelegateWrapper *_audio_session_delegate_wrapper;
    id <TXLiveBaseDelegate> _delegate;
}

+ (void)setExternalDecoderFactory:(id)arg1;
+ (long long)getNetworkTimestamp;
+ (long long)updateNetworkTime;
+ (id)getLicenceInfo;
+ (void)setUserId:(id)arg1;
+ (void)setLicenceURL:(id)arg1 key:(id)arg2;
+ (void)setAppID:(id)arg1;
+ (id)getPituSDKVersion;
+ (id)getSDKVersionStr;
+ (void)setAudioSessionDelegate:(id)arg1;
+ (void)setAppVersion:(id)arg1;
+ (void)setConsoleEnabled:(_Bool)arg1;
+ (void)setLogLevel:(long long)arg1;
+ (int)setGlobalEnv:(const char *)arg1;
+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <TXLiveBaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onUpdateNetworkTime:(int)arg1 message:(id)arg2;
- (void)onLicenceLoadNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

