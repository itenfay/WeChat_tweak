//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveBoxId, MMFinderLiveTaskId, NSArray;

@protocol MMFinderLiveBarrageModelExt <NSObject>

@optional
- (void)onFinderLiveCommentDataItemsUpdate:(NSArray *)arg1 taskId:(MMFinderLiveTaskId *)arg2 boxId:(FinderLiveBoxId *)arg3;
- (void)onFinderLiveFloatingDataItemsUpdate:(NSArray *)arg1 taskId:(MMFinderLiveTaskId *)arg2;
@end

