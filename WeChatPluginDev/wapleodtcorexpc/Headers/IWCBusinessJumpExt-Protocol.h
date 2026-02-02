//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSDictionary, NSString, WCBusinessJumpViewController;

@protocol IWCBusinessJumpExt <NSObject>

@optional
- (void)processTranslateResult:(NSString *)arg1 parentController:(MMUIViewController *)arg2 originUrl:(NSString *)arg3 translateInfo:(NSDictionary *)arg4 jumpController:(WCBusinessJumpViewController *)arg5;
- (void)processTranslateResultWithPath:(NSString *)arg1 queryDict:(NSDictionary *)arg2 parentController:(MMUIViewController *)arg3 originUrl:(NSString *)arg4 translateInfo:(NSDictionary *)arg5 jumpController:(WCBusinessJumpViewController *)arg6;
@end

