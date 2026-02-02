//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCPayGPLaunchParamInvalidTipsView, WCPayGPMemberFillMoneyView;
@protocol WCPayGPMemberFillMoneyControllerDelegate;

@interface WCPayGPMemberFillMoneyController
{
    _Bool _bIsAmountInvalid;
    id <WCPayGPMemberFillMoneyControllerDelegate> _delegate;
    WCPayGPMemberFillMoneyView *_contentView;
    WCPayGPLaunchParamInvalidTipsView *_paramInvalidTipsView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bIsAmountInvalid; // @synthesize bIsAmountInvalid=_bIsAmountInvalid;
@property(retain, nonatomic) WCPayGPLaunchParamInvalidTipsView *paramInvalidTipsView; // @synthesize paramInvalidTipsView=_paramInvalidTipsView;
@property(retain, nonatomic) WCPayGPMemberFillMoneyView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <WCPayGPMemberFillMoneyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hideInvalipTipsView;
- (void)showInvalidTipsViewWithContent:(id)arg1;
- (void)handleContentViewSelectMemberChange:(id)arg1;
- (void)handleContentViewFinishSelectMember:(id)arg1 withUserPayAmountDict:(id)arg2;
- (void)handleContentViewCancelSelectMember;
- (void)finishSelectMember;
- (void)cancelSelectMember;
- (void)refreshMemberFillMoneyControllerWithSelectedContact:(id)arg1 withUserPayAmountDict:(id)arg2;
- (void)setupContentView;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupReportData;
- (void)viewDidLoad;

@end

