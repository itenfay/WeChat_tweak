//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LocationMessageViewModel, MMImageView, MMUIActivityIndicatorView, MMUILabel, NSString, UIImageView;

@interface LocationMessageCellView
{
    unsigned long long m_geotag;
    MMUILabel *m_titleLabel;
    MMUILabel *m_descLabel;
    UIImageView *m_contentBgImageView;
    MMImageView *m_imageView;
    MMUIActivityIndicatorView *m_imageLoadingView;
    MMUIActivityIndicatorView *m_poiLoadingView;
    _Bool m_enterBackground;
}

- (void).cxx_destruct;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)traitCollectionDidChange:(id)arg1;
- (void)OnLocationThumbMgrError:(int)arg1 Task:(id)arg2;
- (void)OnUpdateLocationThumb:(id)arg1 Task:(id)arg2;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (void)createNewRequest;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (id)maskLayerWithBounds:(struct CGRect)arg1;
- (void)setLocationThumbImage;
- (void)initLocationThumbImageView;
- (void)initContentBgImageView;
- (void)initTitleLabel;
- (void)layoutContentView;
- (_Bool)canBeReused;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) LocationMessageViewModel *viewModel; // @dynamic viewModel;

@end

