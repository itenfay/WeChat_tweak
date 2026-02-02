//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveMicInfo;

@interface MMFinderLiveReplayConnectMicLogic
{
    FinderLiveMicInfo *_lastLiveMicInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveMicInfo *lastLiveMicInfo; // @synthesize lastLiveMicInfo=_lastLiveMicInfo;
- (void)tryGetMicUsersFromServer:(_Bool)arg1 getExtraAutoSwipeInfo:(_Bool)arg2;
- (_Bool)receiveOldVersionSeiMsg:(id)arg1;
- (_Bool)canUseNewMicSEI;
- (id)anchorSdkUserId;
- (void)clearAllState;
- (void)setIsVideoLandscapeMode:(_Bool)arg1;
- (void)checkLiveMicInfo:(id)arg1;
@property(readonly, nonatomic) _Bool hasUnknownMicUser;

@end

