//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AppointBankRes, NSString;

@protocol WCPayT2BCAppointBankCgiDelegate <NSObject>
- (void)OnGetApponitBankResonseError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)OnGetApponitBankResonseOK:(AppointBankRes *)arg1;
@end

