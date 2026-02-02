//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VoIPMessageUtils : NSObject
{
}

+ (void)supplementLocalBubbleMessageWrapToUsername:(id)arg1 withWordingType:(int)arg2 isVideo:(_Bool)arg3 roomID:(unsigned long long)arg4 roomKey:(unsigned long long)arg5 inviteID:(unsigned int)arg6 duration:(unsigned int)arg7 isCaller:(_Bool)arg8 needRedDot:(_Bool)arg9 needFixTime:(_Bool)arg10 createTime:(unsigned int)arg11 exceptionType:(unsigned long long)arg12 status:(unsigned int)arg13 isIlink:(_Bool)arg14;
+ (id)wordingWithType:(int)arg1 isSender:(_Bool)arg2 duration:(unsigned int)arg3;

@end

