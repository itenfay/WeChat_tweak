//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface OMJDashLineStyle : NSObject
{
    NSArray *_intervals;
    double _phase;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double phase; // @synthesize phase=_phase;
@property(readonly, nonatomic) NSArray *intervals; // @synthesize intervals=_intervals;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithIntervals:(id)arg1 phase:(double)arg2;

@end

