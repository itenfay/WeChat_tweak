//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCPayLQTTransSuccessViewControllerDelegate;

@interface WCPayLQTTransSuccessViewController
{
    _Bool _hasResportGuideCell;
    id <WCPayLQTTransSuccessViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasResportGuideCell; // @synthesize hasResportGuideCell=_hasResportGuideCell;
@property(nonatomic) __weak id <WCPayLQTTransSuccessViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportGuideCellExposureInfo;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)confirmBtnClick;
- (void)tapOnPlanCell;
- (_Bool)hasUpgradeLink;
- (_Bool)hasLQTCell;
- (void)setupContentView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

