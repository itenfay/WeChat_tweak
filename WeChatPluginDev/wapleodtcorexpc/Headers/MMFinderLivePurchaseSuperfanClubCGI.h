//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData;

@interface MMFinderLivePurchaseSuperfanClubCGI
{
    int _consumeType;
    NSData *_liveCookies;
    NSData *_superfanSubscriptionInfo;
    CDUnknownBlockType _failBlock;
    CDUnknownBlockType _successBlock;
}

- (void).cxx_destruct;
@property(nonatomic) int consumeType; // @synthesize consumeType=_consumeType;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(retain, nonatomic) NSData *superfanSubscriptionInfo; // @synthesize superfanSubscriptionInfo=_superfanSubscriptionInfo;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initJoinSuperfanWithTaskId:(id)arg1 liveCookies:(id)arg2 subscrptionType:(unsigned long long)arg3 subscriptionInfo:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;

@end

