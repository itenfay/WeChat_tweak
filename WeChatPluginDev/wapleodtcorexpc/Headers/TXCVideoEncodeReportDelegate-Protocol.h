//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TXCVideoFrame;

@protocol TXCVideoEncodeReportDelegate <NSObject>
- (void)onEncodeFrame:(TXCVideoFrame *)arg1 forStreamType:(int)arg2 isFirst:(_Bool)arg3;
@end

