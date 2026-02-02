//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MMTestRecorder : NSObject
{
    float _x;
    NSArray *_values;
}

+ (id)TestRecorderWithX:(float)arg1 values:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) float x; // @synthesize x=_x;
- (id)description;
- (id)initWithX:(float)arg1 values:(id)arg2;

@end

