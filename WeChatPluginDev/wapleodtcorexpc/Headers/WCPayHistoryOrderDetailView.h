//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UILabel, WCPayOrderDetail;
@protocol WCPayHistoryOrderDetailViewDelegate;

@interface WCPayHistoryOrderDetailView : UIView
{
    WCPayOrderDetail *m_oWCPayOrderDetail;
    id <WCPayHistoryOrderDetailViewDelegate> m_delegate;
    UILabel *serialNameLable;
    UILabel *oProductSerialLabel;
    int m_enWCPayHistoryOrderDetailViewScene;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayHistoryOrderDetailViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)RetrySendTransferMessage;
- (void)MenuControllerWillHide:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)onLongPressMenuViewCopy:(id)arg1;
- (id)initWithOrderDetail:(id)arg1 AppFromShowed:(_Bool)arg2;
- (id)initWithOrderDetail:(id)arg1 AppFromShowed:(_Bool)arg2 Scene:(int)arg3;
- (id)getExtentionView:(id)arg1;
- (id)getMoneyView:(id)arg1;
- (id)getDetailView:(id)arg1 ShowedAppFrom:(_Bool)arg2;
- (void)onShowAppProfile:(id)arg1;
- (void)onShowUserIntruction:(id)arg1;
- (id)GetFooterView:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

