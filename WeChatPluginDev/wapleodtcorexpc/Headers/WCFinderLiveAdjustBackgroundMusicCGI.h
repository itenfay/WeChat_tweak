//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveBriefMusicInfo, NSData, NSString;

@interface WCFinderLiveAdjustBackgroundMusicCGI
{
    unsigned int _bizScene;
    unsigned int _curVolume;
    unsigned int _curSongId;
    unsigned int _curSongRatio;
    unsigned int _action;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    NSString *_finderUsername;
    NSData *_liveCookies;
    unsigned long long _objectId;
    unsigned long long _liveId;
    FinderLiveBriefMusicInfo *_song;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveBriefMusicInfo *song; // @synthesize song=_song;
@property(nonatomic) unsigned int action; // @synthesize action=_action;
@property(nonatomic) unsigned int curSongRatio; // @synthesize curSongRatio=_curSongRatio;
@property(nonatomic) unsigned int curSongId; // @synthesize curSongId=_curSongId;
@property(nonatomic) unsigned int curVolume; // @synthesize curVolume=_curVolume;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(nonatomic) unsigned int bizScene; // @synthesize bizScene=_bizScene;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderUsername:(id)arg1 bizScene:(unsigned int)arg2 liveCookies:(id)arg3 liveId:(unsigned long long)arg4 objectId:(unsigned long long)arg5 curVolume:(unsigned int)arg6 curSongId:(unsigned int)arg7 curSongRatio:(unsigned int)arg8 action:(int)arg9 song:(id)arg10 successBlock:(CDUnknownBlockType)arg11 failBlock:(CDUnknownBlockType)arg12;

@end

