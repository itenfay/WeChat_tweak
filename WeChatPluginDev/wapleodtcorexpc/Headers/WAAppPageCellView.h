//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView, NSDate, NSString, UIImageView, WAAppPageSystemMsgView, WAAppPageViewModel, WCTagsView, YYAsyncImageView;

@interface WAAppPageCellView
{
    _Bool _isUpdatingContentLabel;
    _Bool _isVisible;
    MMWebImageView *_appLogoView;
    MMUILabel *_appNameLabel;
    UIImageView *_defaultLogo;
    YYAsyncImageView *_imageView;
    MMUILabel *_titleLabel;
    MMUILabel *_updatableContentLabel;
    WAAppPageSystemMsgView *_systemMsgView;
    WCTagsView *_tagsView;
    MMWebImageView *_maskView;
    UIImageView *_playIconImgView;
    NSDate *_visibleDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *visibleDate; // @synthesize visibleDate=_visibleDate;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(retain, nonatomic) UIImageView *playIconImgView; // @synthesize playIconImgView=_playIconImgView;
@property(retain, nonatomic) MMWebImageView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) WCTagsView *tagsView; // @synthesize tagsView=_tagsView;
@property(nonatomic) _Bool isUpdatingContentLabel; // @synthesize isUpdatingContentLabel=_isUpdatingContentLabel;
@property(retain, nonatomic) WAAppPageSystemMsgView *systemMsgView; // @synthesize systemMsgView=_systemMsgView;
@property(retain, nonatomic) MMUILabel *updatableContentLabel; // @synthesize updatableContentLabel=_updatableContentLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) YYAsyncImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImageView *defaultLogo; // @synthesize defaultLogo=_defaultLogo;
@property(retain, nonatomic) MMUILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(retain, nonatomic) MMWebImageView *appLogoView; // @synthesize appLogoView=_appLogoView;
- (void)onAppear;
- (_Bool)canShowFavoriteMenuItem;
- (_Bool)WAAppPageSystemMsgView_isUseLightStyle;
- (id)fontOfSystemMsg;
- (void)onLinkClicked;
- (void)retryWithShareKey:(id)arg1;
- (void)fillUpdatableMsgContent;
- (void)scheduleUpdateWithLatestMsgInfo:(id)arg1;
- (void)tryUpdateUpdatableMsgInfo;
- (void)onUpdatableMsgInfoUpdated:(id)arg1 info:(id)arg2;
- (void)OnMsgDownloadThumbOK:(id)arg1 MsgWrap:(id)arg2;
- (void)onTouchUpInside;
- (id)displayViewForImageBrowser;
- (void)preloadWeApp;
- (void)layoutContentView;
- (void)layoutInternal;
- (void)initSystemMsgView;
- (void)initPlayImageView;
- (void)initPageImageView;
- (void)initUpdatableContentView;
- (void)initTitleView;
- (void)initTagsView;
- (void)initHeaderView;
- (void)willMoveToWindow:(id)arg1;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) WAAppPageViewModel *viewModel; // @dynamic viewModel;

@end

