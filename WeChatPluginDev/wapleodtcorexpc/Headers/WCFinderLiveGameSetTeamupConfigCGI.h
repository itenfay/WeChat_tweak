//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSDictionary;

@interface WCFinderLiveGameSetTeamupConfigCGI
{
    unsigned int _liveScene;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    NSData *_liveCookies;
    NSDictionary *_gameInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *gameInfo; // @synthesize gameInfo=_gameInfo;
@property(nonatomic) unsigned int liveScene; // @synthesize liveScene=_liveScene;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 liveCookies:(id)arg3 liveScene:(long long)arg4 gameInfo:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;

@end

