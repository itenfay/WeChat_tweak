//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVVideoDevice, XImage;

@protocol AVVideoDataSource <NSObject>
- (int)GetFrmType;
- (int)VideoDevPutData:(int)arg1 frmData:(char *)arg2 frmIndex:(unsigned long long)arg3 imageWidth:(unsigned int)arg4 imageHeight:(unsigned int)arg5 rgbaTexture:(XImage *)arg6;
- (void)videoDevice:(AVVideoDevice *)arg1 didOutputPixelBuffer:(struct __CVBuffer *)arg2;
@end

