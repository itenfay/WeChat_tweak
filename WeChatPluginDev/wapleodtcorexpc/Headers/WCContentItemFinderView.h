//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, NSURL, NewLifeShareCoverImageView, NewLifeShareCoverImageViewModel, SightIconView, UIImage, UIImageView, UILabel, UIView, WCContentItemFinderViewModel, WCFinderDataItem, WCFinderFeedMediaWrap, WCFinderMediaInfo;

@interface WCContentItemFinderView
{
    _Bool _ignoresRequestFinderRelatedFeeds;
    _Bool _playFullScreen;
    _Bool _needSilencePlay;
    NSString *_parentTid;
    WCContentItemFinderViewModel *_viewModel;
    NewLifeShareCoverImageViewModel *_newlifeViewModel;
    WCFinderDataItem *_refFinderDataItem;
    WCFinderFeedMediaWrap *_mediaWrap;
    WCFinderMediaInfo *_mediaInfo;
    SightIconView *_playIconView;
    UIImageView *_contentImageView;
    NSURL *_fullScreenImageURL;
    UIImage *_fullScreenImage;
    UILabel *_nameLabel;
    UILabel *_durationLabel;
    UIView *_hlView;
    double _lastTime;
    MMUIButton *_memberFlagButton;
    NewLifeShareCoverImageView *_newlifeShareView;
    struct CGRect _fromRect;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool needSilencePlay; // @synthesize needSilencePlay=_needSilencePlay;
@property(retain, nonatomic) NewLifeShareCoverImageView *newlifeShareView; // @synthesize newlifeShareView=_newlifeShareView;
@property(retain, nonatomic) MMUIButton *memberFlagButton; // @synthesize memberFlagButton=_memberFlagButton;
@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(nonatomic) struct CGRect fromRect; // @synthesize fromRect=_fromRect;
@property(nonatomic) _Bool playFullScreen; // @synthesize playFullScreen=_playFullScreen;
@property(retain, nonatomic) UIView *hlView; // @synthesize hlView=_hlView;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImage *fullScreenImage; // @synthesize fullScreenImage=_fullScreenImage;
@property(retain, nonatomic) NSURL *fullScreenImageURL; // @synthesize fullScreenImageURL=_fullScreenImageURL;
@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) WCFinderMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(retain, nonatomic) WCFinderDataItem *refFinderDataItem; // @synthesize refFinderDataItem=_refFinderDataItem;
@property(retain, nonatomic) NewLifeShareCoverImageViewModel *newlifeViewModel; // @synthesize newlifeViewModel=_newlifeViewModel;
@property(retain, nonatomic) WCContentItemFinderViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSString *parentTid; // @synthesize parentTid=_parentTid;
@property(nonatomic) _Bool ignoresRequestFinderRelatedFeeds; // @synthesize ignoresRequestFinderRelatedFeeds=_ignoresRequestFinderRelatedFeeds;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)cancelLoadFinderImages;
- (void)loadFinderImages;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)doShareAnimation;
- (struct CGRect)transitionStartImageRectInView:(id)arg1 willPresent:(_Bool)arg2;
- (id)transitionStartImage;
- (void)onNewLifeDetailShareViewAnimationEnd;
- (void)onNewLifeDetailShareViewAnimationBegin;
- (id)getNewLifeAnimationCardImageView;
- (id)getNewLifeAnimationCardView;
- (id)getNewLifeZoomAnimatorKey;
- (id)zoomAnimatorKey;
- (void)onAnimatorDidEndClosure:(id)arg1;
- (void)onAnimatorWillBeginClosure:(id)arg1;
- (_Bool)zoomAnimiatorShouldCacheSnapView;
- (id)zoomAnimatorTransitionSnapView:(id)arg1 cornerRaidus:(double *)arg2;
- (void)onFavoriteAdd;
- (void)onSilencePlay;
- (void)onLongTouch;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)throwUrlMessage;
- (id)getVoiceOverStrForTimeline;
- (void)onVoiceOverClick;
- (void)layoutNewLifeStyle:(id)arg1;
- (void)layoutCardStyle:(id)arg1;
- (void)layoutPureText:(id)arg1;
- (void)layoutDefault:(id)arg1;
- (void)initViewsWithWCContentItem:(id)arg1;
- (void)preLoad:(id)arg1;
- (void)dealloc;
- (void)initViewsWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

