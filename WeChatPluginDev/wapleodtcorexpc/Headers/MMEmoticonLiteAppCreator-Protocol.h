//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiteAppViewController, NSString, UIViewController;
@protocol MMEmoticonLiteAppPageContext;

@protocol MMEmoticonLiteAppCreator <NSObject>
- (UIViewController *)getNativeVCFor:(id <MMEmoticonLiteAppPageContext>)arg1;
- (void)onGetLiteAppViewController:(MMLiteAppViewController *)arg1 context:(id <MMEmoticonLiteAppPageContext>)arg2;
- (_Bool)isLiteAppEnabledFor:(id <MMEmoticonLiteAppPageContext>)arg1;
- (NSString *)page;
- (NSString *)appid;
- (NSString *)getQueryStringFor:(id <MMEmoticonLiteAppPageContext>)arg1;

@optional
- (_Bool)allowsFallBackNative;
- (void)onStartTryGetLiteAppViewControllerForContext:(id <MMEmoticonLiteAppPageContext>)arg1;
- (void)onGetLiteAppViewControllerFailedForContext:(id <MMEmoticonLiteAppPageContext>)arg1;
@end

