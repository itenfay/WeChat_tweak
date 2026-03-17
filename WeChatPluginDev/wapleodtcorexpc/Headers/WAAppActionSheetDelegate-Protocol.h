//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WAAppActionSheetDelegate <NSObject>

@optional
- (void)onWAActionSheetDidDismiss;
- (void)onWAActionSheetWillDismiss;
- (void)onWAActionSheetInfoClicked;
- (void)onWAActionSheetDestruct;
- (void)onWAActionSheetClickStateView;
- (void)onWAActionSheetClickButtonWithButtonTitle:(NSString *)arg1;
- (void)onWAActionSheetCancel;
@end

