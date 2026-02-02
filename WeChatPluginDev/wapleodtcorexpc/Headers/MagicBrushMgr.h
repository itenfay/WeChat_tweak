//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MagicBrushService, NSMutableSet, NSString;

@interface MagicBrushMgr
{
    MagicBrushService *_magicbrush;
    NSMutableSet *_activeBizsSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *activeBizsSet; // @synthesize activeBizsSet=_activeBizsSet;
@property(retain, nonatomic) MagicBrushService *magicbrush; // @synthesize magicbrush=_magicbrush;
- (void)updateActiveBizs;
- (void)onBizCallDestroy:(id)arg1;
- (void)onBizCallStart:(id)arg1;
- (id)getReportExtraDictionary:(id)arg1 publicServices:(id)arg2;
- (void)report:(int)arg1 logStr:(id)arg2;
- (id)newBiz:(id)arg1;
- (void)onServiceMemoryWarning;
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

