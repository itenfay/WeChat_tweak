//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FaceRecogCheckBrightnessLogic, FaceRecogFlashHandler, NSString;

@interface FaceRecogInternelHandler
{
    unsigned int _checkAliveType;
    float _lightThreshold;
    FaceRecogFlashHandler *_faceHandler;
    NSString *_verifyInfo;
    FaceRecogCheckBrightnessLogic *_brightnessCheckLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FaceRecogCheckBrightnessLogic *brightnessCheckLogic; // @synthesize brightnessCheckLogic=_brightnessCheckLogic;
@property(retain, nonatomic) NSString *verifyInfo; // @synthesize verifyInfo=_verifyInfo;
@property(nonatomic) float lightThreshold; // @synthesize lightThreshold=_lightThreshold;
@property(nonatomic) unsigned int checkAliveType; // @synthesize checkAliveType=_checkAliveType;
@property(retain, nonatomic) FaceRecogFlashHandler *faceHandler; // @synthesize faceHandler=_faceHandler;
- (void)faceRecogHandlerDidCancel:(id)arg1;
- (void)faceRecogHandlerDidFinish:(id)arg1;
- (void)onDidCheckBrightnessDoneWithIsOK:(_Bool)arg1 brightnessValue:(float)arg2;
- (void)requestStop;
- (void)didAccessVideo;
- (void)subHandlerRequestAccessVideo;
- (void)startWithHasCheckBrightness:(_Bool)arg1;
- (void)startFace;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

