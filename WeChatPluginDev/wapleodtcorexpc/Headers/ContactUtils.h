//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ContactUtils : NSObject
{
}

+ (unsigned int)getProfileRecommendTextMessageMinCount;
+ (unsigned int)getProfileRecommendMaxLimitedTime;
+ (_Bool)getProfileRecommendOpenSwitch;
+ (unsigned int)getSessionForwardMaxCount;
+ (unsigned int)getSessionForwardMostoftenMaxCount;
+ (unsigned int)getSessionForwardRecentMaxCount;
+ (_Bool)checkNeedDoVerifyUserPreCheck;
+ (unsigned int)getDeleteNotRegularContactNumberThreshold;
+ (_Bool)checkDeleteNotRegularContactNumberMoreThanThreshold;
+ (_Bool)checkDeleteNotRegularContactSwitch;
+ (id)safeGetAllSessionArray;
+ (id)getDicOpenImChatRoomAddGroupMemberReprot:(id)arg1 chatRoomContact:(id)arg2 targetContact:(id)arg3;
+ (_Bool)checkShareQQOptimizationSwitch;
+ (_Bool)checkMsgContentLogicIsNeedCached;
+ (id)generateSystemMessage:(id)arg1 fromUserName:(id)arg2;
+ (_Bool)checkShowContactAddCreateTime;
+ (void)checkAccoutDeleteSessionAndContact:(id)arg1;
+ (void)resetCellDisableStateWithCell:(id)arg1 isEnabled:(_Bool)arg2;
+ (id)getContactsSelectOpenIMContactsStr:(_Bool)arg1;
+ (_Bool)isOpenMultiSelectContactsStyleSwitch;
+ (id)getContactWithUserName:(id)arg1;

@end

