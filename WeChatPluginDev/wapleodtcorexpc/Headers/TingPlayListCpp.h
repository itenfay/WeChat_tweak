//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TingPlayListCpp
{
}

- (_Bool)getEnableRecommendListSource;
- (void)setEnableRecommendListSource:(_Bool)arg1;
- (id)getRecommendTaskServiceList;
- (id)getRecommendCategoryFeed;
- (void)removeRecommendListListener:(id)arg1;
- (void)addRecommendListListener:(id)arg1;
- (void)removePlayListListener:(id)arg1;
- (void)addPlayListListener:(id)arg1;
- (id)getItems;
- (void)setShuffled:(_Bool)arg1 topClientId:(id)arg2;
- (void)setRandomPlaylist:(_Bool)arg1;
- (_Bool)getRandomPlaylist;
- (void)clear;
- (_Bool)moveToFirst:(id)arg1;
- (id)getPlaylistItem:(int)arg1;
- (int)getPlaylistCount;
- (void)updateRecommendListSource:(id)arg1;
- (void)setPlayTaskServiceAsync:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setPlayTaskService:(id)arg1;
- (id)getRecommendListSource;
- (id)getPlayTaskService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

