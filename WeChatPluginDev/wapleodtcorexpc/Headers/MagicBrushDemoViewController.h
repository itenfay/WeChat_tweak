//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MagicBrushDemoLogic, MagicBrushViewDelegateProxy, UIButton, UIView;

@interface MagicBrushDemoViewController
{
    UIView *_contentContainer;
    unsigned long long _incButtonTag;
    UIButton *_testSimpleCanvas;
    UIButton *_testListCanvas;
    UIButton *_testPublicService;
    UIButton *_testExternalView;
    MagicBrushDemoLogic *_logic;
    MagicBrushViewDelegateProxy *_viewDelegateProxy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MagicBrushViewDelegateProxy *viewDelegateProxy; // @synthesize viewDelegateProxy=_viewDelegateProxy;
@property(retain, nonatomic) MagicBrushDemoLogic *logic; // @synthesize logic=_logic;
@property(retain, nonatomic) UIButton *testExternalView; // @synthesize testExternalView=_testExternalView;
@property(retain, nonatomic) UIButton *testPublicService; // @synthesize testPublicService=_testPublicService;
@property(retain, nonatomic) UIButton *testListCanvas; // @synthesize testListCanvas=_testListCanvas;
@property(retain, nonatomic) UIButton *testSimpleCanvas; // @synthesize testSimpleCanvas=_testSimpleCanvas;
@property(nonatomic) unsigned long long incButtonTag; // @synthesize incButtonTag=_incButtonTag;
@property(retain, nonatomic) UIView *contentContainer; // @synthesize contentContainer=_contentContainer;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)createButton:(id)arg1 eventTouchUpInside:(CDUnknownBlockType)arg2;

@end

