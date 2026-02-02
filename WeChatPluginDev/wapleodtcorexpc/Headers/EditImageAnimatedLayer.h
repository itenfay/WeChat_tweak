//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <QuartzCore/CALayer.h>

@class CAKeyframeAnimation;
@protocol CAMediaTiming;

@interface EditImageAnimatedLayer : CALayer
{
    CAKeyframeAnimation *m_contentsAnimation;
    id <CAMediaTiming> _timingObj;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CAMediaTiming> timingObj; // @synthesize timingObj=_timingObj;
- (void)layoutSublayers;
- (void)layoutIfNeeded;
- (void)removeAnimationForKey:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;

@end

