//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAMediaTimingFunction;

@interface POPBasicAnimation
{
}

+ (id)defaultAnimation;
+ (id)easeInEaseOutAnimation;
+ (id)easeOutAnimation;
+ (id)easeInAnimation;
+ (id)linearAnimation;
+ (id)animationWithPropertyNamed:(id)arg1;
+ (id)animation;
- (void)_appendDescription:(id)arg1 debug:(_Bool)arg2;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property(nonatomic) double duration;
- (id)init;
- (void)_initState;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

