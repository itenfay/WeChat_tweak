//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderLiveComplainReplayMsgCGI
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequestWithObjectId:(unsigned long long)arg1 liveId:(unsigned long long)arg2 frameId:(id)arg3 seq:(unsigned long long)arg4;
- (id)initWithObjectId:(unsigned long long)arg1 liveId:(unsigned long long)arg2 frameId:(id)arg3 msgSeq:(unsigned long long)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;
- (id)initWithFinderTaskId:(id)arg1 frameId:(id)arg2 msgSeq:(unsigned long long)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;

@end

