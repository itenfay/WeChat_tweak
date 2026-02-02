//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AACWeakTimer, NSArray;

@interface CHHapticDynamicParameterModel : NSObject
{
    float _time;
    NSArray *_parameters;
    AACWeakTimer *_dynamicTtimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AACWeakTimer *dynamicTtimer; // @synthesize dynamicTtimer=_dynamicTtimer;
@property(nonatomic) float time; // @synthesize time=_time;
@property(copy, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
- (void)dealloc;
- (void)sendParameter:(id)arg1;
- (void)startTimer:(id)arg1:(id)arg2;

@end

