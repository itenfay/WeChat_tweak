//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSString, UIImageView, WCPayBindCardInfo;
@protocol WCPaySpecifySelectePayCardListViewDelegate;

@interface WCPaySpecifySelectePayCardListView
{
    WCPayBindCardInfo *selectedPayCardInfo;
    NSArray *m_arrBindCard;
    NSMutableArray *m_arrButtonArray;
    UIImageView *m_backgroundView;
    id <WCPaySpecifySelectePayCardListViewDelegate> m_delegate;
    _Bool _openFieldArea;
}

- (void).cxx_destruct;
@property _Bool openFieldArea; // @synthesize openFieldArea=_openFieldArea;
- (_Bool)shouldPreventedAutorotateToInterfaceOrientation;
- (void)closeView;
- (void)OnSelectedNewCard:(id)arg1;
- (void)OnSelectedCard:(id)arg1;
- (void)onCancelButtonDone;
- (void)OnCompleteButtonDone:(id)arg1;
- (void)showAnimation;
- (id)initWithFrame:(struct CGRect)arg1 andPayCardList:(id)arg2 BanlanceInfo:(id)arg3 Description:(id)arg4 delegate:(id)arg5 LQTInfo:(id)arg6 isOpenFieldArea:(_Bool)arg7;
- (_Bool)useChangeCardViewV2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

