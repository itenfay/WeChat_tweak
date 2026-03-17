//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WAUpdatableMsgInfo;

@protocol IWAUpdatableMsgMgrExt <NSObject>

@optional
- (void)onUpdatableMsgEntryStateChanged:(NSString *)arg1;
- (void)onUpdatableMsgInfoUpdated:(NSString *)arg1 info:(WAUpdatableMsgInfo *)arg2;
@end

