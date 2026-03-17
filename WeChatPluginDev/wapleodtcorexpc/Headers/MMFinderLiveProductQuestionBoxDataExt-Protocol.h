//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveBoxId, MMLiveCommentDataItem, MMLiveTaskId;

@protocol MMFinderLiveProductQuestionBoxDataExt <NSObject>

@optional
- (void)onProductQuestionBoxLoadRecentMsgsWithTaskId:(MMLiveTaskId *)arg1 boxId:(FinderLiveBoxId *)arg2;
- (void)onProductQuestionBoxRequestPreMsgsFromComment:(MMLiveCommentDataItem *)arg1 count:(int)arg2 taskId:(MMLiveTaskId *)arg3 boxId:(FinderLiveBoxId *)arg4;
@end

