//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, MMTableView, MMUIButton, MMUILabel, NSArray, NSString, UIView;
@protocol MMLiveLotteryGiftDistributeSheetViewDelegate;

@interface MMLiveLotteryGiftDistributeSheetView
{
    id <MMLiveLotteryGiftDistributeSheetViewDelegate> _operationDelegate;
    MMFinderLiveTaskId *_taskId;
    UIView *_contentView;
    MMUIButton *_closeButton;
    MMUILabel *_titleLabel;
    MMTableView *_optionTableView;
    NSArray *_lotteryGiftDistributeTypeOptions;
    long long _selectedDistributeType;
}

- (void).cxx_destruct;
@property(nonatomic) long long selectedDistributeType; // @synthesize selectedDistributeType=_selectedDistributeType;
@property(retain, nonatomic) NSArray *lotteryGiftDistributeTypeOptions; // @synthesize lotteryGiftDistributeTypeOptions=_lotteryGiftDistributeTypeOptions;
@property(retain, nonatomic) MMTableView *optionTableView; // @synthesize optionTableView=_optionTableView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMLiveLotteryGiftDistributeSheetViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (void)closeAction;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
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
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 selectedDistributeType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

