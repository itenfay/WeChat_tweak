//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class RichTextView, UIImageView, UIView;

@interface WCFinderForbidBannerView
{
    UIView *_containerView;
    UIImageView *_infoImageView;
    RichTextView *_textView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIImageView *infoImageView; // @synthesize infoImageView=_infoImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)updateWithIconName:(id)arg1 text:(id)arg2 level:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

