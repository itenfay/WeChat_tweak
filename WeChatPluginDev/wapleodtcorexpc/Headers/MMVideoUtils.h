//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMVideoUtils : NSObject
{
}

+ (int)alignTo16:(int)arg1;
+ (_Bool)supportBFrame;
+ (_Bool)supportVBR;
+ (id)dictionaryWithJsonString:(id)arg1;
+ (double)getValue:(CDStruct_1b6d18a9)arg1;
+ (double)getPts:(struct opaqueCMSampleBuffer *)arg1;
+ (struct CGSize)getSize:(struct opaqueCMSampleBuffer *)arg1;
+ (id)quickJoinVideoS:(id)arg1 outputPath:(id)arg2 result:(CDUnknownBlockType)arg3;
+ (struct AudioBuffer)getAudioBuffer:(struct opaqueCMSampleBuffer *)arg1;
+ (id)loadThumbNail:(id)arg1;
+ (void)save:(id)arg1 ToPath:(id)arg2;
+ (struct opaqueCMSampleBuffer *)createSampleBufferFromPixelBuffer:(struct __CVBuffer *)arg1;
+ (struct __CVBuffer *)createGLCompatiblePixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
+ (int)savePixelBuffer:(struct __CVBuffer *)arg1 ToJPEGPath:(id)arg2;
+ (id)imageFromPixelBuffer:(struct __CVBuffer *)arg1;
+ (id)getRandomFileName:(id)arg1 fileType:(id)arg2;
+ (id)getCacheFolderPath;
+ (void)clearFileType:(id)arg1 AtFolderPath:(id)arg2;
+ (void)checkVideoPath:(id)arg1;
+ (void)removeCacheFiles:(id)arg1;
+ (void)removeCacheFile:(id)arg1;
+ (id)renameFile:(id)arg1 newFileName:(id)arg2;
+ (id)getFileSHA1Signature:(id)arg1;
+ (id)composeImage:(id)arg1 image2:(id)arg2;
+ (id)imageFromImage:(id)arg1 inRect:(struct CGRect)arg2;
+ (id)gsImage:(id)arg1 withGsNumber:(double)arg2;
+ (id)createImageWithColor:(id)arg1 andSize:(struct CGSize)arg2;
+ (id)scaleImageAspectFill:(id)arg1 scaleToSize:(struct CGSize)arg2;
+ (id)scaleImage:(id)arg1 scaleToSize:(struct CGSize)arg2;
+ (struct __CVBuffer *)imageToRGBPixelBuffer:(id)arg1;
+ (struct __CVBuffer *)imageToYUVPixelBuffer:(id)arg1;
+ (struct __CVBuffer *)createEmptyYUVPixelBuffer:(struct CGSize)arg1;
+ (struct opaqueCMSampleBuffer *)copySampleBufferShallow:(struct opaqueCMSampleBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2;
+ (struct opaqueCMSampleBuffer *)copySampleBuffer:(struct opaqueCMSampleBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2;
+ (struct opaqueCMSampleBuffer *)copySampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
+ (struct __CVBuffer *)copyPixelBuffer:(struct __CVBuffer *)arg1 pixelBufferAttributes:(id)arg2;
+ (struct __CVBuffer *)copyPixelBuffer:(struct __CVBuffer *)arg1;
+ (struct opaqueCMSampleBuffer *)newVideoSample:(struct __CVBuffer *)arg1 timescale:(int)arg2 timeStamp:(unsigned long long)arg3;
+ (struct opaqueCMSampleBuffer *)newVideoSample:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2;
+ (struct opaqueCMSampleBuffer *)newAudioSample:(void *)arg1 size:(unsigned int)arg2 timingInfo:(CDStruct_d2aef016)arg3 numberChannels:(int)arg4 SampleRate:(int)arg5;

@end

