//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMDeviceHeadImageView, UILabel;

@interface WCDevicePedometerCell
{
    MMDeviceHeadImageView *_headView;
    UILabel *_titleLabel;
}

+ (double)cellHeightForTitle:(id)arg1 detail:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMDeviceHeadImageView *headView; // @synthesize headView=_headView;
- (void)layoutSubviews;
- (void)resetIcon;
- (void)setDeviceIconUrl:(id)arg1;
- (void)setDeviceIconName:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)initCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

