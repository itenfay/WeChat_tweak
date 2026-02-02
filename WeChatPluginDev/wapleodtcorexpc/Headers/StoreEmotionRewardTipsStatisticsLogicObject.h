//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmotionRewardTipsStatisticsData, NSString;

@interface StoreEmotionRewardTipsStatisticsLogicObject
{
    unsigned int m_notCountAfterDaysConfig;
    unsigned int m_contiousSendTimesConfig;
    unsigned int m_totalSendTimesConfig;
    EmotionRewardTipsStatisticsData *m_statisticsData;
    NSString *m_statisticsFilePath;
}

- (void).cxx_destruct;
- (void)loadStatisticsData;
- (void)saveStatisticsData;
- (void)loadConfig;
- (void)hasRewardedPid:(id)arg1;
- (void)resetRewardStatisticsForPid:(id)arg1 hasShowTips:(_Bool)arg2;
- (void)resetRewardStatisticsForPid:(id)arg1;
- (void)hasShowedTipsForPid:(id)arg1;
- (_Bool)checkIsNeedShowRewardTipsWithPid:(id)arg1;
- (void)clearAllData;
- (id)init;

@end

