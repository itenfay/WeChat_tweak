//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveBoxId, MMLiveCommentDataItem, MMLiveTaskId, NSArray;

@protocol MMLiveCommentExt <NSObject>

@optional
- (void)onAppendCommentDataItemList:(NSArray *)arg1 forTaskId:(MMLiveTaskId *)arg2 boxId:(FinderLiveBoxId *)arg3 preAppend:(_Bool)arg4;
- (void)onAppendCommentDataItem:(MMLiveCommentDataItem *)arg1 forTaskId:(MMLiveTaskId *)arg2 boxId:(FinderLiveBoxId *)arg3;
- (void)onAppendCommentDataItem:(MMLiveCommentDataItem *)arg1 forTaskId:(MMLiveTaskId *)arg2 isPublic:(_Bool)arg3;
- (void)onAppendCommentDataItem:(MMLiveCommentDataItem *)arg1 forTaskId:(MMLiveTaskId *)arg2;
@end

