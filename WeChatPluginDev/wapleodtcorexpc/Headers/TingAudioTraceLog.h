//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TingAudioTraceLog : NSObject
{
    NSMutableArray *_traceLogs;
    double _realPlayedTime;
    double _previousStartTime;
}

- (void).cxx_destruct;
@property(nonatomic) double previousStartTime; // @synthesize previousStartTime=_previousStartTime;
@property(nonatomic) double realPlayedTime; // @synthesize realPlayedTime=_realPlayedTime;
@property(retain, nonatomic) NSMutableArray *traceLogs; // @synthesize traceLogs=_traceLogs;
- (id)logStrings;
- (void)makeRecordWith:(int)arg1 currentTime:(double)arg2 playRate:(float)arg3 hasMinimizedWindow:(_Bool)arg4;
- (id)init;

@end

