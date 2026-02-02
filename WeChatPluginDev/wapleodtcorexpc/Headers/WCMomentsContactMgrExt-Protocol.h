//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, WCMomentsContactMgr;

@protocol WCMomentsContactMgrExt <NSObject>

@optional
- (void)momentsContactMgr:(WCMomentsContactMgr *)arg1 didUpdateContact:(CContact *)arg2;
@end

