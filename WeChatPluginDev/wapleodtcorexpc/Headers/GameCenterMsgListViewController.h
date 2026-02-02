//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameCenterMsgListBaseTabViewController, GameCenterMsgListInteractTabViewController, GameCenterMsgListNoticeTabViewController, MMUIButton, NSIndexPath, NSString, UIView;

@interface GameCenterMsgListViewController
{
    unsigned int _sourceScene;
    int _msgShowType;
    NSString *_focusMsgId;
    MMUIButton *_currentTitleButton;
    UIView *_indicatorView;
    GameCenterMsgListInteractTabViewController *_interactTabVc;
    GameCenterMsgListNoticeTabViewController *_noticeTabVc;
    GameCenterMsgListBaseTabViewController *_currentTabVc;
    NSIndexPath *_quickJumpIndex;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *quickJumpIndex; // @synthesize quickJumpIndex=_quickJumpIndex;
@property(nonatomic) __weak GameCenterMsgListBaseTabViewController *currentTabVc; // @synthesize currentTabVc=_currentTabVc;
@property(retain, nonatomic) GameCenterMsgListNoticeTabViewController *noticeTabVc; // @synthesize noticeTabVc=_noticeTabVc;
@property(retain, nonatomic) GameCenterMsgListInteractTabViewController *interactTabVc; // @synthesize interactTabVc=_interactTabVc;
@property(retain, nonatomic) UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) __weak MMUIButton *currentTitleButton; // @synthesize currentTitleButton=_currentTitleButton;
@property(nonatomic) int msgShowType; // @synthesize msgShowType=_msgShowType;
@property(retain, nonatomic) NSString *focusMsgId; // @synthesize focusMsgId=_focusMsgId;
@property(nonatomic) unsigned int sourceScene; // @synthesize sourceScene=_sourceScene;
- (void)reportObj12909WithPosition:(unsigned int)arg1;
- (id)navigationBarBackgroundColor;
- (void)clickTitleRight:(id)arg1;
- (void)clickTitleLeft:(id)arg1;
- (void)setBadgeViewWithCount:(unsigned long long)arg1 atView:(id)arg2;
- (void)showManagerList:(id)arg1;
- (void)setupMsgManagerEntrance;
- (void)setupTitleButtons;
- (void)setupForUnreadMessage;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

