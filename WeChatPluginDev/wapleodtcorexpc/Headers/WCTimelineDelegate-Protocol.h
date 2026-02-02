//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol WCTimelineDelegate <NSObject>
- (void)onPrePageUpdate:(_Bool)arg1;
- (void)onRemoveCachesOfContentWithDataItemId:(NSString *)arg1;
- (void)onRemoveCachesOfLikeUserWithDataItemId:(NSString *)arg1;
- (void)onTimelineServerError;
- (void)onNoMoreTimelineData;
- (void)onTimelineDataChangedWithAdded:(NSArray *)arg1 andChanged:(NSArray *)arg2 andDeleted:(NSArray *)arg3;
@end

