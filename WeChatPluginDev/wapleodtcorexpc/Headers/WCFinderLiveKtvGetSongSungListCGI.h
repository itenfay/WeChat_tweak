//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData;

@interface WCFinderLiveKtvGetSongSungListCGI
{
    _Bool _onlyMysong;
    unsigned int _scene;
    unsigned int _status;
    NSData *_liveCookies;
    NSData *_lastBuffer;
    unsigned long long _songListVersion;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) unsigned long long songListVersion; // @synthesize songListVersion=_songListVersion;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(nonatomic) _Bool onlyMysong; // @synthesize onlyMysong=_onlyMysong;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 scene:(unsigned int)arg3 onlyMysong:(_Bool)arg4 lastBuffer:(id)arg5 songListVersion:(unsigned long long)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;

@end

