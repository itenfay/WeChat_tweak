//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class XImage;

@interface XImageYUVWrapper : NSObject
{
    long long _format;
    XImage *_yPanel;
    XImage *_uPanel;
    XImage *_vPanel;
    XImage *_uvPanel;
}

+ (long long)getFrameFormatFromPixelBuffer:(struct __CVBuffer *)arg1;
+ (id)convertPixelBufferToYUVPanel:(struct __CVBuffer *)arg1;
- (void).cxx_destruct;
@property(retain) XImage *uvPanel; // @synthesize uvPanel=_uvPanel;
@property(retain) XImage *vPanel; // @synthesize vPanel=_vPanel;
@property(retain) XImage *uPanel; // @synthesize uPanel=_uPanel;
@property(retain) XImage *yPanel; // @synthesize yPanel=_yPanel;
@property long long format; // @synthesize format=_format;

@end

