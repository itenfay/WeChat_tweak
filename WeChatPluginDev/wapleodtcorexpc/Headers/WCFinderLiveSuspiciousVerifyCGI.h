//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, NSString;

@interface WCFinderLiveSuspiciousVerifyCGI
{
    unsigned int _scene;
    MMFinderLiveTaskId *_taskId;
    NSString *_finderUsername;
    NSString *_verificationId;
    unsigned long long _objectId;
    unsigned long long _liveId;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(copy, nonatomic) NSString *verificationId; // @synthesize verificationId=_verificationId;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithTaskId:(id)arg1 finderUsername:(id)arg2 objectId:(unsigned long long)arg3 liveId:(unsigned long long)arg4 scene:(unsigned int)arg5 verificationId:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;

@end

