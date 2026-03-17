//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface MMUIView : UIView
{
    struct UIEdgeInsets _expendTouchInsets;
}

+ (double)shakeHeadAnimationDurationForType:(unsigned long long)arg1;
@property(nonatomic) struct UIEdgeInsets expendTouchInsets; // @synthesize expendTouchInsets=_expendTouchInsets;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)arcWithAngle:(double)arg1;
- (id)shakeHeadAnimation;
- (id)crookShakeHeadAnimationNeedReverse:(_Bool)arg1;
- (id)defaultShakeHeadAnimation;
- (id)shakeHeadAnimationForTimeOffset:(double)arg1 andType:(unsigned long long)arg2;
- (void)stopShakeHead;
- (void)shakeHeadForType:(unsigned long long)arg1;
- (void)shakeHead;
- (void)prepareShakeHeadForType:(unsigned long long)arg1;
- (void)prepareShakeHead;

@end

