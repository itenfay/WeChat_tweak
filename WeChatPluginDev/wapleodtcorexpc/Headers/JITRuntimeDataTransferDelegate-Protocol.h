//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, XHRRequestTask;

@protocol JITRuntimeDataTransferDelegate <NSObject>

@optional
- (void)onXHRRequest:(XHRRequestTask *)arg1;
- (void)onAlertMessage:(NSString *)arg1 completionHandler:(void (^)(void))arg2;
- (void)onPostMessage:(NSString *)arg1 body:(id)arg2;
- (NSString *)onPrompt:(NSString *)arg1 defaultText:(NSString *)arg2;
@end

