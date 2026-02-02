//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSMutableArray, NSString, WCFinderRedDotCtrlInfo, WCFinderRedDotTipsShowInfo;

@protocol WCFinderRedDotInterfaceProtocol <NSObject>
+ (NSString *)getShouldClearTimelineRedDotPath:(WCFinderRedDotCtrlInfo *)arg1;
- (void)syncRedDotUnreadChainInfo;
- (void)disposeRedDotCtrlInfoByTipsUuid:(NSString *)arg1 subReasonType:(unsigned long long)arg2;
- (void)disposeRedDotCtrlInfoByTipsUuid:(NSString *)arg1;
- (NSArray *)getAllRedDotCtrlInfoAtPath:(NSString *)arg1;
- (void)disposeGroupTipsWithGroupId:(NSString *)arg1;
- (void)clearTimelineAllRedDot;
- (void)saveSelfUuidCtrlInfosDic;
- (unsigned int)increaseRedDotExpose:(NSString *)arg1;
- (NSArray *)getRedDotCtrlInfoWithRevokeId:(NSString *)arg1;
- (_Bool)updateShowInfoTreeReddotCount:(WCFinderRedDotCtrlInfo *)arg1;
- (_Bool)isCurrentExposeRedDotPath:(NSString *)arg1;
- (void)resetCurentExposeRedDotPath:(NSArray *)arg1;
- (void)removeExposeRedDotPath:(NSString *)arg1;
- (void)addExposeRedDotPath:(NSString *)arg1;
- (void)clearAllCurentExposeRedDotPath;
- (void)cleanPeriodRedDotListAsScene:(int)arg1 targetPath:(NSString *)arg2;
- (NSMutableArray *)getTargetRedDotArrayByPath:(NSString *)arg1;
- (void)redDotInfoInvalidCheck;
- (void)revokeRedDotByViewFeedsIndex:(long long)arg1 commentScene:(int)arg2;
- (_Bool)revokeRedDotPathInfo:(NSString *)arg1 isOnlyWhiteList:(_Bool)arg2 whiteListTips:(NSArray *)arg3;
- (void)clearSameRevokeIdCtrlInfo:(NSString *)arg1;
- (WCFinderRedDotCtrlInfo *)currentCtrlInfoAtPath:(NSString *)arg1 ignoreNMFrequency:(_Bool)arg2;
- (WCFinderRedDotCtrlInfo *)currentCtrlInfoAtPath:(NSString *)arg1;
- (unsigned long long)ctrlInfoTypeAtPath:(NSString *)arg1;
- (WCFinderRedDotTipsShowInfo *)currentShowInfoAtPath:(NSString *)arg1;
- (unsigned long long)showInfoTypeAtPath:(NSString *)arg1;
- (WCFinderRedDotCtrlInfo *)ctrlInfoWithTipsUuid:(NSString *)arg1;
- (WCFinderRedDotCtrlInfo *)ctrlInfoWithType:(unsigned long long)arg1;
- (_Bool)updateWXRedDotInfo:(WCFinderRedDotCtrlInfo *)arg1;
- (void)clearSameTypeCtrlInfoType:(unsigned long long)arg1;
- (void)disposeRedDotIgnoreClearTypeAtPath:(NSString *)arg1;
- (_Bool)disposeRedDotAtPath:(NSString *)arg1 subReasonType:(unsigned long long)arg2;
- (_Bool)disposeRedDotAtPath:(NSString *)arg1;
- (_Bool)shouldShowRedDotAtPath:(NSString *)arg1;
- (void)addNewRedDotCtrlInfo:(WCFinderRedDotCtrlInfo *)arg1;
- (void)updateRedDotExposeAppear:(_Bool)arg1 showInfo:(WCFinderRedDotTipsShowInfo *)arg2;
- (void)updateRedDotExposeAppear:(_Bool)arg1 targetPath:(NSString *)arg2;
- (long long)getCurFinderPrivateMsgCountByUsername:(NSString *)arg1 fromRedDotPath:(_Bool)arg2;
- (long long)getCurMemberUnreadCountByUsername:(NSString *)arg1 fromRedDotPath:(_Bool)arg2;
- (long long)getCurFinderUnreadCountByUsername:(NSString *)arg1 fromRedDotPath:(_Bool)arg2;
- (long long)getWXPrivateMsgUnreadCount;
- (long long)getCurWXUnreadCount;
- (void)setPiplineFilters:(NSMutableArray *)arg1;
- (NSMutableArray *)piplineFilters;
- (void)setFilterRedDotFlag:(unsigned long long)arg1;
- (unsigned long long)filterRedDotFlag;
- (void)resetToDefaultUsername;
- (void)setCurrentUseFinderUsername:(NSString *)arg1;
- (NSString *)currentUseFinderUsername;
@end

