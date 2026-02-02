//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UIScrollView;
@protocol BrandProfileFuwuContainerViewDelegate;

@interface BrandProfileFuwuContainerView
{
    double _maxContainerHeight;
    UIScrollView *_fuwuScrollView;
    NSMutableArray *_fuwuViewList;
    id <BrandProfileFuwuContainerViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <BrandProfileFuwuContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *fuwuViewList; // @synthesize fuwuViewList=_fuwuViewList;
@property(retain, nonatomic) UIScrollView *fuwuScrollView; // @synthesize fuwuScrollView=_fuwuScrollView;
@property(nonatomic) double maxContainerHeight; // @synthesize maxContainerHeight=_maxContainerHeight;
- (void)onFuwuInfoClicked:(id)arg1;
- (void)onCancelBtnClicked;
- (void)reCreateRoundCornersLayer;
- (double)calcuateCancelButtonHeight;
- (void)layoutSubviews;
- (void)removeFuwuViewList;
- (void)setFuwuInfoList:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setupSubviews;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

