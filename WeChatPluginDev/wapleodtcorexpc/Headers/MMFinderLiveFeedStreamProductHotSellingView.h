//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveSyncFeedPreviewMultiStyleInfoResp_HotShopInfo, NSMutableArray, UILabel, UIView;

@interface MMFinderLiveFeedStreamProductHotSellingView
{
    FinderLiveSyncFeedPreviewMultiStyleInfoResp_HotShopInfo *_bubble;
    UIView *_containerView;
    UIView *_imageContainerView;
    NSMutableArray *_roundImageViews;
    UILabel *_contentLabel;
}

+ (double)defaultHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) NSMutableArray *roundImageViews; // @synthesize roundImageViews=_roundImageViews;
@property(retain, nonatomic) UIView *imageContainerView; // @synthesize imageContainerView=_imageContainerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) FinderLiveSyncFeedPreviewMultiStyleInfoResp_HotShopInfo *bubble; // @synthesize bubble=_bubble;
- (void)endExposeAction;
- (void)startExposeAction;
- (void)setTaskId:(id)arg1;
- (id)imageView:(id)arg1 size:(struct CGSize)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

