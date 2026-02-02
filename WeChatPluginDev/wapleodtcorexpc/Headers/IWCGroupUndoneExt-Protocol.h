//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, ChatRoomToolMessageEventInfo, NSString;

@protocol IWCGroupUndoneExt <NSObject>

@optional
- (void)onWCGroupDeleteAll:(NSString *)arg1;
- (void)onWCGroupLatestRoomDescChanged:(long long)arg1 room:(NSString *)arg2;
- (void)onWCGroupSetMessageUndone:(CMessageWrap *)arg1 result:(_Bool)arg2;
- (void)onWCGroupCompleteUndoneItem:(ChatRoomToolMessageEventInfo *)arg1 result:(_Bool)arg2;
- (void)onWCGroupRevokeUndoneItem:(ChatRoomToolMessageEventInfo *)arg1 result:(_Bool)arg2;
- (void)onWCGroupDisposeUndoneItem:(ChatRoomToolMessageEventInfo *)arg1;
- (void)onWCGroupUpdateUndoneItem:(ChatRoomToolMessageEventInfo *)arg1;
@end

