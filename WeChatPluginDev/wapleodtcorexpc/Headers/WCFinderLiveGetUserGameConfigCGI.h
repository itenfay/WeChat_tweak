//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveGetUserGameConfigRequest_GameCategoryInfo, NSString, PagingGetGamePlayTogetherDynamicItem;

@interface WCFinderLiveGetUserGameConfigCGI
{
    _Bool _onlyNeedPlayTogetherInfo;
    unsigned int _opensdkVersion;
    unsigned int _platformId;
    int _liveScene;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    NSString *_finderUsername;
    NSString *_appId;
    NSString *_extraAntiInfo;
    NSString *_gameUserId;
    PagingGetGamePlayTogetherDynamicItem *_pagingGetDynamicItem;
    FinderLiveGetUserGameConfigRequest_GameCategoryInfo *_gameCategoryInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveGetUserGameConfigRequest_GameCategoryInfo *gameCategoryInfo; // @synthesize gameCategoryInfo=_gameCategoryInfo;
@property(retain, nonatomic) PagingGetGamePlayTogetherDynamicItem *pagingGetDynamicItem; // @synthesize pagingGetDynamicItem=_pagingGetDynamicItem;
@property(nonatomic) _Bool onlyNeedPlayTogetherInfo; // @synthesize onlyNeedPlayTogetherInfo=_onlyNeedPlayTogetherInfo;
@property(nonatomic) int liveScene; // @synthesize liveScene=_liveScene;
@property(retain, nonatomic) NSString *gameUserId; // @synthesize gameUserId=_gameUserId;
@property(nonatomic) unsigned int platformId; // @synthesize platformId=_platformId;
@property(nonatomic) unsigned int opensdkVersion; // @synthesize opensdkVersion=_opensdkVersion;
@property(retain, nonatomic) NSString *extraAntiInfo; // @synthesize extraAntiInfo=_extraAntiInfo;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderUsername:(id)arg1 appId:(id)arg2 liveScene:(int)arg3 extraAntiInfo:(id)arg4 opensdkVersion:(unsigned int)arg5 platformId:(unsigned int)arg6 gameUserId:(id)arg7 onlyNeedPlayTogetherInfo:(_Bool)arg8 pagingGetDynamicItem:(id)arg9 gameCategoryInfo:(id)arg10 successBlock:(CDUnknownBlockType)arg11 failBlock:(CDUnknownBlockType)arg12;

@end

