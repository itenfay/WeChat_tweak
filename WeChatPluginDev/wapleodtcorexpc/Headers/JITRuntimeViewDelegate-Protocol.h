//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class JITRuntimeView, NSString, XHRRequestTask;

@protocol JITRuntimeViewDelegate <NSObject>
- (void)onXHRRequest:(XHRRequestTask *)arg1;
- (void)onAlertMessage:(NSString *)arg1 completionHandler:(void (^)(void))arg2;
- (void)onPostMessage:(NSString *)arg1 body:(id)arg2;
- (void)onPrompt:(NSString *)arg1 defaultText:(NSString *)arg2 completionHandler:(void (^)(NSString *))arg3;
- (void)onTerminate;
- (void)onLoad:(JITRuntimeView *)arg1;
@end

