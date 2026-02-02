//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class JSCTarget, NSString, NSTimer;

@interface JSCScreencastSession : NSObject
{
    JSCTarget *_target;
    int _frameId;
    struct vector<bool, std::allocator<bool>> _framesAcked;
    int _frameInterval;
    NSString *_format;
    int _quality;
    int _maxWidth;
    int _maxHeight;
    NSTimer *_timerCookie;
    int _deviceWidth;
    int _deviceHeight;
    int _offsetTop;
    int _pageScaleFactor;
    int _scrollOffsetX;
    int _scrollOffsetY;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)recordingLoop;
- (void)ackFrame:(int)arg1;
- (void)stop;
- (void)start;
- (void)dispose;
- (id)initWithTarget:(id)arg1 format:(id)arg2 quality:(int)arg3 maxWidth:(int)arg4 maxHeight:(int)arg5;

@end

