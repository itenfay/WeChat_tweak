//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSError, TXCVideoFrame;

@interface TXCVideoFrameResult : NSObject
{
    NSError *_error;
    TXCVideoFrame *_videoFrame;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TXCVideoFrame *videoFrame; // @synthesize videoFrame=_videoFrame;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (id)initWithVideoFrame:(id)arg1 error:(id)arg2;

@end

