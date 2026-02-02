//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMJFrameRate : NSObject
{
    struct XMFFrameRate _backingFrameRate;
}

+ (id)fromNumericValue:(float)arg1;
+ (id)fromType:(unsigned long long)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct XMFFrameRate backingFrameRate; // @synthesize backingFrameRate=_backingFrameRate;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)roundToStandardNonFractional;
- (id)roundToStandard;
- (id)toStringWithCustomUnit:(id)arg1;
- (long long)frameCountForDuration:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) CDStruct_1b6d18a9 frameDuration;
@property(readonly, nonatomic) float numericValue;
@property(readonly, nonatomic) _Bool isNull;
- (id)initWithBackingFrameRate:(const void *)arg1;

@end

