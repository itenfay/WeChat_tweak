//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel;

@interface WCCoinBalanceButton : UIButton
{
    UILabel *_balanceLabel;
    UIImageView *_icon;
    UIImageView *_arrow;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *balanceLabel; // @synthesize balanceLabel=_balanceLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

