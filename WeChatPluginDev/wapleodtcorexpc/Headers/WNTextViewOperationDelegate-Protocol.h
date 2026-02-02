//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIResponder, UIView, WNTextView;

@protocol WNTextViewOperationDelegate <NSObject>
- (NSArray *)getMenuItemsWithResponder:(UIResponder *)arg1;
- (struct CGRect)getSelectionMenuTargetRectOnFirstResponder;
- (void)onEditOrderList;
- (_Bool)enableOrderListMenu;
- (_Bool)isOnContentSearching;
- (void)scrollRectToVisible:(struct CGRect)arg1 fromView:(UIView *)arg2;
- (void)onTapWeAppMPShortLink:(NSString *)arg1;
- (void)onResignFirstResponder:(WNTextView *)arg1;
- (void)onBecomeFirstResponder:(WNTextView *)arg1;
@end

