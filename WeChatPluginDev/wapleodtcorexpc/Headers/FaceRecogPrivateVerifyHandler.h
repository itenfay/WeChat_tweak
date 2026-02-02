//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FaceRecog3rdVerifyConfirmLogic, FaceRecog3rdVerifyConfirmViewController, FaceRecog3rdVerifyHandler, MMUIViewController, NSString;
@protocol FaceRecogPrivateVerifyHandlerDelegate;

@interface FaceRecogPrivateVerifyHandler
{
    _Bool _needConfirmView;
    _Bool _needVideo;
    _Bool _isDismissed;
    unsigned int _checkAliveType;
    unsigned int _sourceType;
    unsigned int _scene;
    id <FaceRecogPrivateVerifyHandlerDelegate> _delegate;
    MMUIViewController *_fromVC;
    NSString *_funcName;
    FaceRecog3rdVerifyConfirmViewController *_confirmVC;
    FaceRecog3rdVerifyHandler *_verifyHandler;
    FaceRecog3rdVerifyConfirmLogic *_confirmLogic;
    NSString *_appId;
    NSString *_verifyInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDismissed; // @synthesize isDismissed=_isDismissed;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool needVideo; // @synthesize needVideo=_needVideo;
@property(copy, nonatomic) NSString *verifyInfo; // @synthesize verifyInfo=_verifyInfo;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) FaceRecog3rdVerifyConfirmLogic *confirmLogic; // @synthesize confirmLogic=_confirmLogic;
@property(retain, nonatomic) FaceRecog3rdVerifyHandler *verifyHandler; // @synthesize verifyHandler=_verifyHandler;
@property(retain, nonatomic) FaceRecog3rdVerifyConfirmViewController *confirmVC; // @synthesize confirmVC=_confirmVC;
@property(nonatomic) unsigned int sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) NSString *funcName; // @synthesize funcName=_funcName;
@property(nonatomic) unsigned int checkAliveType; // @synthesize checkAliveType=_checkAliveType;
@property(nonatomic) _Bool needConfirmView; // @synthesize needConfirmView=_needConfirmView;
@property(nonatomic) __weak MMUIViewController *fromVC; // @synthesize fromVC=_fromVC;
@property(nonatomic) __weak id <FaceRecogPrivateVerifyHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onGetConfirmInfoFail;
- (void)onConfirmFail;
- (void)onConfirmCancel;
- (void)onConfirmStartFaceReco;
- (void)onGetConfirmInfo:(id)arg1 failedCauseOf:(unsigned int)arg2 msg:(id)arg3 desc:(id)arg4;
- (void)onGetConfirmInfoSucceed:(id)arg1;
- (void)faceRecogHandlerDidCancel:(id)arg1;
- (void)faceRecogHandlerDidFinish:(id)arg1;
- (id)getVerifyResult:(id)arg1;
- (void)reportWithResult:(int)arg1;
- (void)start;
- (void)stopLoading;
- (void)startLoading;
- (void)disMissAll:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (id)getCurVC;
- (void)doStartFaceReco;
- (void)initData;
- (void)dealloc;
- (id)initWithAppId:(id)arg1 verifyInfo:(id)arg2 needVideo:(_Bool)arg3 scene:(unsigned int)arg4;
- (id)initWithUnionVideoAppId:(id)arg1 verifyInfo:(id)arg2 scene:(unsigned int)arg3;
- (id)initWithAppId:(id)arg1 verifyInfo:(id)arg2 scene:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

