//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class KSUPnPAction, KSUPnPEventRecord;

@protocol KSUPnPActionEvents <NSObject>

@optional
- (void)UPnPAction:(KSUPnPAction *)arg1 didCompleteTakingActionWithRecord:(KSUPnPEventRecord *)arg2;
@end

