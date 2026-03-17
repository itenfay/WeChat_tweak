//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CustomMenuButton, NSString;

@protocol CustomMenuToolViewDelegate <NSObject>
- (NSString *)getBrandContactUsername;
- (void)onJumpToEcs:(CustomMenuButton *)arg1;
- (void)onOpenWeAppWithJSONString:(NSString *)arg1 fromScene:(unsigned int)arg2 btnName:(NSString *)arg3 btnLevel:(unsigned long long)arg4;
- (void)onJumpToBrandSearchView:(CustomMenuButton *)arg1;
- (void)onJumpToPOIView:(CustomMenuButton *)arg1;
- (void)onJumpToPicView:(CustomMenuButton *)arg1;
- (void)onJumpToScanView:(CustomMenuButton *)arg1;
- (_Bool)onJumpToNativeView:(NSString *)arg1;
- (void)onJumpToWebView:(NSString *)arg1;
- (void)onRecordActionEvent:(CustomMenuButton *)arg1;
- (void)onReportParentClickEvent:(CustomMenuButton *)arg1;
- (void)onReportClickEvent:(CustomMenuButton *)arg1;
- (void)onSubMenuDismiss;
- (void)onSubMenuPresentWithIndex:(long long)arg1 ArrowX:(double)arg2;
- (void)onChangeToMenuMode:(CustomMenuButton *)arg1;
- (void)onChangeToInputMode;
- (_Bool)shouldShowChangeModeBtn;
@end

