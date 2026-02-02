//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@protocol MessageDBExt

@optional
- (void)onDeleteAllMsgs:(NSString *)arg1;
- (void)onDeleteBrokenMsg:(unsigned int)arg1 chatName:(NSString *)arg2;
- (void)onDeleteBadRoomMsg:(long long)arg1 createTime:(unsigned int)arg2 chatName:(NSString *)arg3;
@end

