//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol WCFinderMentionExt <NSObject>

@optional
- (void)onFinderMentionLocalReadIdChangeWithType:(long long)arg1;
- (void)onFinderMarkAllMentionRead;
- (void)onFinderMentionCountReload:(unsigned long long)arg1;
- (void)onFinderMentionDelete:(NSArray *)arg1;
- (void)onFinderMentionAdd:(NSArray *)arg1;
@end

