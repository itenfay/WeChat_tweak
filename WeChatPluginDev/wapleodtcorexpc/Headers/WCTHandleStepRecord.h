//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate;

@interface WCTHandleStepRecord : NSObject
{
    int _stepCount;
    double _totalTime;
    NSDate *_startTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int stepCount; // @synthesize stepCount=_stepCount;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;

@end

