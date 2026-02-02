//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, PagingGetGamePlayTogetherDynamicItem;

@interface WCFinderLiveGetGameTeamInfoCGI
{
    unsigned int _liveScene;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    PagingGetGamePlayTogetherDynamicItem *_pagingGetDynamicItem;
    NSData *_liveCookies;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int liveScene; // @synthesize liveScene=_liveScene;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) PagingGetGamePlayTogetherDynamicItem *pagingGetDynamicItem; // @synthesize pagingGetDynamicItem=_pagingGetDynamicItem;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 liveCookies:(id)arg3 liveScene:(long long)arg4 pagingGetDynamicItem:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;

@end

