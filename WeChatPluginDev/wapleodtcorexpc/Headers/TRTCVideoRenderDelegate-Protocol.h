//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TRTCVideoFrame;

@protocol TRTCVideoRenderDelegate <NSObject>

@optional
- (void)onRenderVideoFrame:(TRTCVideoFrame *)arg1 userId:(NSString *)arg2 streamType:(long long)arg3;
@end

