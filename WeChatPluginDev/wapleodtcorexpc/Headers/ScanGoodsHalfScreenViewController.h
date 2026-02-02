//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, ScanGoodsJSHandler, UIView, WSTemplateLogicController, WSWebViewPluginScheduler;

@interface ScanGoodsHalfScreenViewController
{
    NSString *_reqKey;
    WSTemplateLogicController *m_logicController;
    ScanGoodsJSHandler *m_jsHandler;
    _Bool _hasAddObservers;
    _Bool _isBeDismissed;
    _Bool _bInNodifyViewTopChanging;
    unsigned int _notifyViewTopChangeCount;
    unsigned int _enterSessionID;
    unsigned int _tabSessionID;
    unsigned int _scanSessionID;
    _Bool _isPreload;
    unsigned int _resultOpenScene;
    MMUIButton *_closeButton;
    UIView *_customView;
    UIView *_customViewSuperView;
    unsigned long long _customViewIndex;
    UIView *_customMaskView;
    UIView *_customMaskSuperView;
    unsigned long long _customMaskIndex;
    WSWebViewPluginScheduler *_pluginScheduler;
    NSString *_detectSessionId;
    struct CGPoint _customViewPoint;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int resultOpenScene; // @synthesize resultOpenScene=_resultOpenScene;
@property(nonatomic) _Bool isPreload; // @synthesize isPreload=_isPreload;
@property(copy, nonatomic) NSString *detectSessionId; // @synthesize detectSessionId=_detectSessionId;
@property(retain, nonatomic) WSWebViewPluginScheduler *pluginScheduler; // @synthesize pluginScheduler=_pluginScheduler;
@property(nonatomic) unsigned long long customMaskIndex; // @synthesize customMaskIndex=_customMaskIndex;
@property(nonatomic) __weak UIView *customMaskSuperView; // @synthesize customMaskSuperView=_customMaskSuperView;
@property(nonatomic) __weak UIView *customMaskView; // @synthesize customMaskView=_customMaskView;
@property(nonatomic) unsigned long long customViewIndex; // @synthesize customViewIndex=_customViewIndex;
@property(nonatomic) struct CGPoint customViewPoint; // @synthesize customViewPoint=_customViewPoint;
@property(nonatomic) __weak UIView *customViewSuperView; // @synthesize customViewSuperView=_customViewSuperView;
@property(nonatomic) __weak UIView *customView; // @synthesize customView=_customView;
- (void)setCloseButton:(id)arg1;
- (unsigned long long)localJSBizType;
- (id)getLocalJSLogic;
- (id)getCurViewController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)needCloseOnOrientationChanged;
- (void)notifyContentViewTopChangeEventStartY:(double)arg1 endY:(double)arg2 timeOnce:(double)arg3 repeatCount:(unsigned int)arg4;
- (void)setupAnimateTransitionBlocks;
- (id)closeButton;
- (_Bool)hidesStatusBar;
- (void)initView;
- (void)initData;
- (id)pathForTestTemplate;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithReqKey:(id)arg1 enterSessionID:(unsigned int)arg2 tabSessionID:(unsigned int)arg3 scanSessionID:(unsigned int)arg4 detectSessionID:(id)arg5 openScene:(unsigned int)arg6 preload:(_Bool)arg7;
- (id)initWithReqKey:(id)arg1 enterSessionID:(unsigned int)arg2 tabSessionID:(unsigned int)arg3 scanSessionID:(unsigned int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

