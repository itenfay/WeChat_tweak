//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class OMJCamoSession;

@interface MJTemplateCamoSession
{
    OMJCamoSession *_camoSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OMJCamoSession *camoSession; // @synthesize camoSession=_camoSession;
- (void)_destroyCameraSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_tearDownCameraSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cleanUpMaasSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_createMaasCameraSession;
- (_Bool)createMaasSession;
- (_Bool)canBeginUseTemplate;

@end

