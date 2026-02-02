//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameCenterMsgListInteractTabViewController, MMUIButton, MMUIViewController, NSString, UIView;

@interface GameLifeChatViewControllerV3
{
    _Bool _isInTab;
    unsigned int _sourceScene;
    NSString *_focusMsgId;
    double _tabbarHeight;
    unsigned long long _selectTab;
    MMUIButton *_currentTitleButton;
    UIView *_indicatorView;
    GameCenterMsgListInteractTabViewController *_interactTabVc;
    MMUIViewController *_chatVc;
    MMUIViewController *_currentTabVc;
    MMUIButton *_tabButtonLeft;
    MMUIButton *_tabButtonRight;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *tabButtonRight; // @synthesize tabButtonRight=_tabButtonRight;
@property(retain, nonatomic) MMUIButton *tabButtonLeft; // @synthesize tabButtonLeft=_tabButtonLeft;
@property(nonatomic) __weak MMUIViewController *currentTabVc; // @synthesize currentTabVc=_currentTabVc;
@property(retain, nonatomic) MMUIViewController *chatVc; // @synthesize chatVc=_chatVc;
@property(retain, nonatomic) GameCenterMsgListInteractTabViewController *interactTabVc; // @synthesize interactTabVc=_interactTabVc;
@property(retain, nonatomic) UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) __weak MMUIButton *currentTitleButton; // @synthesize currentTitleButton=_currentTitleButton;
@property(nonatomic) unsigned long long selectTab; // @synthesize selectTab=_selectTab;
@property(nonatomic) double tabbarHeight; // @synthesize tabbarHeight=_tabbarHeight;
@property(nonatomic) _Bool isInTab; // @synthesize isInTab=_isInTab;
@property(retain, nonatomic) NSString *focusMsgId; // @synthesize focusMsgId=_focusMsgId;
@property(nonatomic) unsigned int sourceScene; // @synthesize sourceScene=_sourceScene;
- (id)navigationBarBackgroundColor;
- (double)visableHeight;
- (void)setCurrentTitleButton:(id)arg1 isInit:(_Bool)arg2;
- (void)clickTitleRight:(id)arg1;
- (void)clickTitleLeft:(id)arg1;
- (void)setBadgeViewWithCount:(unsigned long long)arg1 hasRedDot:(_Bool)arg2 atView:(id)arg3;
- (void)updateMessageRedPoint;
- (void)onGameCenterMessageRedPointInfoChange:(id)arg1;
- (void)setupTitleButtons;
- (void)chooseTab:(unsigned long long)arg1 isInit:(_Bool)arg2;
- (void)chooseTab:(unsigned long long)arg1;
- (void)determinDefaultSelectTab;
- (void)unregisterExtension;
- (void)dealloc;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

