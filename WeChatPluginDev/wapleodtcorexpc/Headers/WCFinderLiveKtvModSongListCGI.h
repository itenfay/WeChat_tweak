//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveKtvSongReportInfo, NSData, NSString;

@interface WCFinderLiveKtvModSongListCGI
{
    _Bool _onlyMysong;
    unsigned int _scene;
    unsigned int _status;
    unsigned int _modType;
    NSData *_liveCookies;
    NSString *_songId;
    NSString *_uniqueId;
    NSString *_targetUserId;
    FinderLiveKtvSongReportInfo *_addSongReportInfo;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

+ (id)generateActionSync:(unsigned int)arg1 liveTaskId:(id)arg2 liveCookies:(id)arg3 scene:(unsigned int)arg4 targetUser:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) FinderLiveKtvSongReportInfo *addSongReportInfo; // @synthesize addSongReportInfo=_addSongReportInfo;
@property(retain, nonatomic) NSString *targetUserId; // @synthesize targetUserId=_targetUserId;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(retain, nonatomic) NSString *songId; // @synthesize songId=_songId;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(nonatomic) _Bool onlyMysong; // @synthesize onlyMysong=_onlyMysong;
@property(nonatomic) unsigned int modType; // @synthesize modType=_modType;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (id)transferToSongItemsFromSongInfos:(id)arg1;
- (void)updateExtraInfos:(id)arg1;
- (void)updatePendingSongsAndVersion:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 scene:(unsigned int)arg3 modType:(unsigned int)arg4 targetUser:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 scene:(unsigned int)arg3 modType:(unsigned int)arg4 songId:(id)arg5 uniqueId:(id)arg6 addSongReportInfo:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;

@end

