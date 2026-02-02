//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveLotteryFillClaimInfoRequest_ClaimInfo, NSData, NSString;

@interface WCFinderLiveLotteryFillClaimInfoCGI
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    unsigned long long _objectId;
    NSData *_liveCookies;
    NSString *_lotteryId;
    FinderLiveLotteryFillClaimInfoRequest_ClaimInfo *_claimInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveLotteryFillClaimInfoRequest_ClaimInfo *claimInfo; // @synthesize claimInfo=_claimInfo;
@property(retain, nonatomic) NSString *lotteryId; // @synthesize lotteryId=_lotteryId;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveLotteryFillClaimInfoWithTaskId:(unsigned long long)arg1 objectId:(unsigned long long)arg2 liveCookies:(id)arg3 lotteryId:(id)arg4 claimInfo:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;

@end

