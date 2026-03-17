//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveTaskId, NSMutableArray;

@protocol MMLiveLikeDataMgrExt <NSObject>
- (void)onLikeContactListUpdate:(NSMutableArray *)arg1;
- (void)onDisplayLikeCountUpdate:(unsigned long long)arg1 withTaskId:(MMLiveTaskId *)arg2 forRole:(long long)arg3;
@end

