//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData;

@interface WCFinderLiveAudienceOpFansGroupCGI
{
    unsigned long long _opType;
    NSData *_liveCookies;
    NSData *_superfanSubscriptionInfo;
    CDUnknownBlockType _joinPrepareSuccessBlock;
    CDUnknownBlockType _joinPrepareFailBlock;
    CDUnknownBlockType _joinSuccessBlock;
    CDUnknownBlockType _joinFailBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType joinFailBlock; // @synthesize joinFailBlock=_joinFailBlock;
@property(copy, nonatomic) CDUnknownBlockType joinSuccessBlock; // @synthesize joinSuccessBlock=_joinSuccessBlock;
@property(copy, nonatomic) CDUnknownBlockType joinPrepareFailBlock; // @synthesize joinPrepareFailBlock=_joinPrepareFailBlock;
@property(copy, nonatomic) CDUnknownBlockType joinPrepareSuccessBlock; // @synthesize joinPrepareSuccessBlock=_joinPrepareSuccessBlock;
@property(retain, nonatomic) NSData *superfanSubscriptionInfo; // @synthesize superfanSubscriptionInfo=_superfanSubscriptionInfo;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(nonatomic) unsigned long long opType; // @synthesize opType=_opType;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initJoinFansGroupWithTaskId:(id)arg1 liveCookies:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
- (id)initJoinPrepareWithTaskId:(id)arg1 liveCookies:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;

@end

