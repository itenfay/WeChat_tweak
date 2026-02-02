//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView, WCCardCodeAnimator, WCCardDataCardInfo, WCCardDataCardTPInfo;
@protocol WCCardTicketCodeCellViewDelegate;

@interface WCCardTicketCodeCellView
{
    WCCardDataCardTPInfo *_cardTpInfo;
    WCCardDataCardInfo *_cardInfo;
    WCCardCodeAnimator *_codeAnimator;
    UIView *_codeContainView;
    id <WCCardTicketCodeCellViewDelegate> _delegate;
}

+ (double)heightForCardSource:(id)arg1 viewWidth:(double)arg2;
- (void).cxx_destruct;
- (void)codeAnimatorWillExitFullScreen:(id)arg1;
- (void)codeAnimatorWillBecomeFullScreen:(id)arg1;
- (void)fieldClicked:(id)arg1;
- (id)createCodeNumView;
- (id)getCodeViewWithCode:(id)arg1;
- (id)createSecondaryFieldView;
- (void)setupView;
- (id)initWithViewWidth:(double)arg1 cardSource:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

