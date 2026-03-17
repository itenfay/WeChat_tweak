//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveGestureAnimationView;

@protocol MMFinderLiveGestureAnimationContainerViewDelegate <NSObject>

@optional
- (void)onGestureAnimationViewDidEndPlaying:(MMFinderLiveGestureAnimationView *)arg1;
- (void)onGestureAnimationViewWillBeginPlaying:(MMFinderLiveGestureAnimationView *)arg1;
@end

