//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray;

@protocol WATemplateMsgManagerExt <NSObject>

@optional
- (void)onTemplateMsgMgrInfoChanged;
- (void)banListStatusChanged:(NSMutableArray *)arg1;
@end

