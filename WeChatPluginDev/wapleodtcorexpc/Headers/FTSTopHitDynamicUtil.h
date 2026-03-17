//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FTSTopHitDynamicUtil : NSObject
{
}

+ (int)ParseScoreInterval:(unsigned int)arg1;
+ (void)PrintLogs;
+ (_Bool)isSupportTopHitRemoval;
+ (unsigned int)CalDeclineScoreForMMGroup:(unsigned int)arg1;
+ (unsigned int)CalDeclineScore:(unsigned int)arg1;
+ (unsigned int)CalRaiseScore:(unsigned int)arg1;
+ (unsigned int)GetMaxDivScore;
+ (unsigned int)GetLeastDisplayScore;
+ (unsigned int)GetTopHitItemSurvivalDays;

@end

