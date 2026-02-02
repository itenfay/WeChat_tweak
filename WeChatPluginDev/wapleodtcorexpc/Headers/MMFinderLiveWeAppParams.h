//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIColor, UINavigationController, WAAppOpenCustomUIParameter, WAAppTaskReferrerInfo;

@interface MMFinderLiveWeAppParams : NSObject
{
    _Bool _silentOpen;
    _Bool _useSheetMode;
    _Bool _usePushAnimation;
    _Bool _forbidPushAnimation;
    _Bool _simulatedNativeUsePresentAnimation;
    _Bool _showNavigationBar;
    _Bool _showShareBtn;
    _Bool _showDraggingBar;
    _Bool _forceLightMode;
    _Bool _afterOrientationPortrait;
    int _liveWeAppOpenScene;
    unsigned int _width;
    unsigned int _height;
    NSString *_appId;
    NSString *_pagePath;
    unsigned long long _fromScene;
    NSString *_sceneNote;
    NSDictionary *_extraParamInfo;
    unsigned long long _debugType;
    WAAppTaskReferrerInfo *_refererData;
    WAAppOpenCustomUIParameter *_customUIParameter;
    UINavigationController *_navigationController;
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _launchBlock;
    CDUnknownBlockType _shareBlock;
    NSString *_headerTipsText;
    NSString *_transitCommonUxInfo;
    CDUnknownBlockType _m_headerTipsDidShowBlock;
    CDUnknownBlockType _m_headerTipsDidClickCloseBlock;
    UIColor *_bkMaskColor;
    CDUnknownBlockType _willBePresentedBlock;
    CDUnknownBlockType _willBeDismissedBlock;
    CDUnknownBlockType _didBeDismissedBlock;
    CDUnknownBlockType _frameChangeBlock;
    CDUnknownBlockType _reprocessAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType reprocessAction; // @synthesize reprocessAction=_reprocessAction;
@property(copy, nonatomic) CDUnknownBlockType frameChangeBlock; // @synthesize frameChangeBlock=_frameChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType didBeDismissedBlock; // @synthesize didBeDismissedBlock=_didBeDismissedBlock;
@property(copy, nonatomic) CDUnknownBlockType willBeDismissedBlock; // @synthesize willBeDismissedBlock=_willBeDismissedBlock;
@property(copy, nonatomic) CDUnknownBlockType willBePresentedBlock; // @synthesize willBePresentedBlock=_willBePresentedBlock;
@property(retain, nonatomic) UIColor *bkMaskColor; // @synthesize bkMaskColor=_bkMaskColor;
@property(copy, nonatomic) CDUnknownBlockType m_headerTipsDidClickCloseBlock; // @synthesize m_headerTipsDidClickCloseBlock=_m_headerTipsDidClickCloseBlock;
@property(copy, nonatomic) CDUnknownBlockType m_headerTipsDidShowBlock; // @synthesize m_headerTipsDidShowBlock=_m_headerTipsDidShowBlock;
@property(copy, nonatomic) NSString *transitCommonUxInfo; // @synthesize transitCommonUxInfo=_transitCommonUxInfo;
@property(copy, nonatomic) NSString *headerTipsText; // @synthesize headerTipsText=_headerTipsText;
@property(copy, nonatomic) CDUnknownBlockType shareBlock; // @synthesize shareBlock=_shareBlock;
@property(copy, nonatomic) CDUnknownBlockType launchBlock; // @synthesize launchBlock=_launchBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(nonatomic) _Bool afterOrientationPortrait; // @synthesize afterOrientationPortrait=_afterOrientationPortrait;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) WAAppOpenCustomUIParameter *customUIParameter; // @synthesize customUIParameter=_customUIParameter;
@property(retain, nonatomic) WAAppTaskReferrerInfo *refererData; // @synthesize refererData=_refererData;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
@property(nonatomic) unsigned long long debugType; // @synthesize debugType=_debugType;
@property(retain, nonatomic) NSDictionary *extraParamInfo; // @synthesize extraParamInfo=_extraParamInfo;
@property(nonatomic) _Bool forceLightMode; // @synthesize forceLightMode=_forceLightMode;
@property(nonatomic) _Bool showDraggingBar; // @synthesize showDraggingBar=_showDraggingBar;
@property(nonatomic) _Bool showShareBtn; // @synthesize showShareBtn=_showShareBtn;
@property(nonatomic) _Bool showNavigationBar; // @synthesize showNavigationBar=_showNavigationBar;
@property(nonatomic) _Bool simulatedNativeUsePresentAnimation; // @synthesize simulatedNativeUsePresentAnimation=_simulatedNativeUsePresentAnimation;
@property(nonatomic) _Bool forbidPushAnimation; // @synthesize forbidPushAnimation=_forbidPushAnimation;
@property(nonatomic) _Bool usePushAnimation; // @synthesize usePushAnimation=_usePushAnimation;
@property(nonatomic) _Bool useSheetMode; // @synthesize useSheetMode=_useSheetMode;
@property(nonatomic) _Bool silentOpen; // @synthesize silentOpen=_silentOpen;
@property(nonatomic) int liveWeAppOpenScene; // @synthesize liveWeAppOpenScene=_liveWeAppOpenScene;
@property(retain, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void)addReprocessAction:(CDUnknownBlockType)arg1;
- (id)initWithAppId:(id)arg1 pagePath:(id)arg2 fromScene:(unsigned long long)arg3 sceneNote:(id)arg4;
- (id)description;

@end

