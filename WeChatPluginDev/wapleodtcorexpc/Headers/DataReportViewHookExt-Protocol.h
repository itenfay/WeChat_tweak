//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIScrollView, UIView;

@protocol DataReportViewHookExt <NSObject>

@optional
- (void)onScrollViewDidScroll:(UIScrollView *)arg1;
- (void)onWillRemoveSubview:(UIView *)arg1;
- (void)onRemoveFromSuperview:(UIView *)arg1;
- (void)onLayoutSubviews:(UIView *)arg1;
- (void)onSetAlpha:(double)arg1 withView:(UIView *)arg2;
- (void)onSetHidden:(_Bool)arg1 withView:(UIView *)arg2;
- (void)onInsertSubview:(UIView *)arg1 belowSubview:(UIView *)arg2;
- (void)onInsertSubview:(UIView *)arg1 aboveSubview:(UIView *)arg2;
- (void)onSendSubviewToBack:(UIView *)arg1;
- (void)onBringSubviewToFront:(UIView *)arg1;
- (void)onDidMoveToWindow:(UIView *)arg1;
- (void)onDidMoveToSuperview:(UIView *)arg1;
@end

