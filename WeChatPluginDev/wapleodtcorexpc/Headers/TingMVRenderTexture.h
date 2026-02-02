//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TingMVTextureUpdateListenerApi, TingTextureInfo;
@protocol FlutterTextureRegistry;

@interface TingMVRenderTexture : NSObject
{
    long long _textureId;
    TingTextureInfo *_textureInfo;
    NSObject<FlutterTextureRegistry> *_registry;
    struct __CVBuffer *_currentPixelBuffer;
    TingMVTextureUpdateListenerApi *_listener;
    NSString *_taskId;
    NSString *_listenId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *listenId; // @synthesize listenId=_listenId;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) TingMVTextureUpdateListenerApi *listener; // @synthesize listener=_listener;
@property(nonatomic) struct __CVBuffer *currentPixelBuffer; // @synthesize currentPixelBuffer=_currentPixelBuffer;
@property(readonly, nonatomic) NSObject<FlutterTextureRegistry> *registry; // @synthesize registry=_registry;
@property(retain, nonatomic) TingTextureInfo *textureInfo; // @synthesize textureInfo=_textureInfo;
@property(nonatomic) long long textureId; // @synthesize textureId=_textureId;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onDisplayElementFrameBufferOut:(id)arg3;
- (struct __CVBuffer *)copyPixelBuffer;
- (void)onTextureUnregistered:(id)arg1;
- (id)initWithTextureRegistry:(id)arg1 listener:(id)arg2 taskId:(id)arg3 listenId:(id)arg4;
- (void)releaseTexture;
- (id)getMVTextureInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

