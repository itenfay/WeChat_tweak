//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImageBrowseView, MMUILabel, NSString, UIImage, UINavigationController, UIView, WCImageTranslateLogic;
@protocol WCTranslateImgViewControllerDelegate;

@interface WCTranslateImgViewController
{
    UIImage *_translateImage;
    _Bool _popOrDismissWithFadeOutAnimation;
    _Bool _isChangeAlphaWithFullScreenItem;
    _Bool _isDisplayOriginImage;
    int _ocrTransScene;
    UIView *_transitionBackView;
    double _transitionDuration;
    WCImageTranslateLogic *_imgTranslateLogic;
    UINavigationController *_fromNavigationController;
    UIImage *_originImage;
    MMImageBrowseView *_browseView;
    UIView *_bottomBar;
    UIView *_brandContentView;
    MMUILabel *_brandLabel;
    NSString *_brandWording;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDisplayOriginImage; // @synthesize isDisplayOriginImage=_isDisplayOriginImage;
@property(copy, nonatomic) NSString *brandWording; // @synthesize brandWording=_brandWording;
@property(retain, nonatomic) MMUILabel *brandLabel; // @synthesize brandLabel=_brandLabel;
@property(retain, nonatomic) UIView *brandContentView; // @synthesize brandContentView=_brandContentView;
@property(retain, nonatomic) UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) MMImageBrowseView *browseView; // @synthesize browseView=_browseView;
@property(retain, nonatomic) UIImage *originImage; // @synthesize originImage=_originImage;
@property(nonatomic) _Bool isChangeAlphaWithFullScreenItem; // @synthesize isChangeAlphaWithFullScreenItem=_isChangeAlphaWithFullScreenItem;
@property(retain, nonatomic) UINavigationController *fromNavigationController; // @synthesize fromNavigationController=_fromNavigationController;
@property(retain, nonatomic) WCImageTranslateLogic *imgTranslateLogic; // @synthesize imgTranslateLogic=_imgTranslateLogic;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic) _Bool popOrDismissWithFadeOutAnimation; // @synthesize popOrDismissWithFadeOutAnimation=_popOrDismissWithFadeOutAnimation;
@property(retain, nonatomic) UIView *transitionBackView; // @synthesize transitionBackView=_transitionBackView;
@property(nonatomic) int ocrTransScene; // @synthesize ocrTransScene=_ocrTransScene;
- (void)onShowTranslateImage:(id)arg1;
- (id)getTranslateImgIdentifier:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)animateFadeOutTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)onSingleTap:(id)arg1;
- (void)onFullScreenItemDragToClose;
- (void)viewDidLayoutSubviews;
- (void)updateBottomBar;
- (void)updateTranslateOpHidden:(_Bool)arg1;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragBegin;
- (void)onScrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)onScrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)OnLongPress:(id)arg1;
- (void)onReTranslateImage;
- (void)handleViewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)onClickTransalteFeedbackButton;
- (void)onClickChangeTranslateLanguageButton;
- (void)onClickCancelTranslateButton;
- (void)onClickTranslateButton;
- (void)onClickSavedPhotosAlbumButton;
- (void)initBottomView;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidLoad;
- (id)imageAtPage:(unsigned int)arg1;
- (id)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (void)setTranslateImage:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <WCTranslateImgViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

