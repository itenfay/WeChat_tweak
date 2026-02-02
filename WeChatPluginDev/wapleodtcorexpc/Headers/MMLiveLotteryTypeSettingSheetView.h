//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, MMTableView, MMUIButton, MMUILabel, NSArray, NSString, PrizeData, UIView;
@protocol MMLiveLotteryTypeSettingSheetViewDelegate;

@interface MMLiveLotteryTypeSettingSheetView
{
    _Bool _joinTeamDisable;
    unsigned int _curJoinTeamMode;
    int _selectedOptionValue;
    id <MMLiveLotteryTypeSettingSheetViewDelegate> _operationDelegate;
    MMFinderLiveTaskId *_taskId;
    UIView *_contentView;
    MMUIButton *_closeButton;
    MMUILabel *_titleLabel;
    MMTableView *_optionTableView;
    NSArray *_lotteryTypeOptions;
    PrizeData *_prizeData;
    double _contentHeight;
    UIView *_sepelateLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *sepelateLine; // @synthesize sepelateLine=_sepelateLine;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(retain, nonatomic) PrizeData *prizeData; // @synthesize prizeData=_prizeData;
@property(nonatomic) int selectedOptionValue; // @synthesize selectedOptionValue=_selectedOptionValue;
@property(retain, nonatomic) NSArray *lotteryTypeOptions; // @synthesize lotteryTypeOptions=_lotteryTypeOptions;
@property(retain, nonatomic) MMTableView *optionTableView; // @synthesize optionTableView=_optionTableView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property _Bool joinTeamDisable; // @synthesize joinTeamDisable=_joinTeamDisable;
@property unsigned int curJoinTeamMode; // @synthesize curJoinTeamMode=_curJoinTeamMode;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMLiveLotteryTypeSettingSheetViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (void)closeAction;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)enableLiveLotteryTypeInfo:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (void)setExtraCellLineHidden:(id)arg1;
- (double)contentViewHeight;
- (id)liveTask;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)initUI;
- (void)initDefaultData;
- (id)getPrizeTypeWithSelectLotteryType:(int)arg1;
- (_Bool)canShowStartSelectLotteryType:(int)arg1;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 selectedOptionValue:(int)arg2 prizeData:(id)arg3 joinTeamDisable:(_Bool)arg4 curJoinTeamMode:(unsigned int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

