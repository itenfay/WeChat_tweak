//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveCommentSensitiveTableViewModel, MMFinderLiveSensitiveLogic, MMFinderLiveSensitiveTableView, MMFinderLiveTask, MMFinderLiveTaskId;

@interface MMFinderLiveSensitiveSettingViewController
{
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveSensitiveTableView *_tableView;
    MMFinderLiveCommentSensitiveTableViewModel *_tableViewModel;
    MMFinderLiveSensitiveLogic *_sensitiveLogic;
}

+ (void)presentSensitiveSettingVCFromVC:(id)arg1 taskId:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveSensitiveLogic *sensitiveLogic; // @synthesize sensitiveLogic=_sensitiveLogic;
@property(retain, nonatomic) MMFinderLiveCommentSensitiveTableViewModel *tableViewModel; // @synthesize tableViewModel=_tableViewModel;
@property(retain, nonatomic) MMFinderLiveSensitiveTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)reportForAddSensitiveItem:(id)arg1;
- (void)reportForDeleteSensitiveItem:(id)arg1;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
- (void)onSearchClicked:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (_Bool)checkNeedToastFailForAction:(unsigned long long)arg1;
- (void)requestSensitiveDatas;
- (id)createSensitiveTableVM:(id)arg1;
- (void)loadTableView;
- (void)loadNavigationItems;
- (void)viewDidLoad;
- (id)initWithLiveTaskId:(id)arg1;

@end

