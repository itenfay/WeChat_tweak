//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TingMusicSquarePreloadCpp
{
}

+ (id)sharedInstance;
- (void)applyClientInsertionPatchIfNeeded:(id)arg1 discoverResponse:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)clearClientInsertionPatch;
- (void)readClientInsertionPatch:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)onClientInsertionReceived:(id)arg1;
- (id)readPreloadResponse;
- (id)getAndClearPreloadResponse;
- (void)discard:(id)arg1;
- (void)preload:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

