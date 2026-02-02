//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel;

@interface WCFinderTagView
{
    UIImageView *_iconView;
    UILabel *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void)updateLayout;
- (void)updateText:(id)arg1;
- (void)updateImage:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

