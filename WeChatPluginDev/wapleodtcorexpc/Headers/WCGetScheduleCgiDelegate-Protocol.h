//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WCGetScheduleCgi;

@protocol WCGetScheduleCgiDelegate <NSObject>

@optional
- (void)onGetScheduleCgiFail:(WCGetScheduleCgi *)arg1 errMsg:(NSString *)arg2;
- (void)onGetScheduleCgi:(WCGetScheduleCgi *)arg1 updateAllItems:(NSArray *)arg2;
- (void)onGetScheduleCgi:(WCGetScheduleCgi *)arg1 updateFirstPageItems:(NSArray *)arg2;
@end

