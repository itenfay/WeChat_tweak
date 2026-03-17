//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BrandTemplateMsgAuthLogic, NSDictionary, NSString, UIViewController;

@protocol BrandTemplateMsgAuthLogicDelegate <NSObject>
- (UIViewController *)viewControllerToShowPageSheet;
- (void)onSubscriptionMessageLogicWillDismissPageSheet:(BrandTemplateMsgAuthLogic *)arg1;
- (void)onSubscriptionMessageLogicWillShowPageSheet:(BrandTemplateMsgAuthLogic *)arg1;
- (void)onSubscriptionMessageLogic:(BrandTemplateMsgAuthLogic *)arg1 finishedWithResult:(NSDictionary *)arg2 extInfo:(NSString *)arg3 success:(_Bool)arg4 errorCode:(long long)arg5 errorMessage:(NSString *)arg6;
@end

