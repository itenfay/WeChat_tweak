//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveGiftGoalView;

@protocol MMFinderLiveGiftGoalViewDelegate <NSObject>

@optional
- (void)onGiftGoalViewFulfilled:(MMFinderLiveGiftGoalView *)arg1;
- (void)onGiftGoalViewLayoutRequested:(MMFinderLiveGiftGoalView *)arg1;
- (void)onGiftGoalViewCloseRequested:(MMFinderLiveGiftGoalView *)arg1 explicitly:(_Bool)arg2;
- (void)onGiftGoalViewInitiateSendRequested:(MMFinderLiveGiftGoalView *)arg1;
@end

