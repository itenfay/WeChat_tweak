//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, UIColor, UIView;

@interface MMWebPageSheetConfig : NSObject
{
    _Bool _forcePortrait;
    _Bool _hideBgMask;
    _Bool _transferTouchEventInBgMask;
    _Bool _navTranslucent;
    _Bool _bShowNavRefresh;
    _Bool _showFromRightToLeftAtLandscape;
    _Bool _enableDragToClose;
    _Bool _recognizeHorizontalWhenDragToClose;
    _Bool _ignoreDragVelocityThreshold;
    _Bool _isPushFromWebPageSheet;
    _Bool _isInPreviewMode;
    unsigned int _dragDownButtonStyle;
    unsigned int _webA8keyScene;
    unsigned int _reportEnterScene;
    double _pageSheetHeightPercent;
    UIColor *_maskBackgroundColor;
    double _foldIconAngle;
    unsigned long long _leftBtnMode;
    CDUnknownBlockType _leftBtnActionBlock;
    CDUnknownBlockType _moreBtnActionBlock;
    UIColor *_navButtonTintColor;
    NSDictionary *_dictWebEnvInfo;
    UIView *_webNavigationLoadingView;
    UIColor *_webviewBackgroundColor;
    UIColor *_navigationBarColor;
    double _dragToCloseRatio;
    double _edgeSlideCloseThreshold;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInPreviewMode; // @synthesize isInPreviewMode=_isInPreviewMode;
@property(nonatomic) _Bool isPushFromWebPageSheet; // @synthesize isPushFromWebPageSheet=_isPushFromWebPageSheet;
@property(nonatomic) double edgeSlideCloseThreshold; // @synthesize edgeSlideCloseThreshold=_edgeSlideCloseThreshold;
@property(nonatomic) double dragToCloseRatio; // @synthesize dragToCloseRatio=_dragToCloseRatio;
@property(nonatomic) _Bool ignoreDragVelocityThreshold; // @synthesize ignoreDragVelocityThreshold=_ignoreDragVelocityThreshold;
@property(nonatomic) _Bool recognizeHorizontalWhenDragToClose; // @synthesize recognizeHorizontalWhenDragToClose=_recognizeHorizontalWhenDragToClose;
@property(nonatomic) _Bool enableDragToClose; // @synthesize enableDragToClose=_enableDragToClose;
@property(retain, nonatomic) UIColor *navigationBarColor; // @synthesize navigationBarColor=_navigationBarColor;
@property(retain, nonatomic) UIColor *webviewBackgroundColor; // @synthesize webviewBackgroundColor=_webviewBackgroundColor;
@property(retain, nonatomic) UIView *webNavigationLoadingView; // @synthesize webNavigationLoadingView=_webNavigationLoadingView;
@property(retain, nonatomic) NSDictionary *dictWebEnvInfo; // @synthesize dictWebEnvInfo=_dictWebEnvInfo;
@property(nonatomic) unsigned int reportEnterScene; // @synthesize reportEnterScene=_reportEnterScene;
@property(nonatomic) unsigned int webA8keyScene; // @synthesize webA8keyScene=_webA8keyScene;
@property(retain, nonatomic) UIColor *navButtonTintColor; // @synthesize navButtonTintColor=_navButtonTintColor;
@property(nonatomic) _Bool showFromRightToLeftAtLandscape; // @synthesize showFromRightToLeftAtLandscape=_showFromRightToLeftAtLandscape;
@property(nonatomic) unsigned int dragDownButtonStyle; // @synthesize dragDownButtonStyle=_dragDownButtonStyle;
@property(nonatomic) _Bool bShowNavRefresh; // @synthesize bShowNavRefresh=_bShowNavRefresh;
@property(copy, nonatomic) CDUnknownBlockType moreBtnActionBlock; // @synthesize moreBtnActionBlock=_moreBtnActionBlock;
@property(copy, nonatomic) CDUnknownBlockType leftBtnActionBlock; // @synthesize leftBtnActionBlock=_leftBtnActionBlock;
@property(nonatomic) unsigned long long leftBtnMode; // @synthesize leftBtnMode=_leftBtnMode;
@property(nonatomic) double foldIconAngle; // @synthesize foldIconAngle=_foldIconAngle;
@property(nonatomic) _Bool navTranslucent; // @synthesize navTranslucent=_navTranslucent;
@property(retain, nonatomic) UIColor *maskBackgroundColor; // @synthesize maskBackgroundColor=_maskBackgroundColor;
@property(nonatomic) _Bool transferTouchEventInBgMask; // @synthesize transferTouchEventInBgMask=_transferTouchEventInBgMask;
@property(nonatomic) _Bool hideBgMask; // @synthesize hideBgMask=_hideBgMask;
@property(nonatomic) _Bool forcePortrait; // @synthesize forcePortrait=_forcePortrait;
@property(nonatomic) double pageSheetHeightPercent; // @synthesize pageSheetHeightPercent=_pageSheetHeightPercent;
- (id)init;

@end

