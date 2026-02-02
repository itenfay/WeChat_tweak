//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveBoxId, MMLiveCommentDataItem, NSArray;

@protocol MMFinderLiveSFBarrageViewModelDelegate <NSObject>
- (void)onFinderLiveSFBarrageHasData:(_Bool)arg1;
- (unsigned long long)requestBarrageMaxAddCountOnce;
- (_Bool)isCurrentLandscapeLayout;
- (_Bool)isAllTracksAvailable;
- (void)onFinderLiveSFBarrageNewDataItemAvailable;
- (void)onFinderLiveSFBarrageTriggerCallback;
- (NSArray *)requestRecentLoadedCommentItemList:(unsigned long long)arg1 boxId:(FinderLiveBoxId *)arg2 requiredMsgTypeList:(NSArray *)arg3 requiredMsgSubTypeList:(NSArray *)arg4;
- (MMLiveCommentDataItem *)getLastValidCommentItem:(FinderLiveBoxId *)arg1;
- (NSArray *)getFinderLiveBoxIdList;
@end

