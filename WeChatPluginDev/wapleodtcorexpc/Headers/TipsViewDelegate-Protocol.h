//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TipsView;

@protocol TipsViewDelegate <NSObject>

@optional
- (void)onMenuControllerVisible:(TipsView *)arg1;
- (void)onRightButtonWaitingForConfirm:(TipsView *)arg1;
- (void)onTipsViewDidShow:(TipsView *)arg1;
- (void)onTipsViewHeightChanged:(TipsView *)arg1;
- (void)onTipsViewHideAtTimeout:(TipsView *)arg1;
- (void)onPerformExposeAction:(TipsView *)arg1;
- (void)onPerformIconAction:(TipsView *)arg1;
- (void)onPerformAction:(TipsView *)arg1;
- (void)onTipsViewClose:(TipsView *)arg1;
- (void)onTipsViewClick:(TipsView *)arg1;
@end

