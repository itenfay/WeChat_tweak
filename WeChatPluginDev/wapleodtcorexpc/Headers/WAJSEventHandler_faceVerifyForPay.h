//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FaceRecogPayHandler, NSString;

@interface WAJSEventHandler_faceVerifyForPay
{
    FaceRecogPayHandler *_faceHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FaceRecogPayHandler *faceHandler; // @synthesize faceHandler=_faceHandler;
- (void)faceRecogPayHandlerDidCancel:(id)arg1;
- (void)faceRecogPayHandlerDidFinish:(id)arg1;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

