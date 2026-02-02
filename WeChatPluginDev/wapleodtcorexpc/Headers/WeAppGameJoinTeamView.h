//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, MMUIButton, MMUILabel, NSDictionary, NSString, UIView, WeAppGameJoinTeamConditionView, WeAppGameJoinTeamDescView, WeAppGameJoinTeamHistoryView, WeAppGameJoinTeamSectionView;
@protocol WeAppGameJoinTeamViewDelegate;

@interface WeAppGameJoinTeamView
{
    _Bool _canJoin;
    int _actionMode;
    int _sourceType;
    id <WeAppGameJoinTeamViewDelegate> _operationDelegate;
    MMFinderLiveTaskId *_taskId;
    CDUnknownBlockType _completeCloseBlock;
    UIView *_contentView;
    MMUILabel *_titleLabel;
    MMUIButton *_closeButton;
    MMUIButton *_startButton;
    NSDictionary *_gameInfo;
    NSString *_cannotJoinReason;
    MMUILabel *_noticeLabel;
    WeAppGameJoinTeamDescView *_descView;
    WeAppGameJoinTeamHistoryView *_historyView;
    WeAppGameJoinTeamSectionView *_sectionView;
    WeAppGameJoinTeamConditionView *_conditionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WeAppGameJoinTeamConditionView *conditionView; // @synthesize conditionView=_conditionView;
@property(retain, nonatomic) WeAppGameJoinTeamSectionView *sectionView; // @synthesize sectionView=_sectionView;
@property(retain, nonatomic) WeAppGameJoinTeamHistoryView *historyView; // @synthesize historyView=_historyView;
@property(retain, nonatomic) WeAppGameJoinTeamDescView *descView; // @synthesize descView=_descView;
@property(retain, nonatomic) MMUILabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
@property(retain, nonatomic) NSString *cannotJoinReason; // @synthesize cannotJoinReason=_cannotJoinReason;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) _Bool canJoin; // @synthesize canJoin=_canJoin;
@property(nonatomic) int actionMode; // @synthesize actionMode=_actionMode;
@property(retain, nonatomic) NSDictionary *gameInfo; // @synthesize gameInfo=_gameInfo;
@property(retain, nonatomic) MMUIButton *startButton; // @synthesize startButton=_startButton;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType completeCloseBlock; // @synthesize completeCloseBlock=_completeCloseBlock;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <WeAppGameJoinTeamViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (void)onWeAppGameJoinTeamConditionChecked;
- (void)onWeAppGameJoinTeamConditionBack;
- (id)getActionDesc:(int)arg1;
- (void)notifyReportForAction:(unsigned long long)arg1;
- (void)notifyResult;
- (void)fetchGameSetTeamupConfigRequest;
- (void)onClickStartButton;
- (void)onClickCloseButton;
- (void)onClickShowConditionButton;
- (void)onClickShowHistoryButton;
- (double)contentViewHeight;
- (void)layoutUI;
- (void)initUI:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 gameInfo:(id)arg2 complete:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

