//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSDictionary, NSString, WAJSCanvasJSEventHandlerContext, WAJSEventHandler_BaseEvent;

@protocol WAJSCanvasJSEventHandlerContextDelegate <NSObject>
- (id)getWeAppPluginByName:(NSString *)arg1;
- (id)getWebViewPluginByName:(NSString *)arg1;
- (MMUIViewController *)getParentViewController;
- (void)endWithResultWithParams:(NSDictionary *)arg1 handler:(WAJSEventHandler_BaseEvent *)arg2 context:(WAJSCanvasJSEventHandlerContext *)arg3;
@end

