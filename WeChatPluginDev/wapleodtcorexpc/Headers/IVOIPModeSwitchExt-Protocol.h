//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol IVOIPModeSwitchExt

@optional
- (void)OnVideoModeChangeToVoiceMode;
- (void)OnFromRemoteVideoToBothVideo;
- (void)OnFromLocalVideoToBothVideo;
- (void)OnOneWayLocalEarModeForBadNetwork;
- (void)OnOneWayRemoteEarModeForBadNetwork;
- (void)OnOneWayRemoteVideoMode;
- (void)OnOneWayLocalVideoMode;
- (void)OnOneWayRemoteEarMode;
- (void)OnOneWayLocalEarMode;
- (void)OnOneWayRemoteEarModeFor2G;
- (void)OnOneWayLocalEarModeFor2G;
- (void)OnBothEarMode;
- (void)OnRemoteVideoMode;
- (void)OnRemoteEarMode;
- (void)OnLocalVideoMode;
- (void)OnLocalEarMode;
- (void)OnBothVideoMode;
- (void)OnRemoteEarModeFor2G;
- (void)OnLocalEarModeFor2G;
@end

