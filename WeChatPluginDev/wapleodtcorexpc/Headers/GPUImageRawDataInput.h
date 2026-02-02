//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GLProgram, GPUImageFramebuffer, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface GPUImageRawDataInput
{
    struct CGSize uploadedImageSize;
    struct CGSize uploadedChromaSize;
    GPUImageFramebuffer *inputLumaTexture;
    GPUImageFramebuffer *inputChromaTexture;
    NSObject<OS_dispatch_semaphore> *dataUpdateSemaphore;
    GLProgram *convertColorProgram;
    int filterPositionAttribute;
    int filterTextureCoordinateAttribute;
    int filterInputTextureUniform;
    int filterSecondTextureCoordinateAttribute;
    int filterInputTextureUniform2;
    float backgroundColorRed;
    float backgroundColorGreen;
    float backgroundColorBlue;
    float backgroundColorAlpha;
    _Bool isEndProcessing;
    _Bool useYUV420toRGB;
    struct CGSize currentFilterSize;
    unsigned long long inputRotation;
    _Bool currentlyReceivingMonochromeInput;
    NSMutableDictionary *uniformStateRestorationBlocks;
    NSObject<OS_dispatch_semaphore> *imageCaptureSemaphore;
    int _pixelFormat;
    int _pixelType;
}

- (void).cxx_destruct;
@property(nonatomic) int pixelType; // @synthesize pixelType=_pixelType;
@property(nonatomic) int pixelFormat; // @synthesize pixelFormat=_pixelFormat;
- (struct CGSize)outputImageSize;
- (void)processDataForTimestamp:(CDStruct_1b6d18a9)arg1;
- (void)processData;
- (void)updateDataFromBytes:(char *)arg1 size:(struct CGSize)arg2;
- (void)uploadBytes:(char *)arg1 NeedRender420ToRGB:(_Bool)arg2;
- (void)uploadBytes:(char *)arg1;
- (id)renderYUV420toRGB:(unsigned int)arg1 ChromaTexture:(unsigned int)arg2;
- (void)initializeAttributes;
- (void)dealloc;
- (void)initYUVtoRGBConversin;
- (void)initYUVtoRGB:(_Bool)arg1;
- (id)initWithBytes:(char *)arg1 size:(struct CGSize)arg2 pixelFormat:(int)arg3 type:(int)arg4;
- (id)initWithBytes:(char *)arg1 size:(struct CGSize)arg2 pixelFormat:(int)arg3;
- (id)initWithBytes:(char *)arg1 size:(struct CGSize)arg2;

@end

