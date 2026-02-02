//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface GameChatRoomUtil : NSObject
{
}

+ (_Bool)isExpired:(double)arg1 expireDuration:(double)arg2;
+ (id)currentDateTimeStr;
+ (id)descAttributeFromContentList:(id)arg1 defaultColor:(id)arg2;
+ (id)topMostViewControllerConsiderGameTabVc;
+ (id)longestIncreasingSequence:(id)arg1;
+ (_Bool)isFirstTimeAccessForKeyLifeCycel:(id)arg1;
+ (void)setFirstTimeAccessForKey:(id)arg1;
+ (_Bool)isFirstTimeAccessForKey:(id)arg1 autoSetIfNotFirst:(_Bool)arg2;
+ (id)getLbsInfo;
+ (id)lbsInfoFromCLLocation:(id)arg1;
+ (id)getRecentlyTickleKeyWithChatRoomName:(id)arg1 andUserName:(id)arg2;
+ (void)didExitChatRoom:(id)arg1;
+ (void)didJoinNewRoom:(id)arg1;
+ (id)uiColorFromBackEndColor:(id)arg1 defaultColor:(id)arg2;
+ (id)uiColorFromBackEndColor:(id)arg1;
+ (id)fiveDarkColor;

@end

