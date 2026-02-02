//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BaseMsgContentLogicController, CContact, ChatRoomHistoryShareStat, MMUIButton, MMUILabel, NSArray, UIImageView, UIView;

@interface WCSharedMsgSelectViewController
{
    UIView *_headerView;
    UIImageView *_downArrow;
    MMUILabel *_tipsLabel;
    MMUIButton *_resetButton;
    MMUILabel *_reachMaxLabel;
    UIView *_divLine;
    MMUILabel *_debugLabel;
    unsigned long long _multiSelectMsgTotalSize;
    unsigned long long _multiSelectMsgTextTotalSize;
    _Bool _bShowGuideTips;
    unsigned int _maxSelectCount;
    CDUnknownBlockType _resultBlock;
    unsigned long long _maxSelectBytes;
    ChatRoomHistoryShareStat *_stat;
    CContact *_contact;
    NSArray *_initialSelectedMsgs;
    BaseMsgContentLogicController *_logicController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BaseMsgContentLogicController *logicController; // @synthesize logicController=_logicController;
@property(retain, nonatomic) NSArray *initialSelectedMsgs; // @synthesize initialSelectedMsgs=_initialSelectedMsgs;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool bShowGuideTips; // @synthesize bShowGuideTips=_bShowGuideTips;
@property(readonly, nonatomic) ChatRoomHistoryShareStat *stat; // @synthesize stat=_stat;
@property(nonatomic) unsigned long long maxSelectBytes; // @synthesize maxSelectBytes=_maxSelectBytes;
@property(nonatomic) unsigned int maxSelectCount; // @synthesize maxSelectCount=_maxSelectCount;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
- (void)onResetSelect:(id)arg1;
- (void)onDone:(id)arg1;
- (id)getDebugInfo;
- (id)getTipsInfo;
- (void)viewDidLayoutSubviews;
- (void)registerMultiSelectCallBack:(id)arg1;
- (void)buildMsgPreviewView;
- (void)updateInset;
- (void)layoutHeaderView;
- (void)buildHeaderView;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)showScrollTips;
- (id)initWithContact:(id)arg1 selectedMsgs:(id)arg2 stat:(id)arg3;

@end

