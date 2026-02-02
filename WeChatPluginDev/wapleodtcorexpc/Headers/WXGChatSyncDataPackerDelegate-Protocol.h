//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WXGChatSyncDataPackerDelegate <NSObject>
- (void)onChatSyncDataPackFinishWithFilePath:(NSString *)arg1 withMsgCount:(unsigned long long)arg2;
@end

