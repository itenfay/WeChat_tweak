//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel, UIView;

@interface MMFinderLiveConnectMicConditionCell
{
    UILabel *_typeTitle;
    UIView *_separator;
    UIImageView *_checkIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *checkIconView; // @synthesize checkIconView=_checkIconView;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *typeTitle; // @synthesize typeTitle=_typeTitle;
- (void)unToggle;
- (void)toggle;
- (void)layoutSubviews;
- (void)updateWithTitle:(id)arg1;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

