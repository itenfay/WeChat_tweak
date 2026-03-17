//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSString;

@protocol MegaVideoObjcPageMonitor <NSObject, UnitRCBaseProtocol>
- (void)onCgiBack:(NSString *)arg1 success:(_Bool)arg2 cgiTimeCost:(int)arg3 requestType:(int)arg4;
- (void)onCgiRequest:(NSString *)arg1 requestType:(int)arg2;
- (void)useCache:(NSString *)arg1;
- (void)onViewExpose:(NSString *)arg1 exposeIndex:(int)arg2;
- (void)onViewAction:(int)arg1 viewId:(NSString *)arg2;
- (void)onAction:(int)arg1;
- (void)onPageStateChange:(int)arg1;
- (void)updateMaxHorizontalScrollIndex:(int)arg1;
- (void)updateEnterType:(int)arg1;
- (void)init:(NSString *)arg1 startTime:(long long)arg2 pageId:(long long)arg3 pageType:(int)arg4 enterType:(int)arg5;
@end

