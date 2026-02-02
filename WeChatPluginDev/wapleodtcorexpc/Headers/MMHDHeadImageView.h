//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CBaseContact, ImageScrollView, MMHDHeadImageViewController, MMUIActivityIndicatorView, NSString, UIImageView, UIView;
@protocol HDHeadImageViewDelegate;

@interface MMHDHeadImageView
{
    UIImageView *m_backgroundView;
    MMUIActivityIndicatorView *m_activityIndicatorView;
    ImageScrollView *m_imgView;
    UIView *m_imgMask;
    _Bool m_bLoading;
    CBaseContact *m_contact;
    struct CGRect m_rcImgBegin;
    unsigned int m_uiDownloadEventID;
    id <HDHeadImageViewDelegate> m_delegate;
    _Bool m_fullScreen;
    double m_cornerRadius;
    _Bool m_needShowLoading;
    unsigned char headCategory;
    _Bool _m_bShowInViewController;
    _Bool _needUseScreenFrame;
    _Bool _bAlwayShowDefaultImage;
    long long _sourceScene;
    MMHDHeadImageViewController *_windowContainer;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMHDHeadImageViewController *windowContainer; // @synthesize windowContainer=_windowContainer;
@property(nonatomic) long long sourceScene; // @synthesize sourceScene=_sourceScene;
@property(nonatomic) _Bool bAlwayShowDefaultImage; // @synthesize bAlwayShowDefaultImage=_bAlwayShowDefaultImage;
@property(nonatomic) _Bool needUseScreenFrame; // @synthesize needUseScreenFrame=_needUseScreenFrame;
@property(nonatomic) _Bool m_bShowInViewController; // @synthesize m_bShowInViewController=_m_bShowInViewController;
@property(nonatomic) unsigned char headCategory; // @synthesize headCategory;
@property(nonatomic) _Bool m_needShowLoading; // @synthesize m_needShowLoading;
@property(nonatomic) __weak id <HDHeadImageViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CBaseContact *m_contact; // @synthesize m_contact;
@property(readonly, nonatomic) _Bool m_bLoading; // @synthesize m_bLoading;
@property(retain, nonatomic) MMUIActivityIndicatorView *m_activityIndicatorView; // @synthesize m_activityIndicatorView;
@property(retain, nonatomic) UIImageView *m_backgroundView; // @synthesize m_backgroundView;
- (void)onUserDidTakeScreenshot;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onMainWindowFrameChanged;
- (void)dealloc;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)saveImage;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)onFullScreenItemDragToClose;
- (void)onSingleTap:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)promptSaveToPhotoLibrary:(id)arg1;
- (void)show;
- (void)showInOriginPlace:(_Bool)arg1;
- (void)hide;
- (void)downloadHDImg;
- (void)updateHDHead;
- (void)updateHead;
- (id)getRealUserName:(id)arg1;
- (void)setImgBeginRect:(struct CGRect)arg1;
- (void)startShowImg:(_Bool)arg1;
- (void)reset;
- (void)stopLoading;
- (void)stopLoadingInternal;
- (void)startLoading;
@property(nonatomic) _Bool enableDragDownToClose;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithContact:(id)arg1;
- (void)BeforeInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

