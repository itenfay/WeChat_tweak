//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CAGradientLayer, ImageBrowseButton, NSString, OCRTransReport, UIImage, UIImageView, UIView, WCActionSheet;
@protocol WCImageTranslateDelegate;

@interface WCImageTranslateLogic : NSObject
{
    _Bool _preDetectWordFinish;
    _Bool _isDetectResultOK;
    _Bool _isImgTranslating;
    _Bool _isShowingTranslatedImage;
    unsigned int _detectResult;
    unsigned int _targetRate;
    int _source;
    int _translateActionSheetIndex;
    unsigned int _businessType;
    id <WCImageTranslateDelegate> _delegate;
    OCRTransReport *_transReport;
    id _currentItem;
    NSString *_tmpIdentifier;
    UIView *_weakViewToDisableInteractWhenTranslateAnimating;
    WCActionSheet *_weakActionSheet;
    UIView *_scanImageCoverView;
    UIImageView *_scanImageView;
    ImageBrowseButton *_scanCancelButton;
    UIImage *_translateImg;
    CAGradientLayer *_bottomMaskLayer;
    NSString *_nsBiz;
    id _processingItem;
    NSString *_currentFileId;
    NSString *_currentAesKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentAesKey; // @synthesize currentAesKey=_currentAesKey;
@property(retain, nonatomic) NSString *currentFileId; // @synthesize currentFileId=_currentFileId;
@property(retain, nonatomic) id processingItem; // @synthesize processingItem=_processingItem;
@property(retain, nonatomic) NSString *nsBiz; // @synthesize nsBiz=_nsBiz;
@property(retain, nonatomic) CAGradientLayer *bottomMaskLayer; // @synthesize bottomMaskLayer=_bottomMaskLayer;
@property(retain, nonatomic) UIImage *translateImg; // @synthesize translateImg=_translateImg;
@property(retain, nonatomic) ImageBrowseButton *scanCancelButton; // @synthesize scanCancelButton=_scanCancelButton;
@property(retain, nonatomic) UIImageView *scanImageView; // @synthesize scanImageView=_scanImageView;
@property(retain, nonatomic) UIView *scanImageCoverView; // @synthesize scanImageCoverView=_scanImageCoverView;
@property(nonatomic) unsigned int businessType; // @synthesize businessType=_businessType;
@property(nonatomic) _Bool isShowingTranslatedImage; // @synthesize isShowingTranslatedImage=_isShowingTranslatedImage;
@property(nonatomic) int translateActionSheetIndex; // @synthesize translateActionSheetIndex=_translateActionSheetIndex;
@property(nonatomic) __weak WCActionSheet *weakActionSheet; // @synthesize weakActionSheet=_weakActionSheet;
@property(nonatomic) __weak UIView *weakViewToDisableInteractWhenTranslateAnimating; // @synthesize weakViewToDisableInteractWhenTranslateAnimating=_weakViewToDisableInteractWhenTranslateAnimating;
@property(retain, nonatomic) NSString *tmpIdentifier; // @synthesize tmpIdentifier=_tmpIdentifier;
@property(retain, nonatomic) id currentItem; // @synthesize currentItem=_currentItem;
@property(readonly, nonatomic) int source; // @synthesize source=_source;
@property(readonly, nonatomic) OCRTransReport *transReport; // @synthesize transReport=_transReport;
@property(readonly, nonatomic) unsigned int targetRate; // @synthesize targetRate=_targetRate;
@property(readonly, nonatomic) _Bool isImgTranslating; // @synthesize isImgTranslating=_isImgTranslating;
@property(readonly, nonatomic) unsigned int detectResult; // @synthesize detectResult=_detectResult;
@property(readonly, nonatomic) _Bool isDetectResultOK; // @synthesize isDetectResultOK=_isDetectResultOK;
@property(readonly, nonatomic) _Bool preDetectWordFinish; // @synthesize preDetectWordFinish=_preDetectWordFinish;
@property(nonatomic) __weak id <WCImageTranslateDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showTranslateDetectDebugInfo:(id)arg1 mmvc:(id)arg2;
- (void)updateFileIdAndAesKey;
- (void)idkeyReportCgiTranslate;
- (void)idkeyReportTranslate;
- (void)reportSaveTranslateImage;
- (void)reportShowTranslateFastEntry;
- (void)reportShowTranslateEntry;
- (void)reportDoTranslate;
- (void)reportShowActionSheet;
- (void)removeImageDetectResultForItem:(id)arg1;
- (unsigned int)getDetectResultForItem:(id)arg1;
- (void)setImageDetectResult:(unsigned int)arg1 forKey:(id)arg2;
- (void)removeTranslateImageLangStateForItem:(id)arg1;
- (unsigned long long)getResultLangForItem:(id)arg1;
- (void)setTranslateImageLang:(unsigned long long)arg1 forKey:(id)arg2;
- (void)resetDetectStatus;
- (void)removeTranslateImage:(id)arg1;
- (void)clearTranslateImageWithIdentifier:(id)arg1;
- (_Bool)saveTranslateImage:(id)arg1 key:(id)arg2;
- (void)showVCForTranslateImg:(id)arg1 sourceVC:(id)arg2 originSnapShotView:(id)arg3 originRect:(struct CGRect)arg4 disableAutoResumeNavigationBar:(_Bool)arg5;
- (void)showVCForTranslateImg:(id)arg1 sourceVC:(id)arg2 originSnapShotView:(id)arg3 originRect:(struct CGRect)arg4;
- (void)forceCancelImageTranslate;
- (void)removeTranslateViews;
- (void)cancelTranslate;
- (void)onCancelTranslate:(id)arg1;
- (void)showAlertViewForNetDisconnected;
- (void)stopOCRScanningAnimation;
- (void)startOCRScanningAnimation:(id)arg1 selfView:(id)arg2;
- (void)prepareViewForTranslateOnScrollView:(id)arg1 andBackView:(id)arg2;
- (void)showTranslateImg:(id)arg1;
- (void)commonHandleFinishAnimateTranslateImage:(id)arg1;
- (void)commonHandleStartAnimateTranslateImage:(id)arg1;
- (_Bool)translateImage:(id)arg1 aboveScollView:(id)arg2 andBackView:(id)arg3;
- (void)commonHandlePreDetectWordSuccess:(id)arg1;
- (_Bool)asyncPreDetectWord:(id)arg1;
- (void)reportTranslateImgInfo;
- (id)getTranslateResultImage:(id)arg1;
- (id)getTranslateImagePath:(id)arg1;
- (id)getTranslateImgIdentifier:(id)arg1;
- (id)pathForTranslateImage:(id)arg1;
- (_Bool)hasDetectWordResultCache:(id)arg1;
- (_Bool)hasOCRResultFile:(id)arg1;
- (_Bool)hasTranslateResultFile:(id)arg1;
- (_Bool)shouldShowOCREntry:(id)arg1;
- (long long)getWordRateThresholdForImageTranslateEntry;
- (_Bool)isDisableAlwaysShowImageTranslateEntry;
- (_Bool)shouldShowTranslateEntry:(id)arg1 specifiedSource:(int)arg2;
- (_Bool)shouldShowTranslateEntry:(id)arg1;
- (_Bool)shouldDoPreDetectWord:(id)arg1;
- (void)dealloc;
- (void)updateSource:(int)arg1;
- (id)initWithSource:(int)arg1;
- (id)init;

@end

