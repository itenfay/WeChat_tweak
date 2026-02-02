//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions, MMFinderLiveFeedHighlightTagView, NSMutableArray, NSString, RichTextView, UILabel, UIView, WCFinderAuthInfoIconView, WCFinderHeadImageView, WCFinderLiveCardProductShowcase;
@protocol WCFinderLiveTopicTemplateLargeCellDelegate;

@interface WCFinderLiveTopicTemplateLargeCell
{
    _Bool _hideAudienceNum;
    WCFinderHeadImageView *_avatorImageView;
    RichTextView *_nicknameTV;
    WCFinderAuthInfoIconView *_authInfoIconView;
    MMFinderLiveFeedHighlightTagView *_highlightTagView;
    UIView *_avatorTapView;
    UILabel *_audienceNumLabel;
    NSMutableArray *_productViews;
    WCFinderLiveCardProductShowcase *_curProductShowcase;
    FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions *_hotSellingOptions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions *hotSellingOptions; // @synthesize hotSellingOptions=_hotSellingOptions;
@property(retain, nonatomic) WCFinderLiveCardProductShowcase *curProductShowcase; // @synthesize curProductShowcase=_curProductShowcase;
@property(retain, nonatomic) NSMutableArray *productViews; // @synthesize productViews=_productViews;
@property(retain, nonatomic) UILabel *audienceNumLabel; // @synthesize audienceNumLabel=_audienceNumLabel;
@property(retain, nonatomic) UIView *avatorTapView; // @synthesize avatorTapView=_avatorTapView;
@property(retain, nonatomic) MMFinderLiveFeedHighlightTagView *highlightTagView; // @synthesize highlightTagView=_highlightTagView;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(retain, nonatomic) RichTextView *nicknameTV; // @synthesize nicknameTV=_nicknameTV;
@property(retain, nonatomic) WCFinderHeadImageView *avatorImageView; // @synthesize avatorImageView=_avatorImageView;
@property(nonatomic) _Bool hideAudienceNum; // @synthesize hideAudienceNum=_hideAudienceNum;
- (id)getAudienceNumWordingWithDataItem:(id)arg1;
- (void)onProductTapped:(id)arg1;
- (void)onAvatorTapped;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onFeedHighlightTagUpdate;
- (void)updateHighLightTag;
- (_Bool)isPlayingLive;
- (void)setupProductsIfNeeded;
- (void)relayoutNickname;
- (void)layoutSubviews;
- (void)initSubviewsIfNeeded;
- (void)resetSubviews;
- (void)updateWithHotSellingOptions:(id)arg1;
- (void)updateWithProductShowcase:(id)arg1;
- (void)prepareForReuse;
- (void)updateWithFeedVM:(id)arg1;
- (void)initViewsIfNeeded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <WCFinderLiveTopicTemplateLargeCellDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

