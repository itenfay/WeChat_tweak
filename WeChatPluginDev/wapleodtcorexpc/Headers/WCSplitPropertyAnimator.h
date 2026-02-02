//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewPropertyAnimator.h>

@interface WCSplitPropertyAnimator : UIViewPropertyAnimator
{
    CDUnknownBlockType _animation;
    CDUnknownBlockType _complete;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
@property(copy, nonatomic) CDUnknownBlockType animation; // @synthesize animation=_animation;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)addAnimations:(CDUnknownBlockType)arg1;
- (void)startAnimation;
- (void)startWithoutAnimation;

@end

