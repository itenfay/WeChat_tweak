//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSValue;

@interface WAMapMarkerAnimationKeyFrame : NSObject
{
    NSValue *_coordValue;
    double _rotate;
    double _duration;
}

- (void).cxx_destruct;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double rotate; // @synthesize rotate=_rotate;
@property(retain, nonatomic) NSValue *coordValue; // @synthesize coordValue=_coordValue;

@end

