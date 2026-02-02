//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GameLibraryAppInfo, GameMoreGameInfo, GameSearchRecommendList, GetGameIndex4FeedsListResponse, GetGameIndex4Response, GetGameIndex4TabNavResponse, NSArray, NSString;

@protocol IGameCenterExt <NSObject>

@optional
- (void)onGameCenterFindEntryChange;
- (void)onGameSearchEntryStatusChange:(_Bool)arg1 placeholder:(NSString *)arg2;
- (void)onGameSearchSmartBox:(NSString *)arg1 recommendList:(GameSearchRecommendList *)arg2 error:(long long)arg3;
- (void)onGameSearchFinishedWithResultGroups:(NSArray *)arg1 searchWithText:(NSString *)arg2 error:(long long)arg3;
- (void)onGetAllMiniGameList:(NSArray *)arg1 error:(long long)arg2;
- (void)onGetAllGameList:(NSArray *)arg1 error:(long long)arg2;
- (void)onGetMoreGameList:(GameMoreGameInfo *)arg1 classifyID:(NSString *)arg2 errCode:(int)arg3;
- (void)onGetLibGameList:(GameLibraryAppInfo *)arg1 errCode:(int)arg2;
- (void)onNewGameAdChanged;
- (void)onFetchGameCenterHomeFeedsListV5:(GetGameIndex4FeedsListResponse *)arg1 error:(long long)arg2;
- (void)onFetchGameCenterHomeTabNavV5:(GetGameIndex4TabNavResponse *)arg1 error:(long long)arg2;
- (void)onFetchGameCenterHomeDataV5WithoutFeedsList:(GetGameIndex4Response *)arg1 error:(long long)arg2 FromHomeCgi:(_Bool)arg3;
@end

