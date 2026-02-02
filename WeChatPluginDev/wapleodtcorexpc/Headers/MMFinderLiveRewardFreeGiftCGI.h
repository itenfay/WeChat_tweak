//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveRewardFreeGiftParams;

@interface MMFinderLiveRewardFreeGiftCGI
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    MMFinderLiveRewardFreeGiftParams *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveRewardFreeGiftParams *params; // @synthesize params=_params;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderTaskId:(id)arg1 rewardParams:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;

@end

