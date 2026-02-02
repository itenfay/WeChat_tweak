//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class DeleteRecordRes, NSString;

@protocol WCPayT2BCDeleteRecordCgiDelegate <NSObject>
- (void)OnWCPayT2BCDeleteRecordCgiResponseError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayT2BCDeleteRecordCgiResponseOK:(DeleteRecordRes *)arg1;
@end

