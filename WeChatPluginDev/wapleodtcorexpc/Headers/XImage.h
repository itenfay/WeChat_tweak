//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol MTLEvent, MTLTexture;

@interface XImage : NSObject
{
    const struct AAPLTextureFormatInfo *_formatInfo;
    struct __CVBuffer *_CVPixelBuffer;
    struct __CVBuffer *_CVMTLTexture;
    struct __CVBuffer *_CVGLTexture;
    struct CGSize _size;
    struct ObjectRef<xnet::rci::RciTexture> _internalRciTexture;
    _Bool _isHDR10;
    struct shared_ptr<wevision::HardwareBufferTexture> hardwareBufferTexture;
    unsigned int _openGLTexture;
    id <MTLTexture> _metalTexture;
    long long _range;
    long long _matrix;
    long long _transferFunction;
    long long _colorPrimaries;
    CDUnknownBlockType _notifyUseCompletedBlock;
    id <MTLEvent> _eventToWait;
    struct CGRect _cropRect;
}

+ (id)createInteropImage:(struct CGSize)arg1;
+ (id)createImageWithRfxTexture:(void *)arg1;
+ (id)createImageWithRciTexture:(void *)arg1;
+ (id)createImageWithPixelBuffer:(struct __CVBuffer *)arg1 ofPlane:(unsigned long long)arg2;
+ (long long)getYuvTransferFunctionWithPixelBuffer:(struct __CVBuffer *)arg1;
+ (long long)getYuvMatrixWithPixelBuffer:(struct __CVBuffer *)arg1;
+ (long long)getYuvRangeWithPixelBuffer:(struct __CVBuffer *)arg1;
+ (long long)getYuvColorPrimariesWithPixelBuffer:(struct __CVBuffer *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) id <MTLEvent> eventToWait; // @synthesize eventToWait=_eventToWait;
@property(copy, nonatomic) CDUnknownBlockType notifyUseCompletedBlock; // @synthesize notifyUseCompletedBlock=_notifyUseCompletedBlock;
@property(readonly, nonatomic) _Bool isHDR10; // @synthesize isHDR10=_isHDR10;
@property(readonly, nonatomic) long long colorPrimaries; // @synthesize colorPrimaries=_colorPrimaries;
@property(readonly, nonatomic) long long transferFunction; // @synthesize transferFunction=_transferFunction;
@property(readonly, nonatomic) long long matrix; // @synthesize matrix=_matrix;
@property(readonly, nonatomic) long long range; // @synthesize range=_range;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) id <MTLTexture> metalTexture; // @synthesize metalTexture=_metalTexture;
@property(readonly, nonatomic) unsigned int openGLTexture; // @synthesize openGLTexture=_openGLTexture;
- (id)convertToCIImage;
- (id)debugQuickLookObject;
- (_Bool)createMetalTexture;
- (_Bool)createGLTexture;
@property(readonly, nonatomic) void *rciTexture;
@property(readonly, nonatomic) struct __CVBuffer *cvMetalTexture;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer;
- (void)dealloc;
- (id)init;

@end

