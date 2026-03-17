//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLivePkValueExtraItem, MMFinderLiveRewardAppMsgInfo;

@protocol MMFinderLiveRewardSendingLogicForReceivingDelegate <NSObject>
- (void)onAsyncExtraValueItemUpdated:(FinderLivePkValueExtraItem *)arg1 forRewardAppMsgInfo:(MMFinderLiveRewardAppMsgInfo *)arg2;
- (_Bool)onRecieveLocalSendSuccessRewardAppMsgInfo:(MMFinderLiveRewardAppMsgInfo *)arg1;
@end

