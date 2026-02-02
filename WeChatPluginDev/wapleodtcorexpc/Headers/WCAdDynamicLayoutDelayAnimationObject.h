//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, UIView;

@interface WCAdDynamicLayoutDelayAnimationObject : NSObject
{
    double _duration;
    unsigned long long _animationOptions;
    NSArray *_properties;
    UIView *_view;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(nonatomic) unsigned long long animationOptions; // @synthesize animationOptions=_animationOptions;
@property(nonatomic) double duration; // @synthesize duration=_duration;

@end

