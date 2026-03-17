//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSString;

@protocol WCPayT2BCGetBankListCgiDelegate <NSObject>
- (void)OnGetBankListWithError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)OnGetBankListOK:(NSMutableArray *)arg1 allBankList:(NSMutableArray *)arg2;
@end

