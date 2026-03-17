//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMListenCategoryItem, MMListenDiscoverItem, MMListenDiscoverLine, NSString, TingItem, TingLaunchOptions, TingReportContext;

@protocol ITingReportManager <NSObject>
- (void)markSessionReport:(TingLaunchOptions *)arg1;
- (void)markTimeTaskStop;
- (void)tryUpdateCurrentSessionId;
- (void)updateTingPlayerSessionId:(NSString *)arg1;
- (void)keepCurrentPlayerSessionId;
- (void)markAudioModuleInterrupted;
- (void)markAudioModuleResume;
- (void)markAudioModulePausePlay;
- (void)markPlayCenterClear;
- (void)markMinimizeCloseButtonClicked;
- (void)onPlayerAction:(int)arg1 context:(TingReportContext *)arg2;
- (void)onClickWithLine:(MMListenDiscoverLine *)arg1 item:(MMListenDiscoverItem *)arg2 scene:(int)arg3;
- (void)onClickWithCategory:(MMListenCategoryItem *)arg1 scene:(int)arg2 index:(int)arg3 fill:(void (^)(TingReportContext *))arg4;
- (void)onClickWithItem:(TingItem *)arg1 belongsToCategory:(MMListenCategoryItem *)arg2 scene:(int)arg3 index:(int)arg4 fill:(void (^)(TingReportContext *))arg5;
- (void)onClickWithItemPlayButton:(TingItem *)arg1 belongsToCategory:(MMListenCategoryItem *)arg2 scene:(int)arg3 index:(int)arg4 play:(_Bool)arg5 fill:(void (^)(TingReportContext *))arg6;
- (void)onExposedWithLine:(MMListenDiscoverLine *)arg1 item:(MMListenDiscoverItem *)arg2 scene:(int)arg3;
- (void)onExposedWithCategory:(MMListenCategoryItem *)arg1 scene:(int)arg2 index:(int)arg3 fill:(void (^)(TingReportContext *))arg4;
- (void)onExposedWithItem:(TingItem *)arg1 belongsToCategory:(MMListenCategoryItem *)arg2 scene:(int)arg3 index:(int)arg4 fill:(void (^)(TingReportContext *))arg5;
- (void)onPageDisappear:(int)arg1 fill:(void (^)(TingReportContext *))arg2;
- (void)onPageAppear:(int)arg1 fill:(void (^)(TingReportContext *))arg2;
- (void)reportNow;
- (void)onAction:(int)arg1 scene:(int)arg2 tingItem:(TingItem *)arg3 categoryItem:(MMListenCategoryItem *)arg4 fill:(void (^)(TingReportContext *))arg5;
- (void)onAction:(int)arg1 scene:(int)arg2 fill:(void (^)(TingReportContext *))arg3;
- (void)onAction:(int)arg1 context:(TingReportContext *)arg2;
- (void)onAction:(TingReportContext *)arg1;
@end

