//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCRedEnvelopesHistoryListControlLogic
{
    int m_enWCRedEnvelopesHistoryType;
}

- (void)OnChangeToScene:(int)arg1;
- (void)OnQueryUserSendOrReceiveRedEnveloperListRequest:(id)arg1 Error:(id)arg2;
- (void)OnDidSelectOtherYear:(id)arg1;
- (void)OnDeleteReceivedRedEnvelopesHistoryItem:(id)arg1;
- (void)OnDeleteSendedRedEnvelopesHistoryItem:(id)arg1;
- (void)OnDidSelectReceivedRedEnvelopesHistoryItem:(id)arg1;
- (void)OnDidSelectSendedRedEnvelopesHistoryItem:(id)arg1;
- (void)OnLoadMoreRedEnvelopesList;
- (_Bool)HasMoreDetailList;
- (void)WCRedEnvelopesRedEnvelopesHistoryListViewControllerBack;
- (void)requestData;
- (void)startLogic;
- (id)initWithData:(id)arg1 Scene:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

