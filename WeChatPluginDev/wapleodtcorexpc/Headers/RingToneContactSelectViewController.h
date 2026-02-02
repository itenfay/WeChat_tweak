//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveContactSelectView, NSString;
@protocol RingToneContactSelectViewController;

@interface RingToneContactSelectViewController
{
    MMLiveContactSelectView *_selectView;
    id <RingToneContactSelectViewController> _liveContactDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <RingToneContactSelectViewController> liveContactDelegate; // @synthesize liveContactDelegate=_liveContactDelegate;
@property(retain, nonatomic) MMLiveContactSelectView *selectView; // @synthesize selectView=_selectView;
- (void)dismissLiveContactSelect;
- (_Bool)onContainerPanGestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)getSafeSearchViewController;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onSelectContact:(id)arg1;
- (void)initPageSheet;
- (void)initView;
- (double)pageSheetContentHeight;
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

