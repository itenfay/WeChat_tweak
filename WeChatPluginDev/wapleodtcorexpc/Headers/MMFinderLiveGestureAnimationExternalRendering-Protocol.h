//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol MMFinderLiveGestureAnimationExternalRenderingDelegate;

@protocol MMFinderLiveGestureAnimationExternalRendering <NSObject>
@property(nonatomic) __weak id <MMFinderLiveGestureAnimationExternalRenderingDelegate> delegate;
- (void)addGestureAnimationForCurrentUserWithGestureId:(NSString *)arg1 instanceId:(NSString *)arg2 translationX:(double)arg3 translationY:(double)arg4 rotation:(double)arg5 scale:(double)arg6;
@end

