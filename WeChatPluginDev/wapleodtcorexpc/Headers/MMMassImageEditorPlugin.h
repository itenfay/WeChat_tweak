//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJFlutterImageEditorSession, MMFlutterInstance, NSString;
@protocol FlutterTextureRegistry;

@interface MMMassImageEditorPlugin : NSObject
{
    NSObject<FlutterTextureRegistry> *_flutterTextureRegistery;
    MJFlutterImageEditorSession *_imageEditorSession;
    MMFlutterInstance *_pageInstance;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFlutterInstance *pageInstance; // @synthesize pageInstance=_pageInstance;
@property(retain, nonatomic) MJFlutterImageEditorSession *imageEditorSession; // @synthesize imageEditorSession=_imageEditorSession;
@property(retain, nonatomic) NSObject<FlutterTextureRegistry> *flutterTextureRegistery; // @synthesize flutterTextureRegistery=_flutterTextureRegistery;
- (id)deviceSupportWithError:(id *)arg1;
- (id)releaseFlutterInstanceWithError:(id *)arg1;
- (void)teardownMaasWithCompletion:(CDUnknownBlockType)arg1;
- (void)launchMaasCoreWithCompletion:(CDUnknownBlockType)arg1;
- (id)getSdkVersionWithError:(id *)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

