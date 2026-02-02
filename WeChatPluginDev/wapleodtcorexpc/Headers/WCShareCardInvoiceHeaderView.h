//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIView;
@protocol WCShareCardInvoiceCardHeaderDelegate;

@interface WCShareCardInvoiceHeaderView
{
    id <WCShareCardInvoiceCardHeaderDelegate> _delegate;
    MMUIView *_cardContentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *cardContentView; // @synthesize cardContentView=_cardContentView;
@property(nonatomic) __weak id <WCShareCardInvoiceCardHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (double)getRealHeight;
- (void)onClickApplyBtn:(id)arg1;
- (void)addLeftAndRightCornerToView:(id)arg1;
- (void)initTicketCardContentView;
- (void)initView;
- (id)initWithViewWidth:(double)arg1 withCardSourceData:(id)arg2 cardStatus:(int)arg3 isNeedHideAcceptBtn:(_Bool)arg4 delegate:(id)arg5;

@end

