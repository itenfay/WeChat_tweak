//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveActivityTaskId, MMFinderLiveTaskId, NSArray;

@protocol MMFinderLiveOlyBarrageDataItemTransferExt <NSObject>

@optional
- (void)onFinderLiveBarrageDataItemsUpdate:(NSArray *)arg1 taskId:(MMFinderLiveTaskId *)arg2;
- (void)onFinderLiveOlyBarrageDataItemsUpdate:(NSArray *)arg1 taskId:(MMFinderLiveActivityTaskId *)arg2;
@end

