//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol TXLivePushJSAdapterProtocol;

@interface TXLiveBaseAdapter
{
    _Bool _isWXTalking;
    _Bool _isInVoIP;
    NSString *_pusherAppId;
    id <TXLivePushJSAdapterProtocol> _pusher;
    unsigned long long _loggingBusinessType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long loggingBusinessType; // @synthesize loggingBusinessType=_loggingBusinessType;
@property(nonatomic) __weak id <TXLivePushJSAdapterProtocol> pusher; // @synthesize pusher=_pusher;
@property(nonatomic) _Bool isInVoIP; // @synthesize isInVoIP=_isInVoIP;
@property(nonatomic) _Bool isWXTalking; // @synthesize isWXTalking=_isWXTalking;
@property(copy, nonatomic) NSString *pusherAppId; // @synthesize pusherAppId=_pusherAppId;
- (_Bool)isAudioModuleActiving;
- (_Bool)overrideOutputAudioPort:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)setCategory:(id)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)setCategory:(id)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)setCategory:(id)arg1 error:(id *)arg2;
- (_Bool)setMode:(id)arg1 error:(id *)arg2;
- (_Bool)setActive:(_Bool)arg1 error:(id *)arg2;
- (void)onLog:(long long)arg1 log:(id)arg2;
- (void)didMonoServiceRejectMsg;
- (_Bool)isWeAppLivePusherWorking;
- (void)stopLogWithType:(long long)arg1;
- (void)startLogWithType:(long long)arg1;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

