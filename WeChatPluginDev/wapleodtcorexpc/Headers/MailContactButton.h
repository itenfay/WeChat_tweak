//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CMailContact, UIButton;
@protocol MailContactButtonDelegate;

@interface MailContactButton : UIView
{
    CMailContact *m_oMailContact;
    id <MailContactButtonDelegate> m_delegate;
    UIButton *m_btnMailContactButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMailContact *m_oMailContact; // @synthesize m_oMailContact;
@property(nonatomic) __weak id <MailContactButtonDelegate> m_delegate; // @synthesize m_delegate;
- (_Bool)isHighlighted;
- (void)setHighlighted:(_Bool)arg1;
- (void)onReceiverBtnRepeatClick:(id)arg1;
- (void)onReceiverBtnClick:(id)arg1;
- (void)createButton;
- (id)initWithMailContact:(id)arg1;

@end

