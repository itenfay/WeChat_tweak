//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MMFinderLiveKTVReporter : NSObject
{
    NSMutableDictionary *_logRecordDict;
    double _logInterval;
}

+ (id)createKeyWithTarget:(id)arg1 sel:(id)arg2 business:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) double logInterval; // @synthesize logInterval=_logInterval;
@property(retain, nonatomic) NSMutableDictionary *logRecordDict; // @synthesize logRecordDict=_logRecordDict;
- (_Bool)tryFreqLogForTarget:(id)arg1 sel:(id)arg2 business:(id)arg3 interval:(double)arg4;
- (_Bool)tryFreqLogForTarget:(id)arg1 sel:(id)arg2 business:(id)arg3;
- (id)init;

@end

