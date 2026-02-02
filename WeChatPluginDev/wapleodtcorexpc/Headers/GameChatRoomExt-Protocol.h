//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@protocol GameChatRoomExt

@optional
- (void)didAccountCancellationStateChange;
- (void)didExitChatRoom:(NSString *)arg1;
- (void)didJoinNewRoom:(NSString *)arg1;
@end

