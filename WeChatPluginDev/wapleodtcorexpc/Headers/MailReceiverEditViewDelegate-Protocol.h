//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMailContact, UIView;

@protocol MailReceiverEditViewDelegate <NSObject>

@optional
- (void)onMailContactChanged:(UIView *)arg1;
- (void)onTextFieldNextItem:(UIView *)arg1;
- (void)onTextFieldBeginEdit:(UIView *)arg1;
- (void)onTextFieldChanged:(UIView *)arg1;
- (void)onTextFieldFinishEdit:(UIView *)arg1;
- (void)onMailReceiverEditViewHeightChanged:(UIView *)arg1;
- (void)onAddMailContact:(UIView *)arg1;
- (void)onMailContactDoubleClicked:(CMailContact *)arg1;
@end

