//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FaceRecogPayConfigLogic, NSData, NSString;

@interface FaceRecogPayActionReflectHandler
{
    _Bool _hasClickBizButton;
    FaceRecogPayConfigLogic *_config;
    NSData *_resultHash;
    NSString *_otherVerifyTitle;
    NSString *_faceVerifyTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *faceVerifyTitle; // @synthesize faceVerifyTitle=_faceVerifyTitle;
@property(nonatomic) _Bool hasClickBizButton; // @synthesize hasClickBizButton=_hasClickBizButton;
@property(retain, nonatomic) NSString *otherVerifyTitle; // @synthesize otherVerifyTitle=_otherVerifyTitle;
@property(retain, nonatomic) NSData *resultHash; // @synthesize resultHash=_resultHash;
@property(retain, nonatomic) FaceRecogPayConfigLogic *config; // @synthesize config=_config;
- (void)faceRecogDidRotate;
- (void)faceRecogDidClickBizBtn;
- (void)onGetPayBioConfig:(id)arg1 failedCauseOf:(int)arg2 errMsg:(id)arg3;
- (void)onGetPayBioConfigOK:(id)arg1 succeedForBioId:(unsigned long long)arg2;
- (_Bool)supportDepthCamera;
- (_Bool)onStartRequestConfig:(id)arg1;
- (void)onCameraStart;
- (void)showView;
- (void)presentFaceViewController;
- (void)initView;
- (id)initWithScene:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

