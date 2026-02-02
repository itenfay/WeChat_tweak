//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIEvent, UIView, UIViewController;

@protocol WCAdConventionalHalfScreenDetailViewDelegate <NSObject>

@optional
- (void)onDetailViewPageSheetTryToDismissParent:(_Bool)arg1;
- (void)onDetailViewPageSheetUpdateAnimatingState:(_Bool)arg1;
- (void)onDetailViewPageSheetWillStickToBottom;
- (void)onDetailViewPageSheetDidPinToTop;
- (void)onDetailViewPageSheetUpdateTitle:(NSString *)arg1;
- (void)onDetailViewPageSheetCeilingTopWithPercent:(double)arg1 animated:(_Bool)arg2;
- (double)onDetailViewPageSheetFetchCalculatedHeight;
- (unsigned long long)onDetailViewPageSheetFetchItemScene;
- (UIView *)onDetailViewPageSheetHitTest:(struct CGPoint)arg1 withEvent:(UIEvent *)arg2;
- (void)onDetailViewPageSheetDidChangeVisibleHeight:(double)arg1;
- (void)onDetailViewPageSheetDidClose;
- (void)onDetailViewPageSheetWillClose;
- (UIViewController *)onDetailViewGetCurrentViewController;
- (void)onDetailViewWillShowViewController:(UIViewController *)arg1;
- (void)onDetailViewWillAddViewController:(UIViewController *)arg1;
@end

