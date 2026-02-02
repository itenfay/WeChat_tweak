//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, SlideTextJSHandler, UIButton, UILabel, UIScreenEdgePanGestureRecognizer, WCFinderGuideLinkBubbleView, WCFinderSlideTextForRemarkVCParams, WSTemplateLogicController, WSWebViewPluginScheduler;

@interface WCFinderSlideTextForRemarkViewController
{
    WSWebViewPluginScheduler *pluginScheduler;
    CDUnknownBlockType _doneBlock;
    NSString *_content;
    UIButton *_doneButton;
    UIButton *_cancelButton;
    UILabel *_topLabel;
    WCFinderGuideLinkBubbleView *_guideBubbleView;
    WSTemplateLogicController *_logicController;
    SlideTextJSHandler *_jsHandler;
    NSString *_selectedText;
    long long _maxCharLength;
    NSString *_guideIconUrl;
    NSString *_guidePreTips;
    NSString *_finishWording;
    NSString *_topTitle;
    UIScreenEdgePanGestureRecognizer *_popGesture;
    double _guideBubbleMaxWidth;
    WCFinderSlideTextForRemarkVCParams *_params;
    struct _NSRange _selectedRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderSlideTextForRemarkVCParams *params; // @synthesize params=_params;
@property(nonatomic) double guideBubbleMaxWidth; // @synthesize guideBubbleMaxWidth=_guideBubbleMaxWidth;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *popGesture; // @synthesize popGesture=_popGesture;
@property(copy, nonatomic) NSString *topTitle; // @synthesize topTitle=_topTitle;
@property(nonatomic) struct _NSRange selectedRange; // @synthesize selectedRange=_selectedRange;
@property(copy, nonatomic) NSString *finishWording; // @synthesize finishWording=_finishWording;
@property(copy, nonatomic) NSString *guidePreTips; // @synthesize guidePreTips=_guidePreTips;
@property(copy, nonatomic) NSString *guideIconUrl; // @synthesize guideIconUrl=_guideIconUrl;
@property(nonatomic) long long maxCharLength; // @synthesize maxCharLength=_maxCharLength;
@property(copy, nonatomic) NSString *selectedText; // @synthesize selectedText=_selectedText;
@property(retain, nonatomic) SlideTextJSHandler *jsHandler; // @synthesize jsHandler=_jsHandler;
@property(retain, nonatomic) WSTemplateLogicController *logicController; // @synthesize logicController=_logicController;
@property(retain, nonatomic) WCFinderGuideLinkBubbleView *guideBubbleView; // @synthesize guideBubbleView=_guideBubbleView;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) CDUnknownBlockType doneBlock; // @synthesize doneBlock=_doneBlock;
@property(retain, nonatomic) WSWebViewPluginScheduler *pluginScheduler; // @synthesize pluginScheduler;
- (unsigned long long)localJSBizType;
- (id)getLocalJSLogic;
- (id)getCurViewController;
- (void)updateGuideBubbleIconUrl:(id)arg1 content:(id)arg2;
- (void)onSelectedTextChanged:(id)arg1;
- (_Bool)DismissMyselfAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onDone;
- (void)viewDidLayoutSubviews;
- (void)initContentView;
- (void)initTopView;
- (void)handlePopGesture:(id)arg1;
- (void)setupPopGes;
- (void)viewDidLoad;
- (void)initLogicController;
- (void)initPlugin;
- (_Bool)useCustomNavibar;
- (_Bool)useTransparentNavibar;
- (double)getMaxHalfScreenHeight;
- (void)_baseInit;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

