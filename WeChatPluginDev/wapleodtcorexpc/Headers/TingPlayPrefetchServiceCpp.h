//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TingPlayPrefetchServiceCpp
{
}

+ (id)sharedInstance;
- (void)doPrefetchPlayUrlAndCheckSpamForTingItem:(id)arg1 scene:(int)arg2;
- (void)onExposedWithItem:(id)arg1 scene:(int)arg2 index:(int)arg3;
- (void)onExposedWithItemList:(id)arg1 scene:(int)arg2;
- (_Bool)isEnablePrefetch;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

