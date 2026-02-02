//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, TXCHardwareVideoDecoder, TXCVideoFrame;

@interface TXCDecoderWrapper : NSObject
{
    TXCHardwareVideoDecoder *_decoder;
    TXCVideoFrame *_videoFrame;
    CDUnknownBlockType _complete;
    NSDate *_startDecodeTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *startDecodeTime; // @synthesize startDecodeTime=_startDecodeTime;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
@property(retain, nonatomic) TXCVideoFrame *videoFrame; // @synthesize videoFrame=_videoFrame;
@property(retain, nonatomic) TXCHardwareVideoDecoder *decoder; // @synthesize decoder=_decoder;

@end

