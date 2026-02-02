//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FaceRecogBaseHandler, FaceRecogPayContractViewController, MMUIViewController, NSString, WCPayGetFaceCheckLiveTypeCgi;
@protocol FaceRecogPayHandlerDelegate, FaceRecogPayHandlerProtocol;

@interface FaceRecogPayHandler : NSObject
{
    _Bool _m_isKinda;
    _Bool _enableContract;
    _Bool _useHttp;
    _Bool _needSignContract;
    _Bool _cancelInFaceRecog;
    _Bool _cancelInContract;
    _Bool _hasClickFrontChangeVerifyWayButton;
    unsigned int _scene;
    unsigned int _check_live_type;
    unsigned int _interrupt_ret;
    unsigned int _uiFunCallFrom;
    MMUIViewController *_currentViewController;
    id <FaceRecogPayHandlerDelegate> _delegate;
    NSString *_package;
    NSString *_package_sign;
    NSString *_other_verify_title;
    NSString *_other_verify_title_front;
    NSString *_face_verify_title;
    double _latitude;
    double _longitude;
    NSString *_interrupt_msg;
    FaceRecogBaseHandler<FaceRecogPayHandlerProtocol> *_faceHandler;
    FaceRecogPayContractViewController *_payContractViewController;
    NSString *_faceSerialId;
    WCPayGetFaceCheckLiveTypeCgi *_getFaceCheckLiveTypeCgi;
    long long _faceRecogStartTime;
}

- (void).cxx_destruct;
@property(nonatomic) long long faceRecogStartTime; // @synthesize faceRecogStartTime=_faceRecogStartTime;
@property(nonatomic) _Bool hasClickFrontChangeVerifyWayButton; // @synthesize hasClickFrontChangeVerifyWayButton=_hasClickFrontChangeVerifyWayButton;
@property(retain, nonatomic) WCPayGetFaceCheckLiveTypeCgi *getFaceCheckLiveTypeCgi; // @synthesize getFaceCheckLiveTypeCgi=_getFaceCheckLiveTypeCgi;
@property(nonatomic) _Bool cancelInContract; // @synthesize cancelInContract=_cancelInContract;
@property(nonatomic) _Bool cancelInFaceRecog; // @synthesize cancelInFaceRecog=_cancelInFaceRecog;
@property(retain, nonatomic) NSString *faceSerialId; // @synthesize faceSerialId=_faceSerialId;
@property(nonatomic) _Bool needSignContract; // @synthesize needSignContract=_needSignContract;
@property(nonatomic) unsigned int uiFunCallFrom; // @synthesize uiFunCallFrom=_uiFunCallFrom;
@property(retain, nonatomic) FaceRecogPayContractViewController *payContractViewController; // @synthesize payContractViewController=_payContractViewController;
@property(retain, nonatomic) FaceRecogBaseHandler<FaceRecogPayHandlerProtocol> *faceHandler; // @synthesize faceHandler=_faceHandler;
@property(nonatomic) _Bool useHttp; // @synthesize useHttp=_useHttp;
@property(retain, nonatomic) NSString *interrupt_msg; // @synthesize interrupt_msg=_interrupt_msg;
@property(nonatomic) unsigned int interrupt_ret; // @synthesize interrupt_ret=_interrupt_ret;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) unsigned int check_live_type; // @synthesize check_live_type=_check_live_type;
@property(retain, nonatomic) NSString *face_verify_title; // @synthesize face_verify_title=_face_verify_title;
@property(nonatomic) _Bool enableContract; // @synthesize enableContract=_enableContract;
@property(nonatomic) _Bool m_isKinda; // @synthesize m_isKinda=_m_isKinda;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *other_verify_title_front; // @synthesize other_verify_title_front=_other_verify_title_front;
@property(retain, nonatomic) NSString *other_verify_title; // @synthesize other_verify_title=_other_verify_title;
@property(retain, nonatomic) NSString *package_sign; // @synthesize package_sign=_package_sign;
@property(retain, nonatomic) NSString *package; // @synthesize package=_package;
@property(nonatomic) __weak id <FaceRecogPayHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MMUIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
- (void)closeFaceCheckUseCaseCross;
- (void)call:(id)arg1;
- (void)startFaceCheckFrontKinda;
- (void)dismissFaceViewController:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)faceRecogHandlerDidCancel:(id)arg1;
- (void)faceRecogHandlerDidFinish:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startGetFaceCheckResultUseHttp:(id)arg1 inWorkMode:(long long)arg2;
- (void)onGetFaceCheckResult:(id)arg1;
- (void)didAccessLocation:(double)arg1 longitude:(double)arg2;
- (void)didGetFaceFlashData:(id)arg1 inWorkMode:(long long)arg2;
- (void)didUploadFaceData:(id)arg1;
- (void)setFaceRecogInterruptForward:(int)arg1 msg:(id)arg2;
- (void)startGetFaceCheckLiveTypeUseHttp;
- (void)onGetFaceCheckLiveTypeResp:(id)arg1;
- (void)checkAliveType;
- (void)onGetContractResp:(id)arg1;
- (void)checkContract;
- (void)onChangeVerifyWay;
- (void)onFaceRecogDidCancel;
- (void)onStartFaceRecog;
- (void)startContractWithSigned:(_Bool)arg1 contactHint:(id)arg2 contractUrl:(id)arg3 contractTitle:(id)arg4 contractDesc:(id)arg5;
- (void)initFaceRecog;
- (void)startRealFaceRecog;
- (void)resetFaceHandler;
- (_Bool)endWithRiskInterrupt;
- (_Bool)endWithClickFrontOtherVerifyBtn;
- (_Bool)endWithClickOtherVerifyBtn;
- (id)serialId;
- (id)resultToken;
- (id)bioId;
- (int)resultCode;
- (void)startFace:(unsigned int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

