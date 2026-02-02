//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class MMUILabel, MMWebImageView, NSString, TextStateIcon, UIImageView;

@interface VoipRecentStatusTextStatePublishIconButton : UIControl
{
    TextStateIcon *_iconWrap;
    NSString *_customIconDescription;
    MMWebImageView *_iconImageView;
    MMUILabel *_iconDescriptionLabel;
    UIImageView *_arrowImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *iconDescriptionLabel; // @synthesize iconDescriptionLabel=_iconDescriptionLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) NSString *customIconDescription; // @synthesize customIconDescription=_customIconDescription;
@property(retain, nonatomic) TextStateIcon *iconWrap; // @synthesize iconWrap=_iconWrap;
- (void)refreshIconDescriptionLabel;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

