//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderContact;

@protocol MMLiveRewardRecipientSelectionLogicDelegate <NSObject>

@optional
- (void)onSelectRewardRecipientContactFinished;
- (void)onSelectRewardRecipientContact:(WCFinderContact *)arg1;
@end

