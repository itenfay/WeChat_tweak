//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveBoxId, MMLiveCommentDataItem, MMLiveTaskId;

@protocol MMLiveCommentDataExt <NSObject>

@optional
- (void)onMMLiveCommentDataInsertPreForTaskId:(MMLiveTaskId *)arg1 boxId:(FinderLiveBoxId *)arg2;
- (void)onMMLiveCommentDataItemLikeInfoUpdate:(MMLiveCommentDataItem *)arg1 forTaskId:(MMLiveTaskId *)arg2 boxId:(FinderLiveBoxId *)arg3;
- (void)onMMLiveCommentDataLoadedForTaskId:(MMLiveTaskId *)arg1 boxId:(FinderLiveBoxId *)arg2;
- (void)onMMLiveCommentDataResetForTaskId:(MMLiveTaskId *)arg1 boxId:(FinderLiveBoxId *)arg2;
- (void)onSelfMMLiveCommentDataStatusUpdated:(MMLiveCommentDataItem *)arg1 forTaskId:(MMLiveTaskId *)arg2;
- (void)onSelfMMLiveCommentDataCompleted:(MMLiveCommentDataItem *)arg1 forTaskId:(MMLiveTaskId *)arg2;
- (void)onMMLiveCommentDataDeleted:(double)arg1 forTaskId:(MMLiveTaskId *)arg2;
- (void)onMMLiveCommentDataUpdateForTaskId:(MMLiveTaskId *)arg1 boxId:(FinderLiveBoxId *)arg2 isHistoryComment:(_Bool)arg3;
@end

