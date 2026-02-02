//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LiteAppAssetInfo, MMAssetICloudLoadingView, MMAssetSelectCheckButton, MMUILabel, NSMutableArray, NSString, UIImage, UIImageView, UILabel, UIView, WCLivePhotoButton, WCLivePhotoButtonModel;
@protocol LiteAppAssetPickerControlCenter, LiteAppAssetViewDelegate;

@interface LiteAppAssetView
{
    _Bool m_isSelected;
    _Bool m_isPreviewStyle;
    UIView *m_disabledMaskView;
    UIView *m_tagBackgroundView;
    UILabel *m_lengthLabel;
    UILabel *m_gifLogoView;
    UIView *m_editImageView;
    MMAssetSelectCheckButton *m_selectCheckButton;
    double m_imgHeight;
    _Bool _enabled;
    _Bool _select;
    _Bool _bDelayUpdateAssetInfo;
    _Bool _isAutoPicking;
    _Bool _isDragPicking;
    _Bool _isDragPickingInterupt;
    _Bool _isICloudLoading;
    LiteAppAssetInfo *_assetInfo;
    id <LiteAppAssetViewDelegate> _delegate;
    id <LiteAppAssetPickerControlCenter> _controlCenter;
    UIImage *_defaultImage;
    UIImageView *_m_assetImageView;
    UIView *_m_selectionBgView;
    MMUILabel *_m_nameLabel;
    MMUILabel *_m_sizeLabel;
    UIView *_limitTipsView;
    UIView *_highlightView;
    UILabel *_indexLabel;
    MMAssetICloudLoadingView *_icloudLoadingView;
    UIImageView *_mediaTypeIconView;
    WCLivePhotoButton *_livePhotoButton;
    WCLivePhotoButtonModel *_livePhotoButtonModel;
    NSMutableArray *_accessibleElements;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *accessibleElements; // @synthesize accessibleElements=_accessibleElements;
@property(retain, nonatomic) WCLivePhotoButtonModel *livePhotoButtonModel; // @synthesize livePhotoButtonModel=_livePhotoButtonModel;
@property(retain, nonatomic) WCLivePhotoButton *livePhotoButton; // @synthesize livePhotoButton=_livePhotoButton;
@property(nonatomic) _Bool isICloudLoading; // @synthesize isICloudLoading=_isICloudLoading;
@property(nonatomic) _Bool isDragPickingInterupt; // @synthesize isDragPickingInterupt=_isDragPickingInterupt;
@property(nonatomic) _Bool isDragPicking; // @synthesize isDragPicking=_isDragPicking;
@property(nonatomic) _Bool isAutoPicking; // @synthesize isAutoPicking=_isAutoPicking;
@property(retain, nonatomic) UIImageView *mediaTypeIconView; // @synthesize mediaTypeIconView=_mediaTypeIconView;
@property(retain, nonatomic) MMAssetICloudLoadingView *icloudLoadingView; // @synthesize icloudLoadingView=_icloudLoadingView;
@property(retain, nonatomic) UILabel *indexLabel; // @synthesize indexLabel=_indexLabel;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) UIView *limitTipsView; // @synthesize limitTipsView=_limitTipsView;
@property(retain, nonatomic) MMUILabel *m_sizeLabel; // @synthesize m_sizeLabel=_m_sizeLabel;
@property(retain, nonatomic) MMUILabel *m_nameLabel; // @synthesize m_nameLabel=_m_nameLabel;
@property(retain, nonatomic) UIView *m_selectionBgView; // @synthesize m_selectionBgView=_m_selectionBgView;
@property(retain, nonatomic) UIImageView *m_assetImageView; // @synthesize m_assetImageView=_m_assetImageView;
@property(nonatomic) _Bool bDelayUpdateAssetInfo; // @synthesize bDelayUpdateAssetInfo=_bDelayUpdateAssetInfo;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(readonly, nonatomic) _Bool select; // @synthesize select=_select;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <LiteAppAssetPickerControlCenter> controlCenter; // @synthesize controlCenter=_controlCenter;
@property(nonatomic) __weak id <LiteAppAssetViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) LiteAppAssetInfo *assetInfo; // @synthesize assetInfo=_assetInfo;
- (_Bool)isSelectAssetExceedMaxCount;
- (void)configLivePhotoIconShadow;
- (void)livePhotoButtonClicked:(id)arg1;
- (void)initLivePhotoButton;
- (void)setupLivePhotoButton:(unsigned long long)arg1;
- (void)onAssetPickerControllerDidAddAssetId:(id)arg1;
- (void)fadeOutHighlightView;
- (void)onAssetPickerControllerChangeSelectInfo:(id)arg1 index:(long long)arg2;
- (id)timeStringBySeconds:(double)arg1;
- (_Bool)checkThumbImage;
- (void)updateBgMaskView;
- (void)tagAseetToPreview;
- (void)onSelectAssetFinish;
- (void)doEdit;
- (void)doSelect;
- (void)doSelectWithStateInfo:(id)arg1;
- (void)tryToSelectGifWithImage:(id)arg1 imageData:(id)arg2;
- (void)tryToSelectVideoWithAvAsset:(id)arg1 videoUrl:(id)arg2 assetError:(long long)arg3;
- (void)tryToSelectAsset;
- (void)removeSelected;
- (void)realToggleSelection;
- (void)toggleSelection;
- (void)onTapButton;
- (void)showLivePhotoGuideView;
- (void)toggleLivePhotoIconVisibilityWithAnimate:(_Bool)arg1;
- (void)showedSelectedMarkWithIndex:(long long)arg1 animated:(_Bool)arg2;
- (struct CGPoint)accessibilityActivationPoint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (_Bool)accessibilityPerformMagicTap;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (void)updateAssetViewEnabledWithSelectedCount:(unsigned long long)arg1;
- (_Bool)isCurrentAssetEnable;
- (void)updateEnabledState;
- (void)showAlertTips:(id)arg1 scene:(unsigned long long)arg2;
- (void)showAlertTips:(id)arg1;
- (void)showEditedLogoView;
- (void)showGifLogoView;
- (void)showVideoLogoViewWithTime:(id)arg1;
- (void)showTagBGView;
- (double)tagLogoLBMargin;
- (_Bool)shouldShowMultiSelect;
- (void)updateAssetInfo:(_Bool)arg1;
- (_Bool)showLivePhotoIcon;
- (void)updateAssetInfoWithAnimation;
- (void)updateAssetInfo;
- (void)prepareForReuse;
- (void)hiddeFileSizeLimitTips;
- (void)showOriginSizeLimitAlert;
- (_Bool)tryShowFileSizeLimitTips;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 useLightStyle:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

