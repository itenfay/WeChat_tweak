//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIEvent, UIView;

@protocol WCAdContactInfoHalfScreenViewControllerDelegate <NSObject>

@optional
- (UIView *)onContactInfoHalfScreenHitTest:(struct CGPoint)arg1 withEvent:(UIEvent *)arg2;
- (void)onContactInfoHalfScreenPageSheetDidChangeVisibleHeight:(double)arg1;
- (void)onContactInfoHalfScreenPageSheetDidClose;
- (void)onContactInfoHalfScreenPageSheetWillClose;
@end

