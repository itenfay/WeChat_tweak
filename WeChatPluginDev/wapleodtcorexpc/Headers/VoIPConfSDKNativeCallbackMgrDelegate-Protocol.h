//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSMutableData;

@protocol VoIPConfSDKNativeCallbackMgrDelegate <NSObject>
- (void)onVideoFrame:(int)arg1 data:(const char *)arg2 dataLen:(int)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6;
- (void)OnConfEvent:(int)arg1 errCode:(int)arg2 data:(NSData *)arg3 callbackData:(NSMutableData *)arg4;
@end

