//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, TXCVideoConsumer, TXCVideoFrame;

@protocol TXIVideoConsumerDelegate <NSObject>
- (void)videoConsumer:(TXCVideoConsumer *)arg1 onError:(NSError *)arg2;
- (void)videoConsumer:(TXCVideoConsumer *)arg1 onAppBecomeInactive:(_Bool)arg2;
- (void)videoConsumer:(TXCVideoConsumer *)arg1 onRenderFirstFrameInView:(TXCVideoFrame *)arg2;
- (void)videoConsumer:(TXCVideoConsumer *)arg1 onRenderVideoFrame:(TXCVideoFrame *)arg2 isFirst:(_Bool)arg3;
- (void)videoConsumer:(TXCVideoConsumer *)arg1 onDecoderTypeChanged:(struct DecoderProperty)arg2;
- (void)videoConsumer:(TXCVideoConsumer *)arg1 onDecodeVideoFrame:(TXCVideoFrame *)arg2 cacheCount:(long long)arg3 isFirst:(_Bool)arg4;
@end

