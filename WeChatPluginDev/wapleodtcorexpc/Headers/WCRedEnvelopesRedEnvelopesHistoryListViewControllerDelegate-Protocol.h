//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCRedEnvelopesReceivedRedEnvelopesInfo, WCRedEnvelopesSendedRedEnvelopesInfo;

@protocol WCRedEnvelopesRedEnvelopesHistoryListViewControllerDelegate <NSObject>
- (void)OnChangeToScene:(int)arg1;
- (void)OnDeleteReceivedRedEnvelopesHistoryItem:(WCRedEnvelopesReceivedRedEnvelopesInfo *)arg1;
- (void)OnDeleteSendedRedEnvelopesHistoryItem:(WCRedEnvelopesSendedRedEnvelopesInfo *)arg1;
- (void)OnDidSelectOtherYear:(NSString *)arg1;
- (void)OnDidSelectReceivedRedEnvelopesHistoryItem:(WCRedEnvelopesReceivedRedEnvelopesInfo *)arg1;
- (void)OnDidSelectSendedRedEnvelopesHistoryItem:(WCRedEnvelopesSendedRedEnvelopesInfo *)arg1;
- (void)OnLoadMoreRedEnvelopesList;
- (_Bool)HasMoreDetailList;
- (void)WCRedEnvelopesRedEnvelopesHistoryListViewControllerBack;
@end

