//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayTransferPhoneProtocaDetailView;
@protocol WCPayTransferPhoneProtocalHalfPageDelegate;

@interface WCPayTransferPhoneProtocalHalfPage
{
    id <WCPayTransferPhoneProtocalHalfPageDelegate> _m_delegate;
    WCPayTransferPhoneProtocaDetailView *_contentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayTransferPhoneProtocaDetailView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <WCPayTransferPhoneProtocalHalfPageDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (id)pageSheetContentView;
- (double)pageSheetContentHeight;
- (double)pageSheetContentWidth;
- (double)getTitleLabelHeight;
- (void)setContentViewTitle:(id)arg1;
- (void)setLinkContent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

