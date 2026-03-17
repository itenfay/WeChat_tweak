//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray, SnsTimeLineRequest, WeiShangInfo;

@protocol WCTimelineDataProviderDelegate <NSObject>
- (void)onAdPullWithAdDatas:(NSMutableArray *)arg1;
- (void)onTimelineServerError;
- (void)onNoMoreTimelineData;
- (void)onPrePageUpdated:(unsigned long long)arg1 datas:(NSMutableArray *)arg2 adDatas:(NSMutableArray *)arg3 changedTime:(unsigned int)arg4 wsInfos:(WeiShangInfo *)arg5;
- (void)onNextPageUpdated:(unsigned long long)arg1 datas:(NSMutableArray *)arg2 adDatas:(NSMutableArray *)arg3 changedTime:(unsigned int)arg4 wsInfos:(WeiShangInfo *)arg5;
- (void)onFirstPageUpdated:(unsigned long long)arg1 dataChanged:(_Bool)arg2 datas:(NSMutableArray *)arg3 adDatas:(NSMutableArray *)arg4 changedTime:(unsigned int)arg5 feedIds:(NSMutableArray *)arg6 feedFlags:(NSMutableArray *)arg7 wsInfos:(WeiShangInfo *)arg8;
- (void)onPageRequestPrepared:(SnsTimeLineRequest *)arg1 pageType:(long long)arg2;
@end

