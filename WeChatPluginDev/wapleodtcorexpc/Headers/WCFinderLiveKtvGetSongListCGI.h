//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, WCFinderDataItem;

@interface WCFinderLiveKtvGetSongListCGI
{
    _Bool _onlyMysong;
    unsigned int _scene;
    int _commentScene;
    unsigned int _status;
    unsigned int _requestCnt;
    WCFinderDataItem *_finderDataItem;
    NSData *_liveCookies;
    unsigned long long _songListVersion;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) unsigned long long songListVersion; // @synthesize songListVersion=_songListVersion;
@property(nonatomic) unsigned int requestCnt; // @synthesize requestCnt=_requestCnt;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(nonatomic) _Bool onlyMysong; // @synthesize onlyMysong=_onlyMysong;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WCFinderDataItem *finderDataItem; // @synthesize finderDataItem=_finderDataItem;
- (id)transferToSongItemsFromSongInfos:(id)arg1;
- (void)updatePendingSongsAndVersion:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequestWithoutTask;
- (void)createRequest;
- (id)initWithDataItem:(id)arg1 scene:(unsigned int)arg2 commentScene:(int)arg3 status:(unsigned int)arg4 onlyMysong:(_Bool)arg5 requestCnt:(unsigned int)arg6 songListVersion:(unsigned long long)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 scene:(unsigned int)arg3 status:(unsigned int)arg4 onlyMysong:(_Bool)arg5 requestCnt:(unsigned int)arg6 songListVersion:(unsigned long long)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 scene:(unsigned int)arg3 status:(unsigned int)arg4 onlyMysong:(_Bool)arg5 songListVersion:(unsigned long long)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;

@end

