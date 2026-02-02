//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveConnectMicAllUserInfoView, NSString, UIImageView;

@interface MMFinderLiveFeedStreamConnectMicUserInfoView
{
    MMFinderLiveConnectMicAllUserInfoView *_connectMicAllUserInfoView;
    UIImageView *_connectMicPkAtmosphereBackgroundView;
    NSString *_currentPkSessionId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentPkSessionId; // @synthesize currentPkSessionId=_currentPkSessionId;
@property(nonatomic) __weak UIImageView *connectMicPkAtmosphereBackgroundView; // @synthesize connectMicPkAtmosphereBackgroundView=_connectMicPkAtmosphereBackgroundView;
@property(retain, nonatomic) MMFinderLiveConnectMicAllUserInfoView *connectMicAllUserInfoView; // @synthesize connectMicAllUserInfoView=_connectMicAllUserInfoView;
- (void)updatePkAtmosphereBackgroundIfNeeded:(_Bool)arg1;
- (void)endExposeAction;
- (void)startExposeAction;
- (void)onMMFinderLiveConnectMicAllUserInfoPkStatusChange:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (_Bool)shouldMMFinderLiveConnectMicAllUserInfoDisableStartPkAnimation:(id)arg1;
- (void)resetConnectMicUserInfoViewFrame;
- (void)updateUserPkStateUI;
- (void)setTaskId:(id)arg1;
- (void)prepareForReuse;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

