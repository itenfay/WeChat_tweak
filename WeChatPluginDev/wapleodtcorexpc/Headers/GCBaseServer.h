//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GCBaseServer : NSObject
{
    _Bool _exited;
    NSMutableDictionary *_longPollingTimeDict;
    NSMutableDictionary *_cmdIdDict;
    long long _requestSeq;
}

- (void).cxx_destruct;
@property(nonatomic) long long requestSeq; // @synthesize requestSeq=_requestSeq;
@property(retain, nonatomic) NSMutableDictionary *cmdIdDict; // @synthesize cmdIdDict=_cmdIdDict;
@property(retain, nonatomic) NSMutableDictionary *longPollingTimeDict; // @synthesize longPollingTimeDict=_longPollingTimeDict;
@property(nonatomic) _Bool exited; // @synthesize exited=_exited;
- (float)delaySecondsAfterFaile;
- (void)onExitRoom;
- (void)exitRoom;
- (void)invalidatePreviousRequest;
- (void)sendPBRequest:(id)arg1 command:(unsigned int)arg2 svrPath:(id)arg3 responseClass:(Class)arg4 longPolling:(_Bool)arg5 additionalInfo:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (id)checkResponseError:(id)arg1;
- (_Bool)defaultSpeedRequeset;
- (void)sendPBRequest:(id)arg1 command:(unsigned int)arg2 svrPath:(id)arg3 responseClass:(Class)arg4 longPolling:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (id)init;

@end

