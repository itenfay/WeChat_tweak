//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveContactSelectView, NSString;
@protocol MMLiveContactSelectViewControllerDelegate;

@interface MMLiveContactSelectViewController
{
    long long _currentSelectType;
    MMLiveContactSelectView *_selectView;
    id <MMLiveContactSelectViewControllerDelegate> _liveContactDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMLiveContactSelectViewControllerDelegate> liveContactDelegate; // @synthesize liveContactDelegate=_liveContactDelegate;
@property(retain, nonatomic) MMLiveContactSelectView *selectView; // @synthesize selectView=_selectView;
@property(nonatomic) long long currentSelectType; // @synthesize currentSelectType=_currentSelectType;
- (void)dismissLiveContactSelect;
- (_Bool)onContainerPanGestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)onSelectTopCell;
- (void)makeTopCell:(id)arg1;
- (id)getSafeSearchViewController;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onSelectContact:(id)arg1;
- (void)initPageSheet;
- (void)initView;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)pageSheetWillAppear;
- (double)pageSheetContentHeight;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

