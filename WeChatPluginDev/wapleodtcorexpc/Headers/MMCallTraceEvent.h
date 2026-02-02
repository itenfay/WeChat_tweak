//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMCallTraceEvent : NSObject
{
    int _depth;
    int _processID;
    int _threadID;
    NSString *_name;
    unsigned long long _type;
    long long _time;
}

- (void).cxx_destruct;
@property(nonatomic) int threadID; // @synthesize threadID=_threadID;
@property(nonatomic) int processID; // @synthesize processID=_processID;
@property(nonatomic) int depth; // @synthesize depth=_depth;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

@end

