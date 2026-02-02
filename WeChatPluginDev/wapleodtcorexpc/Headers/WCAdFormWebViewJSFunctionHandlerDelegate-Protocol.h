//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WCAdFormWebViewJSFunctionHandlerDelegate <NSObject>

@optional
- (void)handlerPublishEvent:(NSString *)arg1 params:(NSDictionary *)arg2;
- (void)handlerSendCallback:(NSString *)arg1 ret:(int)arg2 error:(NSString *)arg3 data:(NSDictionary *)arg4;
@end

