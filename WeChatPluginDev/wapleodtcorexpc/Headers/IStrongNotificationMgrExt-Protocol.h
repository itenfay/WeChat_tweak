//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IStrongNotificationMgrExt <NSObject>

@optional
- (void)onStrongNotificationShow;
- (void)onAcceptWeAppStrongNotification:(NSString *)arg1 resultFlag:(_Bool)arg2 errorMsg:(NSString *)arg3;
- (void)onModifyStrongNotificationBanner;
- (void)onDeleteStrongNotification:(NSString *)arg1 contactUserName:(NSString *)arg2 resultFlag:(_Bool)arg3;
- (void)onAddStrongNotification:(NSString *)arg1 contactUserName:(NSString *)arg2 resultFlag:(_Bool)arg3;
- (void)onModifyStrongNotification:(NSString *)arg1 contactUserName:(NSString *)arg2;
@end

