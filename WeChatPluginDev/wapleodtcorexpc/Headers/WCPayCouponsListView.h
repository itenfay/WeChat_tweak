//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UIButton, UIImageView, UILabel, WCPayControlData, WCPayFavorComposeInfo;
@protocol WCPayCouponsListViewDelegate;

@interface WCPayCouponsListView
{
    WCPayFavorComposeInfo *m_oOldSelectedComposeInfo;
    UIImageView *m_backgroundView;
    UIButton *comleteButton;
    UILabel *topTitleLabel;
    NSMutableArray *m_arrCouponsView;
    NSMutableArray *m_arrFilterTradeFavInfo;
    WCPayControlData *m_data;
    id <WCPayCouponsListViewDelegate> m_delegate;
}

- (void).cxx_destruct;
- (_Bool)shouldPreventedAutorotateToInterfaceOrientation;
- (void)closeView;
- (void)OnSelectedFavor:(id)arg1;
- (void)onCancelButtonDone;
- (void)OnCompleteButtonDone:(id)arg1;
- (void)showAnimation;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2 delegate:(id)arg3;
- (_Bool)useChangeCardViewV2;
- (_Bool)is_open_field_area;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

