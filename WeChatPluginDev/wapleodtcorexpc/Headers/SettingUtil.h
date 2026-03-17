//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface SettingUtil : NSObject
{
}

+ (_Bool)isEUCountryISOCodes:(id)arg1;
+ (id)getRegCountryCode;
+ (_Bool)isRegInEUCountry;
+ (_Bool)isRegInChina;
+ (_Bool)isOverSeaUser;
+ (id)getUserRegCountry;
+ (id)getEUCountryISOCodes;
+ (_Bool)cannotModAlias;
+ (_Bool)isPasskeyOpened;
+ (_Bool)isOpenVoicePrint;
+ (_Bool)isOpenQQMail;
+ (unsigned int)getCurUserBindQQUin;
+ (_Bool)isBindQQ;
+ (_Bool)isOpenQQ;
+ (void)loadCurUserInfo:(id)arg1;
+ (id)getLocalUsrName:(unsigned int)arg1;
+ (id)getCurUsrBindEmail;
+ (id)getCurUsrBindMobile;
+ (id)getCurUsrDisplayName;
+ (id)getCurUsrNickname;
+ (id)getCurUsrName;
+ (_Bool)isCurUsrName:(id)arg1;
+ (id)getLocalInfo;
+ (id)getUpdateInfo;
+ (id)getMainSettingExt;
+ (id)getMainSetting;
+ (id)delayTypeStringWith:(unsigned long long)arg1;
+ (id)delayTypeString;
+ (unsigned long long)transferDelayType;
+ (_Bool)isF2FSynthesizeSpeechOpen;
+ (void)logNotificationSetting:(_Bool)arg1;
+ (_Bool)isNeverAutoPlaySight;
+ (_Bool)isAutoPlaySight;
+ (_Bool)isSnsAutoDownloadAdCanvasSight;
+ (_Bool)isAutoDownloadAdSight:(id)arg1;
+ (_Bool)isAutoDownloadSightForExp:(id)arg1;
+ (_Bool)isAutoDownloadSight:(id)arg1;
+ (_Bool)isSnsAdSightInFlowControl;
+ (_Bool)isSnsSightInFlowControl;
+ (_Bool)isSnsSightInFlowControlByDatePeriod;
+ (_Bool)isSnsSightInFlowControlByDailyTime;
+ (_Bool)isAffiliatedAcct;
+ (id)GetLocalUsrImg;

@end

