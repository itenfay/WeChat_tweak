//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FaceRecogPayHandler, MMVoidBoolStringI32StringCallback, MMVoidCallback, NSString;

@interface MMKindaFaceRegManagerImpl : NSObject
{
    MMVoidBoolStringI32StringCallback *_m_finishCallback;
    MMVoidCallback *_m_cancelCallback;
    FaceRecogPayHandler *_m_faceHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FaceRecogPayHandler *m_faceHandler; // @synthesize m_faceHandler=_m_faceHandler;
@property(retain, nonatomic) MMVoidCallback *m_cancelCallback; // @synthesize m_cancelCallback=_m_cancelCallback;
@property(retain, nonatomic) MMVoidBoolStringI32StringCallback *m_finishCallback; // @synthesize m_finishCallback=_m_finishCallback;
- (void)faceRecogPayHandlerDidCancel:(id)arg1;
- (void)faceRecogPayHandlerDidFinish:(id)arg1;
- (void)startFaceImpl:(int)arg1 strPackage:(id)arg2 strPackageSign:(id)arg3 finishCallback:(id)arg4 cancelCallback:(id)arg5 otherVerifyTitle:(id)arg6 faceVerifyTitle:(id)arg7;
- (void)startFaceImpl:(int)arg1 strPackage:(id)arg2 strPackageSign:(id)arg3 finishCallback:(id)arg4 cancelCallback:(id)arg5 otherVerifyTitle:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

