//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, RichTextView, WCFinderGuideLinkBubbleModel;

@interface WCFinderGuideLinkBubbleView
{
    MMWebImageView *_iconImageView;
    RichTextView *_textView;
    double _maxWidth;
    WCFinderGuideLinkBubbleModel *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderGuideLinkBubbleModel *model; // @synthesize model=_model;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)updateWithModel:(id)arg1;
- (void)layoutAllSubviews;
- (id)initWithFrame:(struct CGRect)arg1 maxWidth:(double)arg2;

@end

