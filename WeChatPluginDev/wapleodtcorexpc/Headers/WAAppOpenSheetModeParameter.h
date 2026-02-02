//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIColor;

@interface WAAppOpenSheetModeParameter
{
    _Bool _m_bEmbedModeAllowFullScreen;
    _Bool _m_bShouldForbidExitWhenTapBackground;
    _Bool _m_bShouldPassEventToViewUnderneathWhenTapBackground;
    _Bool _m_bShouldBlurBackground;
    _Bool _m_bEnableExpandToStatusBarTop;
    _Bool _m_bEnableExpandGesture;
    _Bool _m_bForbidExpandDragUpGesture;
    _Bool _m_bForbidPageContentExpandDragUpGesture;
    _Bool _m_bForbidExpandTapGesture;
    _Bool _m_bEnableRecoverGestureAfterExpand;
    _Bool _m_bEnableExpandGestureOnEveryPage;
    _Bool _m_bShowDraggingBar;
    _Bool _m_bForceShowCapsuleMenuWhileShowingDraggingBar;
    unsigned long long _m_uDismissTypeWhenTapBackground;
    double _m_fHeight;
    double _m_fExpandedHeight;
    unsigned long long _m_uRectCorner;
    double _m_fCornerRadius;
    UIColor *_m_oSheetBackgroundColor;
    NSString *_m_nsHeaderTipsText;
    CDUnknownBlockType _m_headerTipsDidShowBlock;
    CDUnknownBlockType _m_headerTipsDidClickCloseBlock;
    struct CGSize _m_fSize;
    struct CGSize _m_fSizeInLandscape;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType m_headerTipsDidClickCloseBlock; // @synthesize m_headerTipsDidClickCloseBlock=_m_headerTipsDidClickCloseBlock;
@property(copy, nonatomic) CDUnknownBlockType m_headerTipsDidShowBlock; // @synthesize m_headerTipsDidShowBlock=_m_headerTipsDidShowBlock;
@property(copy, nonatomic) NSString *m_nsHeaderTipsText; // @synthesize m_nsHeaderTipsText=_m_nsHeaderTipsText;
@property(nonatomic) _Bool m_bForceShowCapsuleMenuWhileShowingDraggingBar; // @synthesize m_bForceShowCapsuleMenuWhileShowingDraggingBar=_m_bForceShowCapsuleMenuWhileShowingDraggingBar;
@property(nonatomic) _Bool m_bShowDraggingBar; // @synthesize m_bShowDraggingBar=_m_bShowDraggingBar;
@property(retain, nonatomic) UIColor *m_oSheetBackgroundColor; // @synthesize m_oSheetBackgroundColor=_m_oSheetBackgroundColor;
@property(nonatomic) _Bool m_bEnableExpandGestureOnEveryPage; // @synthesize m_bEnableExpandGestureOnEveryPage=_m_bEnableExpandGestureOnEveryPage;
@property(nonatomic) _Bool m_bEnableRecoverGestureAfterExpand; // @synthesize m_bEnableRecoverGestureAfterExpand=_m_bEnableRecoverGestureAfterExpand;
@property(nonatomic) _Bool m_bForbidExpandTapGesture; // @synthesize m_bForbidExpandTapGesture=_m_bForbidExpandTapGesture;
@property(nonatomic) _Bool m_bForbidPageContentExpandDragUpGesture; // @synthesize m_bForbidPageContentExpandDragUpGesture=_m_bForbidPageContentExpandDragUpGesture;
@property(nonatomic) _Bool m_bForbidExpandDragUpGesture; // @synthesize m_bForbidExpandDragUpGesture=_m_bForbidExpandDragUpGesture;
@property(nonatomic) _Bool m_bEnableExpandGesture; // @synthesize m_bEnableExpandGesture=_m_bEnableExpandGesture;
@property(nonatomic) double m_fCornerRadius; // @synthesize m_fCornerRadius=_m_fCornerRadius;
@property(nonatomic) unsigned long long m_uRectCorner; // @synthesize m_uRectCorner=_m_uRectCorner;
@property(nonatomic) struct CGSize m_fSizeInLandscape; // @synthesize m_fSizeInLandscape=_m_fSizeInLandscape;
@property(nonatomic) _Bool m_bEnableExpandToStatusBarTop; // @synthesize m_bEnableExpandToStatusBarTop=_m_bEnableExpandToStatusBarTop;
@property(nonatomic) double m_fExpandedHeight; // @synthesize m_fExpandedHeight=_m_fExpandedHeight;
@property(nonatomic) struct CGSize m_fSize; // @synthesize m_fSize=_m_fSize;
@property(nonatomic) double m_fHeight; // @synthesize m_fHeight=_m_fHeight;
@property(nonatomic) _Bool m_bShouldBlurBackground; // @synthesize m_bShouldBlurBackground=_m_bShouldBlurBackground;
@property(nonatomic) _Bool m_bShouldPassEventToViewUnderneathWhenTapBackground; // @synthesize m_bShouldPassEventToViewUnderneathWhenTapBackground=_m_bShouldPassEventToViewUnderneathWhenTapBackground;
@property(nonatomic) unsigned long long m_uDismissTypeWhenTapBackground; // @synthesize m_uDismissTypeWhenTapBackground=_m_uDismissTypeWhenTapBackground;
@property(nonatomic) _Bool m_bShouldForbidExitWhenTapBackground; // @synthesize m_bShouldForbidExitWhenTapBackground=_m_bShouldForbidExitWhenTapBackground;
@property(nonatomic) _Bool m_bEmbedModeAllowFullScreen; // @synthesize m_bEmbedModeAllowFullScreen=_m_bEmbedModeAllowFullScreen;

@end

