//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIColor;

@protocol MMPageSheetBottomViewDelegate <NSObject>

@optional
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (UIColor *)colorForPageSheetCancelButton;
- (long long)styleForPageSheetCancelButton;
- (UIColor *)colorForPageSheetCancelButtonTitle;
- (NSString *)titleForPageSheetCancelButton;
- (long long)numberOfLinesForPageSheetConfirmButton;
- (UIColor *)colorForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (NSString *)titleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
@end

