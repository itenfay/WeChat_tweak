//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface OMJAsyncSpeechSubmitResponseInfo : NSObject
{
    NSString *_submitTaskID;
    long long _taskID;
    unsigned long long _queryIntervalMillis;
    NSData *_contextBuff;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *contextBuff; // @synthesize contextBuff=_contextBuff;
@property(readonly, nonatomic) unsigned long long queryIntervalMillis; // @synthesize queryIntervalMillis=_queryIntervalMillis;
@property(readonly, nonatomic) long long taskID; // @synthesize taskID=_taskID;
@property(readonly, nonatomic) NSString *submitTaskID; // @synthesize submitTaskID=_submitTaskID;
- (id)initWithSubmitTaskID:(id)arg1 taskID:(long long)arg2 queryIntervalMillis:(unsigned long long)arg3 contextBuff:(id)arg4;

@end

