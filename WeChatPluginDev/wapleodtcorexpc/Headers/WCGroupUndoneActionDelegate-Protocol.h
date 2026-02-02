//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ChatRoomToolMessageEventInfo;

@protocol WCGroupUndoneActionDelegate <NSObject>
- (void)onRevokeGroupUndoneItem:(ChatRoomToolMessageEventInfo *)arg1;
- (void)onCompleteGroupUndoneItem:(ChatRoomToolMessageEventInfo *)arg1 isLastItem:(_Bool)arg2;
- (void)onCloseGroupUndoneItem:(ChatRoomToolMessageEventInfo *)arg1 isLastItem:(_Bool)arg2;
- (void)onClickGroupUndoneItem:(ChatRoomToolMessageEventInfo *)arg1 isLastItem:(_Bool)arg2;
@end

