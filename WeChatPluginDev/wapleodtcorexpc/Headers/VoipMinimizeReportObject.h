//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface VoipMinimizeReportObject
{
    unsigned int m_clickMinimizeButtonTime;
    unsigned int m_clickMinimizeButtonCount;
    unsigned int m_startVoipTime;
}

@property(nonatomic) unsigned int m_startVoipTime; // @synthesize m_startVoipTime;
@property(nonatomic) unsigned int m_clickMinimizeButtonCount; // @synthesize m_clickMinimizeButtonCount;
@property(nonatomic) unsigned int m_clickMinimizeButtonTime; // @synthesize m_clickMinimizeButtonTime;
- (void)reportTotalMinimizeCountWithTotalTalkTime;
- (void)recordVoipStartTime;
- (void)reportMinimizeModeTimeForAudio;
- (void)reportMinimizeModeTimeForVideo;
- (void)reportMinimizeButtonClickForAudio;
- (void)reportMinimizeButtonClickForVideo;
- (id)init;

@end

