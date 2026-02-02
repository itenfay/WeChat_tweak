//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCFinderTopicDataKeyExt <NSObject>

@optional
- (void)finderFeedEventIllegalWithEventId:(NSString *)arg1;
- (void)deletefinderEventWithEventId:(NSString *)arg1;
- (void)finderTopicFeedOrderChanged:(unsigned long long)arg1;
- (void)finderFeedOfTopicBeDeleteWithTid:(NSString *)arg1;
@end

