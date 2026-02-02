//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface ODSRenderViewIOSDisplay : UIView
{
}

+ (Class)layerClass;
- (void)displaySampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (struct opaqueCMSampleBuffer *)createSampleBufferWithPixelBuffer:(struct __CVBuffer *)arg1;
- (void)displayPixelBuffer:(struct __CVBuffer *)arg1 enableHDR:(_Bool)arg2;
- (id)displayLayer;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

