//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveSyncFeedPreviewMultiStyleInfoResp_RecommendCouponInfo, MMWebImageView, RichTextView;

@interface MMFinderLiveFeedStreamProductCouponView
{
    FinderLiveSyncFeedPreviewMultiStyleInfoResp_RecommendCouponInfo *_bubble;
    MMWebImageView *_iconImageView;
    RichTextView *_textView;
}

+ (double)defaultHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) FinderLiveSyncFeedPreviewMultiStyleInfoResp_RecommendCouponInfo *bubble; // @synthesize bubble=_bubble;
- (void)endExposeAction;
- (void)startExposeAction;
- (void)setTaskId:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

