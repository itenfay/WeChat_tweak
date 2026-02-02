//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIEvent, UIView;

@protocol WCAdConventionalDetailContainerViewControllerDelegate <NSObject>

@optional
- (void)onDetailContainerViewPageSheetTryToDismissParent:(_Bool)arg1;
- (UIView *)onDetailContainerViewHitTest:(struct CGPoint)arg1 withEvent:(UIEvent *)arg2;
- (void)onDetailContainerViewPageSheetDidChangeVisibleHeight:(double)arg1;
- (void)onDetailContainerViewPageSheetDidClose;
- (void)onDetailContainerViewPageSheetWillClose;
@end

