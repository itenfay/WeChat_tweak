//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol IMagicCardStarterDelegate <NSObject>
- (void)jsApiEventHandler:(NSString *)arg1 extraInfo:(NSDictionary *)arg2 callback:(void (^)(NSString *, NSString *, NSDictionary *))arg3;

@optional
- (void)notifyFrameSetSizeChange:(NSString *)arg1 height:(long long)arg2;
- (void)notifyFrameSetDestroy:(NSString *)arg1;
- (void)notifyFrameSetFirstFrameRendered:(NSString *)arg1;
- (void)notifyBizDestroy;
@end

