//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TXCVideoFrame, TXCVideoFrameResult;
@protocol TXIVideoBindable;

@protocol TXIVideoBindable <NSObject>

@optional
- (void)processVideoFrame:(TXCVideoFrame *)arg1 onComplete:(void (^)(TXCVideoFrame *, NSError *))arg2;
- (void)processVideoFrameResult:(TXCVideoFrameResult *)arg1;
- (id <TXIVideoBindable>)bindTo:(id <TXIVideoBindable>)arg1;
@end

