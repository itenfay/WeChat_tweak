//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppOpenSDKAppBrandMessageViewModel, MMUILabel, MMWebImageView, NSDate, NSString, UIImageView, UILabel, UIView, WCTagsView;

@interface AppOpenSDKAppBrandMessageCellView
{
    UIImageView *m_thumbImageView;
    UIImageView *m_defaultLogo;
    UILabel *m_titleLabel;
    UILabel *m_descLabel;
    UIView *m_appBrandSourceView;
    MMWebImageView *_appLogoView;
    MMUILabel *_appNameLabel;
    WCTagsView *_tagsView;
    NSDate *_visibleDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *visibleDate; // @synthesize visibleDate=_visibleDate;
@property(retain, nonatomic) WCTagsView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) MMUILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(retain, nonatomic) MMWebImageView *appLogoView; // @synthesize appLogoView=_appLogoView;
- (id)scaleFixOriginThumbImage:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)updateThumbImage;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (void)addThumbImageView;
- (void)addDescLabel;
- (void)addTitleLabel;
- (void)initTagsView;
- (void)initHeaderView;
- (void)willMoveToWindow:(id)arg1;
- (void)preloadWeApp;
- (void)layoutContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) AppOpenSDKAppBrandMessageViewModel *viewModel; // @dynamic viewModel;

@end

