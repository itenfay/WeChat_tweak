//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSNotification, NSString, UIAlertAction, UIBarButtonItem, UIButton, UIEvent, UINavigationController, UIView, UIViewController, WCActionSheet;

@protocol MMLiveReportEventMgrExt <NSObject>

@optional
- (void)onUIOrientationChanged:(NSNotification *)arg1;
- (void)onNavigationBarButtonClicked:(UINavigationController *)arg1 barButtonItem:(UIBarButtonItem *)arg2;
- (void)onAlertActionClicked:(UIAlertAction *)arg1 viewReportTag:(unsigned long long)arg2 controller:(UIViewController *)arg3;
- (void)onActionSheetClicked:(WCActionSheet *)arg1 controller:(UIViewController *)arg2 button:(UIButton *)arg3 buttonTitle:(NSString *)arg4;
- (void)onReportEventTriggered:(UIEvent *)arg1 controller:(UIViewController *)arg2 view:(UIView *)arg3 action:(SEL)arg4 target:(id)arg5;
@end

