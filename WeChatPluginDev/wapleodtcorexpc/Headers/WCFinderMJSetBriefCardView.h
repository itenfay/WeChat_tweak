//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, RichTextView, UIImageView, UILabel, UIView;

@interface WCFinderMJSetBriefCardView
{
    UIView *_line;
    UIImageView *_mediaBkgImage;
    RichTextView *_titleTextView;
    UILabel *_subTitleLabel;
    MMUIButton *_button;
}

+ (double)height;
+ (id)buildTitleTextView:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) RichTextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) UIImageView *mediaBkgImage; // @synthesize mediaBkgImage=_mediaBkgImage;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
- (void)updateWithImageUrl:(id)arg1 defaultImage:(id)arg2 title:(id)arg3 subTitle:(id)arg4 btnSvgIcon:(id)arg5 btnTitle:(id)arg6 clickBlock:(CDUnknownBlockType)arg7;
- (void)updateWithVM:(id)arg1 clickBlock:(CDUnknownBlockType)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutAllSubviews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

