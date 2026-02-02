//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface HoneyPayNormalCardView : UIView
{
    NSString *_payerUserName;
    UIView *_contentView;
    UIImageView *_icon;
    UIImageView *_backgroundIcon;
    UILabel *_cardTypeLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *cardTypeLabel; // @synthesize cardTypeLabel=_cardTypeLabel;
@property(retain, nonatomic) UIImageView *backgroundIcon; // @synthesize backgroundIcon=_backgroundIcon;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *payerUserName; // @synthesize payerUserName=_payerUserName;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end

