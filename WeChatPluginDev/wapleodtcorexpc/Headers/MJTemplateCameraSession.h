//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class OMJCamResourceManager, OMJCamSession;

@interface MJTemplateCameraSession
{
    OMJCamSession *_maasCameraSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OMJCamSession *maasCameraSession; // @synthesize maasCameraSession=_maasCameraSession;
- (void)_destroyCameraSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_tearDownCameraSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cleanUpMaasSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_createMaasCameraSession;
- (_Bool)createMaasSession;
@property(readonly, nonatomic) OMJCamResourceManager *camResourceManager;
- (_Bool)canBeginUseTemplate;

@end

