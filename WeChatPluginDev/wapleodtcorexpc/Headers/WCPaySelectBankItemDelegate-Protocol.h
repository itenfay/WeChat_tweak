//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayTransBankItem;

@protocol WCPaySelectBankItemDelegate <NSObject>
- (void)OnWCPaySelectBankItemDidChoseBank:(WCPayTransBankItem *)arg1;
@end

