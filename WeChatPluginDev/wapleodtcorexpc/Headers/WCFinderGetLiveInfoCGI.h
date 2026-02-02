//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderGetLiveInfoReq_FinderGetLiveInfoSceneNotificationInfo, FinderGetLiveInfoReq_LiveADBypassInfo, NSString;

@interface WCFinderGetLiveInfoCGI
{
    unsigned int _scene;
    unsigned long long _liveId;
    NSString *_finderUserName;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    FinderGetLiveInfoReq_LiveADBypassInfo *_liveAdByPassInfo;
    FinderGetLiveInfoReq_FinderGetLiveInfoSceneNotificationInfo *_notificationInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderGetLiveInfoReq_FinderGetLiveInfoSceneNotificationInfo *notificationInfo; // @synthesize notificationInfo=_notificationInfo;
@property(retain, nonatomic) FinderGetLiveInfoReq_LiveADBypassInfo *liveAdByPassInfo; // @synthesize liveAdByPassInfo=_liveAdByPassInfo;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveId:(unsigned long long)arg1 andFinderUsername:(id)arg2 andScene:(unsigned int)arg3 liveAdByPassInfo:(id)arg4 notificationInfo:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;

@end

