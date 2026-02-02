//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveKTVSongItem, NSData, WCFinderDataItem;

@interface WCFinderLiveKtvGetSongPlayInfoCGI
{
    int _commentScene;
    MMFinderLiveKTVSongItem *_songItem;
    WCFinderDataItem *_finderDataItem;
    long long _liveScene;
    NSData *_liveCookies;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) long long liveScene; // @synthesize liveScene=_liveScene;
@property(retain, nonatomic) WCFinderDataItem *finderDataItem; // @synthesize finderDataItem=_finderDataItem;
@property(retain, nonatomic) MMFinderLiveKTVSongItem *songItem; // @synthesize songItem=_songItem;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequestWithoutLiveTask;
- (void)createRequest;
- (id)initWithDataItem:(id)arg1 songItem:(id)arg2 liveScene:(long long)arg3 commentScene:(int)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (id)initWithLiveTaskId:(id)arg1 songItem:(id)arg2 liveScene:(long long)arg3 liveCookies:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;

@end

