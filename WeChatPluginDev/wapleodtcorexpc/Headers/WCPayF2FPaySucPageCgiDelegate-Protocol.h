//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CgiF2FPaySucPageResp, NSString;

@protocol WCPayF2FPaySucPageCgiDelegate <NSObject>
- (void)OnGetF2FPaySucPageResonseError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)OnGetF2FPaySucPageResonseOK:(CgiF2FPaySucPageResp *)arg1;
@end

