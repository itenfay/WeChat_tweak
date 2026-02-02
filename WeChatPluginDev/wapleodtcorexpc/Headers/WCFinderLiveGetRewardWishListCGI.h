//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData;

@interface WCFinderLiveGetRewardWishListCGI
{
    unsigned int _liveScene;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    NSData *_liveCookies;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int liveScene; // @synthesize liveScene=_liveScene;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 liveScene:(long long)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;

@end

