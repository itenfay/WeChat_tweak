//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TXCVideoFrame;

@protocol TXCVideoDecodeReportDelegate <NSObject>
- (void)onDecodeFrame:(TXCVideoFrame *)arg1 isFirst:(_Bool)arg2;
@end

