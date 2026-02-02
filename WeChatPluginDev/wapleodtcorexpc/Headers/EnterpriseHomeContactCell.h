//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView;

@interface EnterpriseHomeContactCell
{
    MMWebImageView *_iconImageView;
    MMUILabel *_displayNameLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)layoutSubviews;
- (void)updateHomeContactInfo:(id)arg1;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

