//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderMessageMgr : NSObject
{
}

+ (void)clickFinderShopWindow:(id)arg1 fromVC:(id)arg2;
+ (void)clickFinderShopWindowCell:(id)arg1 fromVC:(id)arg2;
+ (void)clickFinderOrder:(id)arg1 fromVC:(id)arg2;
+ (void)clickFinderShareProduct:(id)arg1 contact:(id)arg2 fromVC:(id)arg3;
+ (void)clickFinderShareProduct:(id)arg1 contact:(id)arg2;
+ (void)clickFinderPOIRelatedItem:(id)arg1 enterScene:(unsigned long long)arg2 userName:(id)arg3 reportID:(id)arg4;
+ (void)clickFinderLive:(id)arg1 entryScene:(unsigned long long)arg2;
+ (void)clickFinderLive:(id)arg1 entryScene:(unsigned long long)arg2 fromViewController:(id)arg3;
+ (void)clickFinderLive:(id)arg1 entryScene:(unsigned long long)arg2 fromViewController:(id)arg3 fromChatUsername:(id)arg4;
+ (void)clickFinderLive:(id)arg1 entryScene:(unsigned long long)arg2 fromViewController:(id)arg3 customParams:(id)arg4;
+ (void)clickFinderLive:(id)arg1 entryScene:(unsigned long long)arg2 fromViewController:(id)arg3 fromChatUsername:(id)arg4 customParams:(id)arg5;
+ (void)clickFinderLongVideo:(id)arg1 fromUserName:(id)arg2 toUserName:(id)arg3;
+ (void)clickFinderLongVideo:(id)arg1 shareEnterUsername:(id)arg2 reportModel:(id)arg3 fromCell:(id)arg4 notGetReleatedList:(_Bool)arg5;
+ (void)clickFinderLongVideo:(id)arg1 shareEnterUsername:(id)arg2 reportModel:(id)arg3 fromCell:(id)arg4;
+ (void)clickFinderTopic:(id)arg1 shareScene:(unsigned long long)arg2;
+ (void)pushMembershipViewControllerWithNameCard:(id)arg1 followInfo:(id)arg2;
+ (void)clickFinderNameCard:(id)arg1 messageWrap:(id)arg2 isChatRoom:(_Bool)arg3 fromUserName:(id)arg4 talkerName:(id)arg5 profileEnterType:(unsigned int)arg6 finderEntryScene:(unsigned long long)arg7 fromVC:(id)arg8;
+ (void)clickFinderNameCard:(id)arg1 messageWrap:(id)arg2 isChatRoom:(_Bool)arg3 fromUserName:(id)arg4 talkerName:(id)arg5 profileEnterType:(unsigned int)arg6 finderEntryScene:(unsigned long long)arg7;
+ (void)clickFinderNameCard:(id)arg1 isChatRoom:(_Bool)arg2 fromUserName:(id)arg3 talkerName:(id)arg4 profileEnterType:(unsigned int)arg5 finderEntryScene:(unsigned long long)arg6;
+ (void)clickFinderFeed:(id)arg1 shareEnterUsername:(id)arg2 reportModel:(id)arg3 fromCell:(id)arg4 entranceGMsgID:(id)arg5 fromVC:(id)arg6;
+ (void)pushFinderShareDetailViewControllerWithItem:(id)arg1 notGetReleatedList:(_Bool)arg2 entranceGMsgID:(id)arg3 reportModel:(id)arg4 currentNavController:(id)arg5 enterScene:(unsigned long long)arg6 customParam:(id)arg7;
+ (void)clickFinderFeed:(id)arg1 shareEnterUsername:(id)arg2 reportModel:(id)arg3 fromCell:(id)arg4 cardType:(unsigned long long)arg5 adParamInofStr:(id)arg6 encryptedTid:(id)arg7 notGetReleatedList:(_Bool)arg8 entranceGMsgID:(id)arg9 fromVC:(id)arg10;
+ (_Bool)isFinderMsg:(id)arg1;

@end

