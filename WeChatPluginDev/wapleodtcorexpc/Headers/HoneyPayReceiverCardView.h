//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, WCPayBindCardInfo, WCPayControlData, WCPayWebImageView;
@protocol HoneyPayReceiverCardViewDelegate;

@interface HoneyPayReceiverCardView : UIView
{
    id <HoneyPayReceiverCardViewDelegate> _delegate;
    WCPayBindCardInfo *_info;
    WCPayControlData *_data;
    UIButton *_button;
    UIView *_contentView;
    WCPayWebImageView *_icon;
    UILabel *_cardTypeLabel;
    UILabel *_sendByLabel;
    UILabel *_balanceLabel;
    UILabel *_balanceTipLabel;
    UIImageView *_backgroundIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *backgroundIcon; // @synthesize backgroundIcon=_backgroundIcon;
@property(retain, nonatomic) UILabel *balanceTipLabel; // @synthesize balanceTipLabel=_balanceTipLabel;
@property(retain, nonatomic) UILabel *balanceLabel; // @synthesize balanceLabel=_balanceLabel;
@property(retain, nonatomic) UILabel *sendByLabel; // @synthesize sendByLabel=_sendByLabel;
@property(retain, nonatomic) UILabel *cardTypeLabel; // @synthesize cardTypeLabel=_cardTypeLabel;
@property(retain, nonatomic) WCPayWebImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) WCPayControlData *data; // @synthesize data=_data;
@property(retain, nonatomic) WCPayBindCardInfo *info; // @synthesize info=_info;
@property(nonatomic) __weak id <HoneyPayReceiverCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)click;
- (void)layout;
- (id)initWithInfo:(id)arg1 data:(id)arg2;

@end

