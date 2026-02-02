//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate <NSObject>
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerViewWillBePop;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBeginDragging;
- (void)OnCommitWCRedEnvelopes:(NSString *)arg1;
- (void)OnLoadMoreRedEnvelopesList;
- (_Bool)HasMoreDetailList;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (_Bool)WCRedEnvelopesRedEnvelopesDetailViewControllerBackBlock;

@optional
- (void)OnGotoLqtSave:(NSString *)arg1 operateId:(NSString *)arg2;
- (void)OnGoToLqtDetail:(NSString *)arg1;
- (void)OnGoToLqtDetail;
- (void)OnGoToBalanceDetail;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerContinueSendRedEnvelopes;
@end

