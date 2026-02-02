//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, NSArray, NSData, NSString;

@interface WCFinderLiveGetRedPacketInfoCGI
{
    MMFinderLiveTaskId *_taskId;
    unsigned long long _liveId;
    unsigned long long _finderId;
    NSString *_finderNonceId;
    NSData *_liveCookies;
    NSArray *_redPacketIdList;
    NSString *_finderUsername;
    long long _liveScene;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) long long liveScene; // @synthesize liveScene=_liveScene;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) NSArray *redPacketIdList; // @synthesize redPacketIdList=_redPacketIdList;
@property(copy, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(copy, nonatomic) NSString *finderNonceId; // @synthesize finderNonceId=_finderNonceId;
@property(nonatomic) unsigned long long finderId; // @synthesize finderId=_finderId;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderTaskId:(id)arg1 liveId:(unsigned long long)arg2 finderId:(unsigned long long)arg3 finderNonceId:(id)arg4 liveCookies:(id)arg5 redPacketIdList:(id)arg6 finderUsername:(id)arg7 liveScene:(long long)arg8 successBlock:(CDUnknownBlockType)arg9 failureBlock:(CDUnknownBlockType)arg10;

@end

