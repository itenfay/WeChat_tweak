//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class QMUInScreenClusterAlgorithm, QMUWorldClusterAlgorithm;

@interface QMUUnivisalClusterAlgorithm
{
    int _thresholdZoomlevel;
    QMUInScreenClusterAlgorithm *_highLevel;
    QMUWorldClusterAlgorithm *_lowLevel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QMUWorldClusterAlgorithm *lowLevel; // @synthesize lowLevel=_lowLevel;
@property(retain, nonatomic) QMUInScreenClusterAlgorithm *highLevel; // @synthesize highLevel=_highLevel;
@property(nonatomic) int thresholdZoomlevel; // @synthesize thresholdZoomlevel=_thresholdZoomlevel;
- (void)setMap:(id)arg1;
- (id)map;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setDistance:(double)arg1;
- (double)distance;
- (void)refreshCluster;
- (id)initWithDateStorer:(id)arg1 originData:(id)arg2;

@end

