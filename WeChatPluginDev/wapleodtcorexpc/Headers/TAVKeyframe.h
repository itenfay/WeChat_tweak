//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol TAVKeyframeValue;

@interface TAVKeyframe : NSObject
{
    id <TAVKeyframeValue> _value;
    CDUnknownBlockType _timingFunction;
    CDStruct_1b6d18a9 _time;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType timingFunction; // @synthesize timingFunction=_timingFunction;
@property(retain, nonatomic) id <TAVKeyframeValue> value; // @synthesize value=_value;
@property(nonatomic) CDStruct_1b6d18a9 time; // @synthesize time=_time;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTime:(CDStruct_1b6d18a9)arg1 value:(id)arg2;

@end

