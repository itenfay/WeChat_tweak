//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, WCEditImageCropToolBarViewUIConfig;

@interface WCEditViewControllerUIConfig : NSObject
{
    _Bool _canAdjustImageEditZoomMinVal;
    _Bool _inputTextAlignCenter;
    _Bool _imageAspectFitInContentDisplayFrame;
    _Bool _editTextMenuCanChangeLine;
    _Bool _textWidgetForceFillScreenWidth;
    _Bool _useEmotionStyleColor;
    _Bool _hideTextEdit;
    _Bool _isBottomBarLaunchMiaoJianBtnEnabled;
    NSString *_finishButtonWording;
    double _bottomBarMidY;
    NSArray *_customVideoBottomButtonOrder;
    NSArray *_customImageBottomButtonOrder;
    WCEditImageCropToolBarViewUIConfig *_cropBarConfig;
    NSArray *_textStyleOrders;
    NSString *_firstShowCropTips;
    NSString *_timeCropBtnText;
    unsigned long long _launchMiaoJianAppScene;
    long long _launchMiaoJianAppLaunchType;
    NSString *_launchMiaoJianBtnReportViewId;
    unsigned long long _launchMiaoJianBtnReportLogId;
    unsigned long long _launchMiaoJianBtnReportPolicy;
    NSDictionary *_launchMiaoJianBtnReportParams;
    struct CGPoint _widgetInitialPosition;
    struct CGRect _contentDisplayFrame;
}

+ (struct CGRect)calculateEmotionEditContentDisplayFrameWithViewW:(double)arg1 height:(double)arg2 imageSize:(struct CGSize)arg3;
+ (id)configForEmotionEditWithContentDisplayFrame:(struct CGRect)arg1;
+ (id)configForEmotionEditWithContentDisplayFrame:(struct CGRect)arg1 isCropTimeOnly:(_Bool)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *launchMiaoJianBtnReportParams; // @synthesize launchMiaoJianBtnReportParams=_launchMiaoJianBtnReportParams;
@property(nonatomic) unsigned long long launchMiaoJianBtnReportPolicy; // @synthesize launchMiaoJianBtnReportPolicy=_launchMiaoJianBtnReportPolicy;
@property(nonatomic) unsigned long long launchMiaoJianBtnReportLogId; // @synthesize launchMiaoJianBtnReportLogId=_launchMiaoJianBtnReportLogId;
@property(retain, nonatomic) NSString *launchMiaoJianBtnReportViewId; // @synthesize launchMiaoJianBtnReportViewId=_launchMiaoJianBtnReportViewId;
@property(nonatomic) long long launchMiaoJianAppLaunchType; // @synthesize launchMiaoJianAppLaunchType=_launchMiaoJianAppLaunchType;
@property(nonatomic) unsigned long long launchMiaoJianAppScene; // @synthesize launchMiaoJianAppScene=_launchMiaoJianAppScene;
@property(nonatomic) _Bool isBottomBarLaunchMiaoJianBtnEnabled; // @synthesize isBottomBarLaunchMiaoJianBtnEnabled=_isBottomBarLaunchMiaoJianBtnEnabled;
@property(copy, nonatomic) NSString *timeCropBtnText; // @synthesize timeCropBtnText=_timeCropBtnText;
@property(copy, nonatomic) NSString *firstShowCropTips; // @synthesize firstShowCropTips=_firstShowCropTips;
@property(nonatomic) _Bool hideTextEdit; // @synthesize hideTextEdit=_hideTextEdit;
@property(nonatomic) _Bool useEmotionStyleColor; // @synthesize useEmotionStyleColor=_useEmotionStyleColor;
@property(nonatomic) _Bool textWidgetForceFillScreenWidth; // @synthesize textWidgetForceFillScreenWidth=_textWidgetForceFillScreenWidth;
@property(nonatomic) _Bool editTextMenuCanChangeLine; // @synthesize editTextMenuCanChangeLine=_editTextMenuCanChangeLine;
@property(retain, nonatomic) NSArray *textStyleOrders; // @synthesize textStyleOrders=_textStyleOrders;
@property(retain, nonatomic) WCEditImageCropToolBarViewUIConfig *cropBarConfig; // @synthesize cropBarConfig=_cropBarConfig;
@property(nonatomic) _Bool imageAspectFitInContentDisplayFrame; // @synthesize imageAspectFitInContentDisplayFrame=_imageAspectFitInContentDisplayFrame;
@property(retain, nonatomic) NSArray *customImageBottomButtonOrder; // @synthesize customImageBottomButtonOrder=_customImageBottomButtonOrder;
@property(retain, nonatomic) NSArray *customVideoBottomButtonOrder; // @synthesize customVideoBottomButtonOrder=_customVideoBottomButtonOrder;
@property(nonatomic) _Bool inputTextAlignCenter; // @synthesize inputTextAlignCenter=_inputTextAlignCenter;
@property(nonatomic) struct CGPoint widgetInitialPosition; // @synthesize widgetInitialPosition=_widgetInitialPosition;
@property(nonatomic) _Bool canAdjustImageEditZoomMinVal; // @synthesize canAdjustImageEditZoomMinVal=_canAdjustImageEditZoomMinVal;
@property(nonatomic) struct CGRect contentDisplayFrame; // @synthesize contentDisplayFrame=_contentDisplayFrame;
@property(nonatomic) double bottomBarMidY; // @synthesize bottomBarMidY=_bottomBarMidY;
@property(retain, nonatomic) NSString *finishButtonWording; // @synthesize finishButtonWording=_finishButtonWording;
- (id)description;
- (_Bool)widgetInitialPositionIsValid;
- (_Bool)forceSetWidgetDeleteBarToScreedBottom;
- (_Bool)contentDisplayFrameIsValid;
- (_Bool)bottomBarMidYIsValid;

@end

