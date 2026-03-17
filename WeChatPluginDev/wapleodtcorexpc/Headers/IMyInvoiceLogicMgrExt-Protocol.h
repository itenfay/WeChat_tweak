//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IMyInvoiceLogicMgrExt <NSObject>

@optional
- (void)OnDelInvoiceRet:(_Bool)arg1 andGroupId:(long long)arg2;
- (void)OnSaveInvoiceRet:(_Bool)arg1 andGroupId:(long long)arg2 withInvoiceUrl:(NSString *)arg3;
- (void)OnGetInvoiceRet:(_Bool)arg1 andResult:(NSString *)arg2 fromScene:(unsigned int)arg3;
@end

