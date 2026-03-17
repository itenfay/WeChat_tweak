//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MyInvoiceData, NSString;

@protocol MyInvoiceInfoViewControllerDelegate <NSObject>
- (void)OnJsapiAddInvoiceFail;
- (void)OnJsapiAddInvoiceCancel;
- (void)OnJsapiAddInvoiceSuccess:(NSString *)arg1;
- (void)OnEditInvoiceData:(MyInvoiceData *)arg1;
- (void)OnAddNewInvoiceData:(MyInvoiceData *)arg1 ofGroupId:(long long)arg2;
@end

