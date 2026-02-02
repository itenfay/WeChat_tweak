//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "JSExport-Protocol.h"

@class NSString;

@protocol IWAJSDebuggerConnection <JSExport>
- (void)onReceiveNetworkHeader:(NSString *)arg1;
- (void)onCustomMessage:(NSString *)arg1 payload:(NSString *)arg2;
- (void)sendCustomMessage:(NSString *)arg1 payload:(NSString *)arg2;
- (void)onMessage:(NSString *)arg1;
- (void)sendMessage:(NSString *)arg1;

@optional
- (void)sendCustomMessage:(NSString *)arg1 payload:(NSString *)arg2 __JS_EXPORT_AS__sendCustomMessage:(id)arg3;
@end

