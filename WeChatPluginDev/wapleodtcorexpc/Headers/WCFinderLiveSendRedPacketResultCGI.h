//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, NSData, NSString;

@interface WCFinderLiveSendRedPacketResultCGI
{
    MMFinderLiveTaskId *_taskId;
    unsigned long long _liveId;
    unsigned long long _finderId;
    NSString *_finderNonceId;
    NSData *_liveCookies;
    NSString *_redPacketId;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) NSString *redPacketId; // @synthesize redPacketId=_redPacketId;
@property(copy, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(copy, nonatomic) NSString *finderNonceId; // @synthesize finderNonceId=_finderNonceId;
@property(nonatomic) unsigned long long finderId; // @synthesize finderId=_finderId;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderTaskId:(id)arg1 liveId:(unsigned long long)arg2 finderId:(unsigned long long)arg3 finderNonceId:(id)arg4 liveCookies:(id)arg5 redPacketId:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;

@end

