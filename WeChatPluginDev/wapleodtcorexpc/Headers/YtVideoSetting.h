//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface YtVideoSetting : NSObject
{
    NSArray *_configs;
    double _duration;
    double _unit;
}

- (void).cxx_destruct;
@property(nonatomic) double unit; // @synthesize unit=_unit;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (float)screenAtElapse:(double)arg1;
- (long long)argbAtElapse:(double)arg1;
- (id)initWithJsonStr:(id)arg1;
- (id)initWithFileRes:(id)arg1;
- (id)initWithFile:(id)arg1;

@end

