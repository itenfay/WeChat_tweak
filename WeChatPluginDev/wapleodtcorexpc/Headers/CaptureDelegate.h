//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CaptureDelegate : NSObject
{
    int newFrame;
    struct __CVBuffer *mCurrentImageBuffer;
    char *imagedata;
    struct _IplImage *image;
    char *bgr_imagedata;
    struct _IplImage *bgr_image;
    struct _IplImage *bgr_image_r90;
    unsigned long long currSize;
}

- (int)updateImage;
- (struct _IplImage *)getOutput;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

