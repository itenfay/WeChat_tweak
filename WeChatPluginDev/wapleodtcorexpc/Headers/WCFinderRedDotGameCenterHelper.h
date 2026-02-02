//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderRedDotGameCenterHelper : NSObject
{
}

+ (_Bool)currentGameCenterHasSLevelRedDot;
+ (_Bool)checkGameCenterIsOnRedDotBanStage;
+ (_Bool)globalRedDotFrequencySwitchIsOn;
+ (_Bool)currentGameCenterHasRedDot;
+ (id)getCurrentGameCenterRedDotTipsId;
+ (void)disposeGameCenterRedDotForReasonType:(unsigned long long)arg1;
+ (id)getCurrentGameCenterRedDotExtInfo;
+ (id)genCapsuleBubbleForText:(id)arg1;
+ (_Bool)isGameCenterEntryPath:(id)arg1;
+ (id)genRedDotCtrlInfoAsTipsId:(id)arg1 showStyle:(long long)arg2 text:(id)arg3 iconUrl:(id)arg4 bigCardImageSize:(struct CGSize)arg5 ignoreLimit:(_Bool)arg6 expireTime:(long long)arg7 beginShowTime:(long long)arg8 extInfo:(id)arg9;
+ (void)addGameCenterRedDotAsTipsId:(id)arg1 showStyle:(long long)arg2 text:(id)arg3 iconUrl:(id)arg4 bigCardImageSize:(struct CGSize)arg5 ignoreLimit:(_Bool)arg6 expireTime:(long long)arg7 beginShowTime:(long long)arg8 extInfo:(id)arg9;

@end

