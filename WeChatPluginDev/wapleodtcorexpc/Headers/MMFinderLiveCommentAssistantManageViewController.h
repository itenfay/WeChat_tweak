//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveCommentAssitantManageView, MMFinderLiveCommentAssitantManageViewModel, MMFinderLiveTaskId, WCLiveBlurButton;

@interface MMFinderLiveCommentAssistantManageViewController
{
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveCommentAssitantManageView *_manageView;
    MMFinderLiveCommentAssitantManageViewModel *_manageViewModel;
    WCLiveBlurButton *_closeButton;
}

+ (void)presentCommentAssitantManageVCFromVC:(id)arg1 taskId:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCLiveBlurButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMFinderLiveCommentAssitantManageViewModel *manageViewModel; // @synthesize manageViewModel=_manageViewModel;
@property(retain, nonatomic) MMFinderLiveCommentAssitantManageView *manageView; // @synthesize manageView=_manageView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)onCloseButtonClicked;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (id)navigationBarBackgroundColor;
- (_Bool)navigationBarBlurEffect;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

