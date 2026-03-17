//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@protocol ChatBackgroundExt

@optional
- (void)onChatBackgroundDownloadFinishedForUser:(NSString *)arg1 withCID:(NSString *)arg2;
- (void)onListStatusChange;
- (void)onChatBackgroundChanged:(NSString *)arg1;
@end

