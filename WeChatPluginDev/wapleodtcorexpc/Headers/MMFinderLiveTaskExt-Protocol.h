//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveTask;

@protocol MMFinderLiveTaskExt <NSObject>

@optional
- (void)onFinderLiveTaskLiveAllowRotateChanged:(MMFinderLiveTask *)arg1;
- (void)onFinderLiveTaskLiveMicExtFlagChanged:(MMFinderLiveTask *)arg1;
- (void)onFinderLiveTaskTrialCountLimitReached:(MMFinderLiveTask *)arg1;
- (void)onFinderLiveTaskPaymentTypeChanged:(MMFinderLiveTask *)arg1;
@end

