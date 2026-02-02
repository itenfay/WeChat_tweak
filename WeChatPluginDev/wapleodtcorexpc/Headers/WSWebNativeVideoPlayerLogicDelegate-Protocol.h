//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WSWebNativeVideoPlayerLogicDelegate <NSObject>

@optional
- (void)onVideoPlayerEvent:(NSString *)arg1 withData:(NSDictionary *)arg2 forViewId:(unsigned int)arg3;
@end

