//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class DataReportSubstitutePage, NSArray, NSDictionary, NSString;

@protocol DataReportStandardEventDelegate <NSObject>
- (void)onCgiResp:(NSString *)arg1 errCode:(long long)arg2 errMsg:(NSString *)arg3 cgiParams:(NSDictionary *)arg4 routeRules:(NSArray *)arg5 time:(unsigned long long)arg6;
- (void)onCgiReq:(NSString *)arg1 cgiParams:(NSDictionary *)arg2 routeRules:(NSArray *)arg3 time:(unsigned long long)arg4;
- (void)onAudioStop:(unsigned long long)arg1;
- (void)onAudioPause:(unsigned long long)arg1;
- (void)onAudioPlay:(unsigned long long)arg1;
- (void)onVideoStop:(unsigned long long)arg1;
- (void)onVideoPause:(unsigned long long)arg1;
- (void)onVideoPlay:(unsigned long long)arg1;
- (void)onViewUnExp:(unsigned long long)arg1 viewParams:(NSDictionary *)arg2 routeRules:(NSArray *)arg3;
- (void)onViewExp:(unsigned long long)arg1 viewParams:(NSDictionary *)arg2 routeRules:(NSArray *)arg3;
- (void)onViewLongPress:(unsigned long long)arg1 viewParams:(NSDictionary *)arg2 routeRules:(NSArray *)arg3;
- (void)onViewDoubleTap:(unsigned long long)arg1 viewParams:(NSDictionary *)arg2 routeRules:(NSArray *)arg3;
- (void)onViewClk:(unsigned long long)arg1 viewParams:(NSDictionary *)arg2 routeRules:(NSArray *)arg3;
- (void)onPageOut:(unsigned long long)arg1 page:(DataReportSubstitutePage *)arg2 isSubPage:(_Bool)arg3;
- (void)onPageIn:(unsigned long long)arg1 page:(DataReportSubstitutePage *)arg2 isSubPage:(_Bool)arg3;
- (void)onSessionOut:(unsigned long long)arg1 page:(DataReportSubstitutePage *)arg2;
- (void)onSessionIn:(unsigned long long)arg1 page:(DataReportSubstitutePage *)arg2;
- (void)onBizOut:(unsigned long long)arg1 page:(DataReportSubstitutePage *)arg2;
- (void)onBizIn:(unsigned long long)arg1 page:(DataReportSubstitutePage *)arg2;
- (void)onAppOut:(unsigned long long)arg1;
- (void)onAppIn:(unsigned long long)arg1;
@end

