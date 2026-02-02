//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat22WCFinderInterestFeedVC
{
    MISSING_TYPE *vm;
    MISSING_TYPE *appearance;
    MISSING_TYPE *$__lazy_storage_$_feedFlowView;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)popSelf;
- (void)viewDidLoad;
- (void)willAppear;
- (_Bool)navigationBarBlurEffect;
- (id)initWithCoder:(id)arg1;
- (id)init:(id)arg1;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (void)onFinderFeedFlowViewDelete:(id)arg1 indexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowViewStateChangedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (_Bool)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (id)finderFeedFlowViewAutoPlayParams:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (void)finderFeedFlowViewFooterClickNavToRec;

@end

