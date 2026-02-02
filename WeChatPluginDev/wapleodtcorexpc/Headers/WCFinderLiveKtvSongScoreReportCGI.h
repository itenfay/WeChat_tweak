//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveKtvSongScoreReportRequest_ScoreInfo, MMFinderLiveKTVSongItem, NSData;

@interface WCFinderLiveKtvSongScoreReportCGI
{
    _Bool _isFinish;
    MMFinderLiveKTVSongItem *_songItem;
    FinderLiveKtvSongScoreReportRequest_ScoreInfo *_scoreInfo;
    long long _liveScene;
    NSData *_liveCookies;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(nonatomic) long long liveScene; // @synthesize liveScene=_liveScene;
@property(nonatomic) _Bool isFinish; // @synthesize isFinish=_isFinish;
@property(retain, nonatomic) FinderLiveKtvSongScoreReportRequest_ScoreInfo *scoreInfo; // @synthesize scoreInfo=_scoreInfo;
@property(retain, nonatomic) MMFinderLiveKTVSongItem *songItem; // @synthesize songItem=_songItem;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 songItem:(id)arg2 scoreInfo:(id)arg3 finish:(_Bool)arg4 liveScene:(long long)arg5 liveCookies:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;

@end

