//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FavoritesItem, NSArray, NSString;

@protocol IFavoritesExt <NSObject>

@optional
- (void)OnBatchDelBySourceIdFailedWith:(NSArray *)arg1;
- (void)OnBatchDelBySourceIdSuccessfully;
- (void)OnBatchGetBySourceIdFailedWith:(NSArray *)arg1;
- (void)OnBatchGetBySourceIdSuccessfullyWithReqFilterArr:(NSArray *)arg1 existFilterArr:(NSArray *)arg2 unExistFilterArr:(NSArray *)arg3 existItemArr:(NSArray *)arg4;
- (void)OnNoteSecurityCheck:(unsigned int)arg1 isSuccess:(_Bool)arg2;
- (void)OnTagListUpdate;
- (void)OnFavCapacityInfoUpdate;
- (void)OnDelFavoritesItems:(NSArray *)arg1;
- (void)OnUpdateItems:(NSArray *)arg1;
- (void)OnSearch:(NSArray *)arg1 taskKey:(NSString *)arg2;
- (void)OnCacheWebFinish:(FavoritesItem *)arg1;
- (void)OnUploadFavoritesItem:(FavoritesItem *)arg1 LocalDataId:(NSString *)arg2 FinishedLength:(long long)arg3 TotalLength:(long long)arg4;
- (void)OnUploadFavoritesItemFinish:(FavoritesItem *)arg1 ErrCode:(int)arg2;
- (void)OnFavoritesItemDownloadFinished:(FavoritesItem *)arg1 ErrCode:(int)arg2;
- (void)OnAddNewFavoritesItems:(NSArray *)arg1;
- (void)OnGetNextPageFavoritesCapacityItemList:(NSArray *)arg1 IsSuccess:(_Bool)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnGetFirstPageFavoritesCapacityItemList:(NSArray *)arg1 IsSuccess:(_Bool)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnGetNextPageFavoritesByType:(NSArray *)arg1 IsSuccess:(_Bool)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnGetFirstPageFavoritesByType:(NSArray *)arg1 IsSuccess:(_Bool)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnHasAnyFavoriteData:(_Bool)arg1;
- (void)OnGetNextPageFavoritesItemList:(NSArray *)arg1 IsSuccess:(_Bool)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnGetFirstPageFavoritesItemList:(NSArray *)arg1 IsSuccess:(_Bool)arg2 HasMoreItems:(_Bool)arg3;
@end

