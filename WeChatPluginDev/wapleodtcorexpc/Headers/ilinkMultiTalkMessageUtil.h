//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ilinkMultiTalkMessageUtil : NSObject
{
}

+ (id)changeToKnownNameFromUsrName:(id)arg1;
+ (id)getUserNameFromContact:(id)arg1;
+ (id)getContactInfoFromUserName:(id)arg1;
+ (id)genMsgJsonContentWithAllTalkedMembers:(id)arg1;
+ (id)genMessageWrapForFriend:(id)arg1 contact:(id)arg2 allTalkedMembers:(id)arg3 msgType:(long long)arg4 startTalkingTime:(double)arg5 roomID:(unsigned long long)arg6;

@end

