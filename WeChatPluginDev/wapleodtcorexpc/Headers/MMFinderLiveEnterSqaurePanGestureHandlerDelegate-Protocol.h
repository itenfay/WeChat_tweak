//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveEnterSqaurePanGestureHandler;

@protocol MMFinderLiveEnterSqaurePanGestureHandlerDelegate <NSObject>

@optional
- (void)onEnterSqaureInteractiveTransitionDidEnd:(MMFinderLiveEnterSqaurePanGestureHandler *)arg1 isComplete:(_Bool)arg2 isPop:(_Bool)arg3;
- (void)onEnterSqaureInteractiveTransitionWillEnd:(MMFinderLiveEnterSqaurePanGestureHandler *)arg1 isComplete:(_Bool)arg2 isPop:(_Bool)arg3;
- (void)onEnterSqaureInteractiveTransitionChanged:(MMFinderLiveEnterSqaurePanGestureHandler *)arg1 progress:(double)arg2 translation:(struct CGPoint)arg3 isPop:(_Bool)arg4;
- (void)onEnterSqaureInteractiveTransitionBegin:(MMFinderLiveEnterSqaurePanGestureHandler *)arg1 isPop:(_Bool)arg2;
@end

