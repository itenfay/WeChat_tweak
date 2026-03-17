//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, WCFinderBatchModContactTypeTask;

@protocol WCFinderBatchModContactTypeTaskDelegate <NSObject>

@optional
- (void)finderBatchModContactTypeTask:(WCFinderBatchModContactTypeTask *)arg1 finishWithSuccessNames:(NSArray *)arg2 failedNames:(NSArray *)arg3 allSuccess:(_Bool)arg4;
@end

