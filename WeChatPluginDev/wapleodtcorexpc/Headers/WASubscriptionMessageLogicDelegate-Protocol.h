//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, WASubscriptionMessageLogic;

@protocol WASubscriptionMessageLogicDelegate <NSObject>

@optional
- (void)onSubscriptionMessageLogicWillDismissPageSheet:(WASubscriptionMessageLogic *)arg1;
- (void)onSubscriptionMessageLogicWillShowPageSheet:(WASubscriptionMessageLogic *)arg1;
- (void)onSubscriptionMessageLogic:(WASubscriptionMessageLogic *)arg1 finishedWithResult:(NSDictionary *)arg2 success:(_Bool)arg3 cancel:(_Bool)arg4 errorMessage:(NSString *)arg5 errorCode:(long long)arg6;
@end

