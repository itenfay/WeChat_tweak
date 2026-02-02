//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLRUCache, NSString;

@interface ForwardMsgSDKReportLogic
{
    unsigned int _lastGetSdkInfoTimeSec;
    MMLRUCache *_sdkCacheInfo;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int lastGetSdkInfoTimeSec; // @synthesize lastGetSdkInfoTimeSec=_lastGetSdkInfoTimeSec;
@property(retain, nonatomic) MMLRUCache *sdkCacheInfo; // @synthesize sdkCacheInfo=_sdkCacheInfo;
- (unsigned int)checkIsInFinder:(id)arg1;
- (void)onPreForwardVideoToContact:(id)arg1 videoInfo:(id)arg2;
- (void)onForwardMsgToContact:(id)arg1 scene:(unsigned long long)arg2;
- (void)onPreForwardMsgToContact:(id)arg1 msgWrap:(id)arg2;
- (void)onAfterForwardMsgToContact:(id)arg1 msgWrap:(id)arg2 fromMsg:(id)arg3;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

