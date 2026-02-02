//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CustomMenuButton, NSString;

@protocol IBrandCustomReportExt

@optional
- (void)onJumpToPOIView:(CustomMenuButton *)arg1;
- (void)onJumpToPicView:(CustomMenuButton *)arg1;
- (void)onJumpToScanView:(CustomMenuButton *)arg1;
- (void)onJumpToWebView:(NSString *)arg1;
- (void)onRecordActionEvent:(CustomMenuButton *)arg1 toBrand:(NSString *)arg2;
- (void)onReportClickEvent:(CustomMenuButton *)arg1 toBrand:(NSString *)arg2;
@end

