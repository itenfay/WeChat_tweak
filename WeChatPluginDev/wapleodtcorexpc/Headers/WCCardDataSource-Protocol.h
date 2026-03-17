//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCCardDataCardInfo, WCCardDataCardTPInfo;

@protocol WCCardDataSource <NSObject>
- (WCCardDataCardInfo *)getCardInfo;
- (WCCardDataCardTPInfo *)getCardTpInfo;
- (NSString *)getCardTpId;
- (NSString *)getCardId;
@end

