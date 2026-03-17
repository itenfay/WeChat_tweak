//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSArray, NSString;

@protocol TingDiscoverTapesListener <NSObject, UnitRCBaseProtocol>
- (void)onListenItemCommentInfoUpdate:(NSArray *)arg1 commentInfo:(NSArray *)arg2 errMsg:(NSString *)arg3 taskId:(unsigned int)arg4;
- (void)onMusicTapesUpdate:(NSArray *)arg1 errMsg:(NSString *)arg2 taskId:(unsigned int)arg3;
@end

