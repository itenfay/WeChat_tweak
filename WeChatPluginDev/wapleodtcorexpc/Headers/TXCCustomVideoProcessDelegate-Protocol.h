//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TXCVideoFrame;

@protocol TXCCustomVideoProcessDelegate <NSObject>
- (void)onCustomProcessVideoFrame:(TXCVideoFrame *)arg1 dst:(TXCVideoFrame *)arg2;
@end

