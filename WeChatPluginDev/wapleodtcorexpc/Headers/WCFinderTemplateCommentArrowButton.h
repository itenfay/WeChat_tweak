//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, UILabel;

@interface WCFinderTemplateCommentArrowButton
{
    MMWebImageView *_iconView;
    UILabel *_textLabel;
}

+ (double)heightWithTitle:(id)arg1 maxWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) MMWebImageView *iconView; // @synthesize iconView=_iconView;
- (void)layoutWithMaxWidth:(double)arg1;
- (void)updateWithIconUrl:(id)arg1 title:(id)arg2 bgColor:(id)arg3;
- (void)updateWithIcon:(id)arg1 title:(id)arg2;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

