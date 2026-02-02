//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveTaskId, MMFinderPivotLiveViewController;

@protocol MMFinderPivotLiveViewControllerDelegate <NSObject>
- (void)onFinderPivotLiveViewController:(MMFinderPivotLiveViewController *)arg1 requestReplacementWithReplayForTaskId:(MMFinderLiveTaskId *)arg2;
@end

