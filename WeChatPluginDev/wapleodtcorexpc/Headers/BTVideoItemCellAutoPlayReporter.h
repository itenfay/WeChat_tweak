//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTVideoItemCellAutoPlayReportData;

@interface BTVideoItemCellAutoPlayReporter
{
    BTVideoItemCellAutoPlayReportData *m_data;
    unsigned int m_autoPlayId;
    unsigned long long m_buffStartTime;
    unsigned long long m_firstFrameStartTime;
    _Bool m_reportOnVideoPlayOnce;
    _Bool m_reportOnVideoPauseOnce;
}

- (void).cxx_destruct;
- (void)doReport:(unsigned int)arg1 buffDuration:(unsigned long long)arg2;
- (unsigned int)getAutoPlayId;
- (unsigned long long)getPlayDuration;
- (void)onOpenVideoLandingPage;
- (void)onVideoEndBuffering;
- (void)onVideoBeginBuffering;
- (void)onVideoPause:(unsigned long long)arg1 playDuration:(unsigned long long)arg2;
- (void)onVideoPlay;
- (void)onVideoPrepareToPlay;
- (void)onVideoCreate:(id)arg1;
- (id)init;
- (void)reset;

@end

