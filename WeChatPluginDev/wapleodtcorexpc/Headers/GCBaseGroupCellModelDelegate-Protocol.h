//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GCBaseGroupCellModel, GameChatRoomConfig;

@protocol GCBaseGroupCellModelDelegate <NSObject>
- (void)onOpenChatRoomConfig:(GameChatRoomConfig *)arg1 cellModel:(GCBaseGroupCellModel *)arg2;
@end

