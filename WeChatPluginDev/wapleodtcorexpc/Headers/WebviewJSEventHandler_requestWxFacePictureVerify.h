//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FaceRecogPrivateVerifyHandler, JSEvent, NSMutableDictionary, NSString;

@interface WebviewJSEventHandler_requestWxFacePictureVerify
{
    FaceRecogPrivateVerifyHandler *_handler;
    JSEvent *_cbEvent;
    NSMutableDictionary *_errorMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *errorMap; // @synthesize errorMap=_errorMap;
@property(retain, nonatomic) JSEvent *cbEvent; // @synthesize cbEvent=_cbEvent;
- (void)faceRecogDidFinishWithCode:(int)arg1 msg:(id)arg2 verifyResult:(id)arg3;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

