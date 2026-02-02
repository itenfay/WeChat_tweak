//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, ShakeGetResponse, ShakeMusicInfo, ShakeReportResponse;

@protocol ShakeLogicProxyDelegate <NSObject>

@optional
- (void)onShakeStop;
- (void)onShakeMusicReportFail:(int)arg1 ErrMsg:(NSString *)arg2;
- (void)onShakeMusicReportEndWithMusicItem:(ShakeMusicInfo *)arg1;
- (void)onShakeGetFail:(NSString *)arg1;
- (void)onShakeReportFail:(NSString *)arg1;
- (void)onShakeGetEndWithResult:(ShakeGetResponse *)arg1;
- (void)onShakeReportEndWithResult:(ShakeReportResponse *)arg1;
@end

