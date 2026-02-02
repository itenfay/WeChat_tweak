//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel;

@interface MMLiveNoticeSelectButton
{
    double _maxWidth;
    UIImageView *_iconView;
    UILabel *_textLabel;
    UIImageView *_arrowImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateLiveNoticeSelectButtonTitle:(id)arg1 showArrowImageView:(_Bool)arg2;
- (id)init;

@end

