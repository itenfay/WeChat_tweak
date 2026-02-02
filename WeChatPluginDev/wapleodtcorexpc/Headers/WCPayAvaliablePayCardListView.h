//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSString, UIView, WCPayBindCardInfo, WCPayControlData;
@protocol WCPayAvaliablePayCardListViewDelegate;

@interface WCPayAvaliablePayCardListView
{
    WCPayBindCardInfo *selectedPayCardInfo;
    NSArray *m_arrBindCard;
    NSMutableArray *m_arrButtonArray;
    UIView *m_backgroundView;
    WCPayControlData *m_data;
    id <WCPayAvaliablePayCardListViewDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)webViewReturn:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)didMoveToWindow;
- (_Bool)shouldPreventedAutorotateToInterfaceOrientation;
- (void)closeView;
- (void)OnSelectedNewCard:(id)arg1;
- (void)OnSelectedCard:(id)arg1;
- (void)onCancelButtonDone;
- (_Bool)accessibilityPerformEscape;
- (void)OnCompleteButtonDone:(id)arg1;
- (void)showAnimation;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

