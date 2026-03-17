//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CustomModal, NSString, UIView;

@protocol WCPayOrderPayConfirmViewDelegate <NSObject>
- (NSString *)onOrderPayConfirmViewDesc;
- (void)onOrderPayConfirmViewShowModal:(CustomModal *)arg1 confirmView:(UIView *)arg2;
- (_Bool)onOrderPayConfirmViewShowBankFav;
- (void)onOrderPayConfirmViewSelectBankFavGuide:(UIView *)arg1;
- (void)onOrderPayConfirmViewPerformTouchID;
- (void)onOrderPayConfirmViewGotoPasswordAuth;
- (void)onOrderPayConfirmViewGotoTouchIDAuth;
- (void)onOrderPayConfirmViewCancel;
- (void)OnOrderPayChangeConpons;
- (void)onOrderPayChangeCard;
- (void)onOrderPayConfirmViewPay:(NSString *)arg1;
@end

