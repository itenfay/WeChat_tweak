//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FaceRecogPrivateVerifyHandler, NSString;

@interface WAJSEventHandler_baseFacialRecognition
{
    FaceRecogPrivateVerifyHandler *_handler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FaceRecogPrivateVerifyHandler *handler; // @synthesize handler=_handler;
- (_Bool)needConfirmView;
- (id)jsapiFuncName;
- (_Bool)useEncryptionVerify;
- (_Bool)needUploadVideo;
- (void)faceRecogDidFinishWithCode:(int)arg1 msg:(id)arg2 verifyResult:(id)arg3;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

