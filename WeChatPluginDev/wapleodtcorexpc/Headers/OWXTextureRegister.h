//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol FlutterTextureRegistry, OMJTextureHolder;

@interface OWXTextureRegister : NSObject
{
    NSObject<FlutterTextureRegistry> *_textures;
    id <OMJTextureHolder> _textureHolder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <OMJTextureHolder> textureHolder; // @synthesize textureHolder=_textureHolder;
@property(retain, nonatomic) NSObject<FlutterTextureRegistry> *textures; // @synthesize textures=_textures;
- (struct __CVBuffer *)copyPixelBuffer;
- (void)textureFrameAvailableWithID:(long long)arg1;
- (void)unregisterTextureWithID:(long long)arg1;
- (long long)registerTextureWithHolder:(id)arg1;
- (id)initWithTextures:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

