//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EAGLContext;

@protocol TXIGlContext <NSObject>
+ (_Bool)supportsFastTextureUpload:(unsigned long long)arg1;
@property(readonly, nonatomic) EAGLContext *context;
@property(readonly, nonatomic) struct __CVOpenGLESTextureCache *textureCache;
- (unsigned int)createTextureFromPixelBuffer:(struct __CVBuffer *)arg1 plane:(long long)arg2 format:(int)arg3;
- (_Bool)supportsSetUnpackRowLength;
- (void)runInGLQueue:(void (^)(void))arg1;
- (void)runGlCommands:(void (^)(void))arg1;
- (void)assertContextIsCurrent;
@end

