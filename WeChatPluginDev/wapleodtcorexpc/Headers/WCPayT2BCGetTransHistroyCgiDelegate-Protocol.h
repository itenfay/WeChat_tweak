//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSString, QueryTransferListRes;

@protocol WCPayT2BCGetTransHistroyCgiDelegate <NSObject>
- (void)OnGetTransToBankHistoryError:(NSString *)arg1 errorCode:(long long)arg2;
- (void)OnGetTransToBankHistory:(NSMutableArray *)arg1 myHistory:(NSMutableArray *)arg2 response:(QueryTransferListRes *)arg3;
@end

