//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMFinderLiveGestureCacheExt <NSObject>

@optional
- (void)onCachedGestureWillDelete:(NSString *)arg1;
- (void)onCachedGestureDidUpdate:(NSString *)arg1 result:(unsigned long long)arg2;
- (void)onCachedGestureWillUpdate:(NSString *)arg1;
- (void)onGestureCacheDidUpdate;
- (void)onGestureCacheWillUpdate;
@end

