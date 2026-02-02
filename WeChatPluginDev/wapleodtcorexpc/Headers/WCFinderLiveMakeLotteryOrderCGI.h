//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveLotteryMethodInfo, NSData;

@interface WCFinderLiveMakeLotteryOrderCGI
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    MMFinderLiveLotteryMethodInfo *_lotteryOrderInfo;
    NSData *_liveCookies;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) MMFinderLiveLotteryMethodInfo *lotteryOrderInfo; // @synthesize lotteryOrderInfo=_lotteryOrderInfo;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLotteryOrderInfo:(id)arg1 liveCookies:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;

@end

