//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSMutableArray, OpenglRenderView, UIImageView, UILabel, UIView, VoipOpenglesContext;

@interface WCVideoOpenglRender
{
    _Bool _m_frontCamera;
    _Bool _hideBlurWhenRenderSizeChanged;
    _Bool _shouldFlipFrontBackView;
    _Bool _freezeRender;
    _Bool _checkScreenDataWhenHideBlur;
    unsigned int _m_frontFpsCount;
    unsigned int _m_backFpsCount;
    unsigned int _m_videoSizeW;
    unsigned int _m_videoMemberId;
    unsigned int _m_videoCodecType;
    VoipOpenglesContext *m_backOpenglesContext;
    VoipOpenglesContext *m_frontOpenglesContext;
    OpenglRenderView *m_backRenderView;
    OpenglRenderView *m_frontRenderView;
    UIView *m_renderView;
    MMTimer *_m_fpsTimer;
    UIView *_blurView;
    UILabel *_tipLabel;
    double _renderImageWidth;
    double _renderImageHeight;
    UIImageView *_loadingImagesView;
    NSMutableArray *_loadingImagesList;
    MMTimer *_loadingImagesTimer;
    unsigned long long _loadingImagesTimerCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long loadingImagesTimerCount; // @synthesize loadingImagesTimerCount=_loadingImagesTimerCount;
@property(retain, nonatomic) MMTimer *loadingImagesTimer; // @synthesize loadingImagesTimer=_loadingImagesTimer;
@property(retain, nonatomic) NSMutableArray *loadingImagesList; // @synthesize loadingImagesList=_loadingImagesList;
@property(retain, nonatomic) UIImageView *loadingImagesView; // @synthesize loadingImagesView=_loadingImagesView;
@property(nonatomic) _Bool checkScreenDataWhenHideBlur; // @synthesize checkScreenDataWhenHideBlur=_checkScreenDataWhenHideBlur;
@property(nonatomic) _Bool freezeRender; // @synthesize freezeRender=_freezeRender;
@property(nonatomic) _Bool shouldFlipFrontBackView; // @synthesize shouldFlipFrontBackView=_shouldFlipFrontBackView;
@property(nonatomic) double renderImageHeight; // @synthesize renderImageHeight=_renderImageHeight;
@property(nonatomic) double renderImageWidth; // @synthesize renderImageWidth=_renderImageWidth;
@property(nonatomic) _Bool hideBlurWhenRenderSizeChanged; // @synthesize hideBlurWhenRenderSizeChanged=_hideBlurWhenRenderSizeChanged;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) _Bool m_frontCamera; // @synthesize m_frontCamera=_m_frontCamera;
@property(nonatomic) unsigned int m_videoCodecType; // @synthesize m_videoCodecType=_m_videoCodecType;
@property(nonatomic) unsigned int m_videoMemberId; // @synthesize m_videoMemberId=_m_videoMemberId;
@property(nonatomic) unsigned int m_videoSizeW; // @synthesize m_videoSizeW=_m_videoSizeW;
@property(nonatomic) unsigned int m_backFpsCount; // @synthesize m_backFpsCount=_m_backFpsCount;
@property(nonatomic) unsigned int m_frontFpsCount; // @synthesize m_frontFpsCount=_m_frontFpsCount;
@property(retain, nonatomic) MMTimer *m_fpsTimer; // @synthesize m_fpsTimer=_m_fpsTimer;
@property(retain, nonatomic) UIView *m_renderView; // @synthesize m_renderView;
@property(retain, nonatomic) OpenglRenderView *m_frontRenderView; // @synthesize m_frontRenderView;
@property(retain, nonatomic) OpenglRenderView *m_backRenderView; // @synthesize m_backRenderView;
@property(retain, nonatomic) VoipOpenglesContext *m_frontOpenglesContext; // @synthesize m_frontOpenglesContext;
@property(retain, nonatomic) VoipOpenglesContext *m_backOpenglesContext; // @synthesize m_backOpenglesContext;
- (_Bool)isTouchInsideViewWithPoint:(struct CGPoint)arg1;
- (void)checkAndHideBlur;
- (void)hideLoading;
- (void)loadingTimerCheck;
- (void)checkAndShowLoading;
- (void)checkLoadingAndHideBlur;
- (void)hideBlur;
- (void)showBlurWithTip:(id)arg1;
- (void)showBlurUntilRenderSizeChangeForChangingToBigScreenDataAnimation;
- (void)showBlurUntilRenderSizeChangeForChangingToSmallSizeAnimation;
- (void)dealloc;
- (void)setupELGS;
- (void)whenBecomeActive;
- (id)getRenderView;
- (void)changeFrame:(struct CGRect)arg1;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3 FitView:(_Bool)arg4;
- (void)setBackDegrees:(float)arg1;
- (float)backDegrees;
- (float)defaultBackDegrees;
- (void)setFrontDegrees:(float)arg1;
- (float)frontDegrees;
- (float)defaultFrontDegrees;
- (void)updateViewWithFrontCamera;
- (void)cameraFrontMode:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

