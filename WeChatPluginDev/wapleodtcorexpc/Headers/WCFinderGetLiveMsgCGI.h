//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveClientStatus, FinderLiveSeiStatInfo, NSData, NSString, WCFinderGetLiveMsgRequestParams;

@interface WCFinderGetLiveMsgCGI
{
    _Bool _offline;
    unsigned int _offlineScene;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    long long _scene;
    NSData *_liveCookies;
    FinderLiveClientStatus *_liveClientStatus;
    FinderLiveSeiStatInfo *_seiStatInfo;
    NSString *_streamId;
    WCFinderGetLiveMsgRequestParams *_reqParams;
}

+ (id)getDescriptionForMsgConfig:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderGetLiveMsgRequestParams *reqParams; // @synthesize reqParams=_reqParams;
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(retain, nonatomic) FinderLiveSeiStatInfo *seiStatInfo; // @synthesize seiStatInfo=_seiStatInfo;
@property(retain, nonatomic) FinderLiveClientStatus *liveClientStatus; // @synthesize liveClientStatus=_liveClientStatus;
@property(nonatomic) unsigned int offlineScene; // @synthesize offlineScene=_offlineScene;
@property(nonatomic) _Bool offline; // @synthesize offline=_offline;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (id)getCurrentBoxId;
- (_Bool)shouldAutoProcessingToastWithError:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)fillAudienceStatusInfo:(id)arg1;
- (void)createRequest;
- (id)initWithFinderTaskId:(id)arg1 liveCookies:(id)arg2 offline:(_Bool)arg3 offlineScene:(unsigned int)arg4 liveClientStatus:(id)arg5 seiStatInfo:(id)arg6 streamId:(id)arg7 requestParams:(id)arg8 successBlock:(CDUnknownBlockType)arg9 failBlock:(CDUnknownBlockType)arg10;

@end

