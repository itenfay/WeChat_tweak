//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface OMJAsyncSpeechCloneQueryResponseInfo : NSObject
{
    _Bool _isFinished;
    NSString *_roleID;
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
@property(readonly, nonatomic) NSString *roleID; // @synthesize roleID=_roleID;
- (id)initWithRoleID:(id)arg1 isFinished:(_Bool)arg2 httpRetCode:(long long)arg3 taskID:(long long)arg4 extraInfos:(id)arg5 queryIntervalMillis:(unsigned long long)arg6 contextBuff:(id)arg7;

@end

