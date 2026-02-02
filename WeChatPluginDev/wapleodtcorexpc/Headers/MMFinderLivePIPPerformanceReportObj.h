//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSRecursiveLock;

@interface MMFinderLivePIPPerformanceReportObj : NSObject
{
    int _sumDecodeCollectCnt;
    int _sumPIPRenderCollectCnt;
    int _largeFPSDifferenceCnt;
    int _lessFPSDifferenceCnt;
    int _maxDecodeFPS;
    int _minDecodeFPS;
    int _maxPIPRenderFPS;
    int _minPIPRenderFPS;
    int _sumPixelRenderCollectCnt;
    int _sumNewRenderBufferCollectCnt;
    int _sumAttachWidgetsCollectCnt;
    int _sumRenderToBufferCollectCnt;
    int _topFPSDifferenceListCnt;
    int _topFPSLimit;
    NSMutableArray *_latestDecodeComputeResultList;
    NSMutableArray *_latestRenderComputeResultList;
    unsigned long long _sumDecodeFPS;
    unsigned long long _sumPIPRenderFPS;
    unsigned long long _sumDifferenceFPS;
    unsigned long long _sumDifferenceComputeCnt;
    double _sumPixelRenderDuration;
    double _sumNewRenderBufferDuration;
    double _sumAttachWidgetsDuration;
    double _sumRenderToBufferDuration;
    double _computeResultDifferenceTime;
    double _largeFPSDifference;
    double _lessFPSDifference;
    NSMutableArray *_topFPSDifferenceResultList;
    NSRecursiveLock *_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *topFPSDifferenceResultList; // @synthesize topFPSDifferenceResultList=_topFPSDifferenceResultList;
@property(nonatomic) int topFPSLimit; // @synthesize topFPSLimit=_topFPSLimit;
@property(nonatomic) int topFPSDifferenceListCnt; // @synthesize topFPSDifferenceListCnt=_topFPSDifferenceListCnt;
@property(nonatomic) double lessFPSDifference; // @synthesize lessFPSDifference=_lessFPSDifference;
@property(nonatomic) double largeFPSDifference; // @synthesize largeFPSDifference=_largeFPSDifference;
@property(nonatomic) double computeResultDifferenceTime; // @synthesize computeResultDifferenceTime=_computeResultDifferenceTime;
@property(nonatomic) int sumRenderToBufferCollectCnt; // @synthesize sumRenderToBufferCollectCnt=_sumRenderToBufferCollectCnt;
@property(nonatomic) double sumRenderToBufferDuration; // @synthesize sumRenderToBufferDuration=_sumRenderToBufferDuration;
@property(nonatomic) int sumAttachWidgetsCollectCnt; // @synthesize sumAttachWidgetsCollectCnt=_sumAttachWidgetsCollectCnt;
@property(nonatomic) double sumAttachWidgetsDuration; // @synthesize sumAttachWidgetsDuration=_sumAttachWidgetsDuration;
@property(nonatomic) int sumNewRenderBufferCollectCnt; // @synthesize sumNewRenderBufferCollectCnt=_sumNewRenderBufferCollectCnt;
@property(nonatomic) double sumNewRenderBufferDuration; // @synthesize sumNewRenderBufferDuration=_sumNewRenderBufferDuration;
@property(nonatomic) int sumPixelRenderCollectCnt; // @synthesize sumPixelRenderCollectCnt=_sumPixelRenderCollectCnt;
@property(nonatomic) double sumPixelRenderDuration; // @synthesize sumPixelRenderDuration=_sumPixelRenderDuration;
@property(nonatomic) unsigned long long sumDifferenceComputeCnt; // @synthesize sumDifferenceComputeCnt=_sumDifferenceComputeCnt;
@property(nonatomic) unsigned long long sumDifferenceFPS; // @synthesize sumDifferenceFPS=_sumDifferenceFPS;
@property(nonatomic) int minPIPRenderFPS; // @synthesize minPIPRenderFPS=_minPIPRenderFPS;
@property(nonatomic) int maxPIPRenderFPS; // @synthesize maxPIPRenderFPS=_maxPIPRenderFPS;
@property(nonatomic) unsigned long long sumPIPRenderFPS; // @synthesize sumPIPRenderFPS=_sumPIPRenderFPS;
@property(nonatomic) int minDecodeFPS; // @synthesize minDecodeFPS=_minDecodeFPS;
@property(nonatomic) int maxDecodeFPS; // @synthesize maxDecodeFPS=_maxDecodeFPS;
@property(nonatomic) unsigned long long sumDecodeFPS; // @synthesize sumDecodeFPS=_sumDecodeFPS;
@property(retain, nonatomic) NSMutableArray *latestRenderComputeResultList; // @synthesize latestRenderComputeResultList=_latestRenderComputeResultList;
@property(retain, nonatomic) NSMutableArray *latestDecodeComputeResultList; // @synthesize latestDecodeComputeResultList=_latestDecodeComputeResultList;
@property(nonatomic) int lessFPSDifferenceCnt; // @synthesize lessFPSDifferenceCnt=_lessFPSDifferenceCnt;
@property(nonatomic) int largeFPSDifferenceCnt; // @synthesize largeFPSDifferenceCnt=_largeFPSDifferenceCnt;
@property(nonatomic) int sumPIPRenderCollectCnt; // @synthesize sumPIPRenderCollectCnt=_sumPIPRenderCollectCnt;
@property(nonatomic) int sumDecodeCollectCnt; // @synthesize sumDecodeCollectCnt=_sumDecodeCollectCnt;
@property(readonly, nonatomic) NSArray *topFPSOverLimitResultList;
@property(readonly, nonatomic) int renderToAverageDuration;
@property(readonly, nonatomic) int attachWidgesAverageDuration;
@property(readonly, nonatomic) int newRenderAverageDuration;
@property(readonly, nonatomic) int pixelRenderAverageDuration;
@property(readonly, nonatomic) int averagePIPRenderFPS;
@property(readonly, nonatomic) int averageDecodeFPS;
- (double)getRenderToBufferDuration:(id)arg1;
- (double)getAttachWidgesDuration:(id)arg1;
- (double)getNewRenderBufferDuration:(id)arg1;
- (double)getPixelRenderDuration:(id)arg1;
- (int)getPIPRenderFPS:(id)arg1;
- (int)getDecodeFPS:(id)arg1;
- (void)computeFPSDiffenceForRenderResult:(id)arg1 decodeResult:(id)arg2;
- (_Bool)isRenderResult:(id)arg1 nearToDecodeResult:(id)arg2;
- (void)compareDecodeRenderComputeResult;
- (id)getRenderComputeResult:(id)arg1;
- (id)getDecodeComputeResult:(id)arg1;
- (id)description;
- (void)addRenderLoopMetrics:(id)arg1;
- (void)addDecodeLoopMetrics:(id)arg1;
- (void)initDefaultData;
- (id)init;

@end

