//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface OMJAsyncSpeechQueryResponseInfo : NSObject
{
    _Bool _isFinished;
    NSData *_data;
    long long _httpRetCode;
    long long _taskID;
    unsigned long long _queryIntervalMillis;
    NSData *_contextBuff;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *contextBuff; // @synthesize contextBuff=_contextBuff;
@property(readonly, nonatomic) unsigned long long queryIntervalMillis; // @synthesize queryIntervalMillis=_queryIntervalMillis;
@property(readonly, nonatomic) long long taskID; // @synthesize taskID=_taskID;
@property(readonly, nonatomic) long long httpRetCode; // @synthesize httpRetCode=_httpRetCode;
@property(readonly, nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (id)initWithData:(id)arg1 isFinished:(_Bool)arg2 httpRetCode:(long long)arg3 taskID:(long long)arg4 queryIntervalMillis:(unsigned long long)arg5 contextBuff:(id)arg6;

@end

