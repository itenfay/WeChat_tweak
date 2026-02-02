//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSDictionary;

@interface OMJAsyncSpeechSynthQueryResponseInfo : NSObject
{
    _Bool _isFinished;
    NSData *_audioData;
    long long _audioIndex;
    long long _httpRetCode;
    long long _taskID;
    NSDictionary *_extraInfos;
    unsigned long long _queryIntervalMillis;
    NSData *_contextBuff;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *contextBuff; // @synthesize contextBuff=_contextBuff;
@property(readonly, nonatomic) unsigned long long queryIntervalMillis; // @synthesize queryIntervalMillis=_queryIntervalMillis;
@property(readonly, nonatomic) NSDictionary *extraInfos; // @synthesize extraInfos=_extraInfos;
@property(readonly, nonatomic) long long taskID; // @synthesize taskID=_taskID;
@property(readonly, nonatomic) long long httpRetCode; // @synthesize httpRetCode=_httpRetCode;
@property(readonly, nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(readonly, nonatomic) long long audioIndex; // @synthesize audioIndex=_audioIndex;
@property(readonly, nonatomic) NSData *audioData; // @synthesize audioData=_audioData;
- (id)initWithAudioData:(id)arg1 audioIndex:(long long)arg2 isFinished:(_Bool)arg3 httpRetCode:(long long)arg4 taskID:(long long)arg5 extraInfos:(id)arg6 queryIntervalMillis:(unsigned long long)arg7 contextBuff:(id)arg8;

@end

