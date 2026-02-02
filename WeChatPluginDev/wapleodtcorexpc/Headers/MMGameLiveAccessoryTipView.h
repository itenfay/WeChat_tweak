//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, RichTextView;

@interface MMGameLiveAccessoryTipView
{
    MMUILabel *_titleLabel;
    RichTextView *_descLabel;
    struct CGSize _selfSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) struct CGSize selfSize; // @synthesize selfSize=_selfSize;
- (double)lineSpace;
- (id)descContent;
- (id)descTitle;
- (double)currContentScale;
- (double)standardWidth;
- (void)updateTitleDescOrigin;
- (void)createDescLabel;
- (void)createTitleLabel;
- (void)createUI;
- (void)checkSelfSizeChanged;
- (void)layoutSubviews;
- (id)init;

@end

