//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMListenCommentInfo, NSString, TingItem;

@protocol TingItemDataServiceExtension <NSObject>

@optional
- (void)onTingItemCommentInfoUpdated:(NSString *)arg1 commentInfo:(MMListenCommentInfo *)arg2;
- (void)onTingItemUpdatedWithId:(NSString *)arg1 item:(TingItem *)arg2;
- (void)onTingItemServerUUIDAvailable:(NSString *)arg1 localUUID:(NSString *)arg2;
- (void)onTingItemListenIdAvailable:(NSString *)arg1 item:(TingItem *)arg2;
@end

