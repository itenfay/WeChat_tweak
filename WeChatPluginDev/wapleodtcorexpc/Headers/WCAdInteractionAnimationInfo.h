//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdInteractionAnimationInfo : NSObject
{
    NSString *_resourceId;
    double _duration;
    double _delay;
    unsigned long long _animationType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long animationType; // @synthesize animationType=_animationType;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

