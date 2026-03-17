//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol EmoticonDesignerListDataRecieverBase <NSObject>

@optional
- (void)onFetchEmoticonDataFailedFor:(NSString *)arg1 dataType:(int)arg2;
- (void)onFetchEmoticonFinishedFor:(NSString *)arg1 dataType:(int)arg2 hasMore:(_Bool)arg3;
- (void)onFirstFetchFailed:(NSString *)arg1;
- (void)onFirstFetchFinished:(NSString *)arg1;
- (void)onGotTotalEmoticonCount:(NSString *)arg1 emoticonCount:(int)arg2 emojiCount:(int)arg3;
@end

