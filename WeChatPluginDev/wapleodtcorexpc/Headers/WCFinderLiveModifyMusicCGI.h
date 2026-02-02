//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, NSData, NSMutableArray;

@interface WCFinderLiveModifyMusicCGI
{
    NSMutableArray *_songIdList;
    NSMutableArray *_briefMusicInfos;
    NSData *_liveCookies;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) NSMutableArray *briefMusicInfos; // @synthesize briefMusicInfos=_briefMusicInfos;
@property(retain, nonatomic) NSMutableArray *songIdList; // @synthesize songIdList=_songIdList;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderTaskId:(id)arg1 songIdList:(id)arg2 briefMusicInfos:(id)arg3 liveCookies:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;

// Remaining properties
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId;

@end

