//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VoipRecentStatusUtils : NSObject
{
}

+ (void)log24183WithModel:(id)arg1 actionType:(unsigned long long)arg2;
+ (id)recentStatusCardViewWithUserName:(id)arg1 model:(id)arg2 didOpenPageButtonCallback:(CDUnknownBlockType)arg3 isCloseButtonHidden:(_Bool)arg4 didClickCloseButtonCallback:(CDUnknownBlockType)arg5 isSoundButtonHidden:(_Bool)arg6 didClickSoundButtonCallback:(CDUnknownBlockType)arg7;
+ (_Bool)isLegalWithModel:(id)arg1;
+ (_Bool)isVoipVideoTalkingEnable;
+ (_Bool)isVoipVideoCallingUnFolded;
+ (_Bool)isVoipAudioCallingUnFolded;
+ (_Bool)isEnable;

@end

