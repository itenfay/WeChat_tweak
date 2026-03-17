//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol IMagicNativeFinderCardExt <NSObject>

@optional
- (void)onFinderMediaFirstFrame:(NSString *)arg1;
- (void)onFinderMediaUpdateAdFeedback:(NSString *)arg1 jumpId:(NSString *)arg2 rect:(NSDictionary *)arg3;
- (void)onFinderMediaInsertAdFeedback:(NSString *)arg1 jumpId:(NSString *)arg2 rect:(NSDictionary *)arg3;
- (void)onFinderMediaJumpAdDetail:(NSString *)arg1 jumpId:(NSString *)arg2;
- (void)onFinderMediaDisplayAdEnd:(NSString *)arg1 jumpId:(NSString *)arg2;
- (void)onFinderMediaCloseAd:(NSString *)arg1 jumpId:(NSString *)arg2;
@end

