//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIImageView;

@interface BrandLiveStatusButton
{
    MMUILabel *_textLabel;
    UIImageView *_liveImageView;
    unsigned long long _style;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIImageView *liveImageView; // @synthesize liveImageView=_liveImageView;
@property(retain, nonatomic) MMUILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void)layoutSubviews;
- (void)updateStatusWording:(id)arg1;
- (void)initView:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

