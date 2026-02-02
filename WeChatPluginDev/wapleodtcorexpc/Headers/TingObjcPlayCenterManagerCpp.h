//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TingObjcPlayCenterManagerCpp
{
}

+ (id)sharedInstance;
- (id)getDefaultRecommendCategoryItemSync;
- (void)getLastPlayingInfoStatus:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)getLastPlayingInfoStatusSync:(id)arg1;
- (void)getContiniousTapePlayingInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)getContiniousTapePlayingInfoSync:(id)arg1;
- (void)getPreviousTapePlayingInfo:(CDUnknownBlockType)arg1;
- (id)getPreviousTapePlayingInfoSync;
- (void)getLastCategoryTapePlayingInfo:(CDUnknownBlockType)arg1;
- (id)getLastCategoryTapePlayingInfoSync;
- (void)getLastTapePlayingInfo:(CDUnknownBlockType)arg1;
- (id)getLastTapePlayingInfoSync;
- (void)clearLastTapePlayingInfo:(CDUnknownBlockType)arg1;
- (void)deleteRecentTapeInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)callDeleteRecentTapeInfo:(unsigned long long)arg1 tapeId:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)checkUpdateRecentTapeInfoList:(CDUnknownBlockType)arg1;
- (id)getRecentTapeInfoListSync;
- (void)getRecentTapeInfoList:(CDUnknownBlockType)arg1;
- (void)updateCurTapePlayingInfo:(id)arg1 playingInfo:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)applyTapePlayingInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)onCategoryItemUpdated:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)onManagerClearData:(CDUnknownBlockType)arg1;
- (void)onManagerInit:(CDUnknownBlockType)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

