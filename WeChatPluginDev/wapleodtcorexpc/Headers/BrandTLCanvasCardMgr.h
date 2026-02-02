//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV, NSString;

@interface BrandTLCanvasCardMgr
{
    MemoryMappedKV *_mappedKV;
}

+ (_Bool)isAdRecConflicCheckABTestClose;
+ (double)delayTimeForAdvanceLaunchJsEngine;
+ (_Bool)isPkgMgrUseDebugAppId;
+ (_Bool)isAdvanceLaunchJSCoreOpen;
+ (_Bool)isAdRequestOpen;
+ (_Bool)isHighFreshOpen;
+ (_Bool)isAdCardOpen;
- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
- (void)reportMonitorIdKey:(unsigned int)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)handleBizAdNotifyNewXml:(id)arg1;
- (void)onServiceInit;
- (_Bool)isPreviewModeOpen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

