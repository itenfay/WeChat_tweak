//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPVCodecCapabilityForGet : NSObject
{
    long long _maxLumaSamples;
    long long _maxProfile;
    long long _maxLevel;
    long long _framerate;
}

@property(nonatomic) long long framerate; // @synthesize framerate=_framerate;
@property(nonatomic) long long maxLevel; // @synthesize maxLevel=_maxLevel;
@property(nonatomic) long long maxProfile; // @synthesize maxProfile=_maxProfile;
@property(nonatomic) long long maxLumaSamples; // @synthesize maxLumaSamples=_maxLumaSamples;
- (id)initWithMaxlumaSamples:(long long)arg1 maxProfile:(long long)arg2 maxLevel:(long long)arg3 framerate:(long long)arg4;

@end

