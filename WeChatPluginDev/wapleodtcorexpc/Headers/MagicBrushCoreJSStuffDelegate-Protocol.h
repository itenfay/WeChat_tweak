//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol MagicBrushCoreJSStuffDelegate <NSObject>

@optional
- (void)onJsEventSend:(NSString *)arg1 data:(NSDictionary *)arg2;
- (void)onJsException:(NSString *)arg1 stack:(NSString *)arg2;
- (void)onJsLog:(NSString *)arg1;
@end

