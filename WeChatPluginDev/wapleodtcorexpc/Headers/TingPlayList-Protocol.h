//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class MMListenCategoryFeedResponse, NSArray, NSData, NSString;
@protocol TingPlayListListener, TingPlayListRecommendListListener, TingPlayTaskService;

@protocol TingPlayList <NSObject, UnitRCBaseProtocol>
- (_Bool)getEnableRecommendListSource;
- (void)setEnableRecommendListSource:(_Bool)arg1;
- (NSArray *)getRecommendTaskServiceList;
- (MMListenCategoryFeedResponse *)getRecommendCategoryFeed;
- (void)removeRecommendListListener:(id <TingPlayListRecommendListListener>)arg1;
- (void)addRecommendListListener:(id <TingPlayListRecommendListListener>)arg1;
- (void)removePlayListListener:(id <TingPlayListListener>)arg1;
- (void)addPlayListListener:(id <TingPlayListListener>)arg1;
- (NSArray *)getItems;
- (void)setShuffled:(_Bool)arg1 topClientId:(NSString *)arg2;
- (void)setRandomPlaylist:(_Bool)arg1;
- (_Bool)getRandomPlaylist;
- (void)clear;
- (_Bool)moveToFirst:(NSString *)arg1;
- (NSData *)getPlaylistItem:(int)arg1;
- (int)getPlaylistCount;
- (void)updateRecommendListSource:(id <TingPlayTaskService>)arg1;
- (void)setPlayTaskServiceAsync:(id <TingPlayTaskService>)arg1 callback:(void (^)(void))arg2;
- (void)setPlayTaskService:(id <TingPlayTaskService>)arg1;
- (id <TingPlayTaskService>)getRecommendListSource;
- (id <TingPlayTaskService>)getPlayTaskService;
@end

