//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ModifyExplainRes, NSString;

@protocol WCPayT2BCModifyRemarkCgiDelegate <NSObject>
- (void)OnWCPayT2BCModifyRemarkCgiResponseError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayT2BCModifyRemarkCgiResponseOK:(ModifyExplainRes *)arg1;
@end

