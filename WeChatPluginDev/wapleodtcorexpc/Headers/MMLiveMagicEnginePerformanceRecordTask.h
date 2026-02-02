//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveMagicEnginePerformanceRecord, MMLiveMetricsInfoRecordInfo, NSMutableArray, NSString;

@interface MMLiveMagicEnginePerformanceRecordTask : NSObject
{
    _Bool _recordMemoryIncrease;
    NSString *_giftName;
    NSString *_productId;
    NSMutableArray *_recentPlaySceneRecordList;
    NSMutableArray *_recentEditorSceneRecordList;
    MMLiveMagicEnginePerformanceRecord *_currPerformanceRecord;
    unsigned long long _currentRecordScene;
    MMLiveMetricsInfoRecordInfo *_baseMetricsRecord;
    CDUnknownBlockType _onPerformanceRecordScencChangeCallback;
    MMLiveMagicEnginePerformanceRecord *_playMedianMemoryIncreaseRecord;
    MMLiveMagicEnginePerformanceRecord *_playMedianCPUIncreaseRecord;
    MMLiveMagicEnginePerformanceRecord *_playMedianGPUIncreaseRecord;
    MMLiveMagicEnginePerformanceRecord *_editorMedianMemoryIncreaseRecord;
    MMLiveMagicEnginePerformanceRecord *_editorMedianCPUIncreaseRecord;
    MMLiveMagicEnginePerformanceRecord *_editorMedianGPUIncreaseRecord;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveMagicEnginePerformanceRecord *editorMedianGPUIncreaseRecord; // @synthesize editorMedianGPUIncreaseRecord=_editorMedianGPUIncreaseRecord;
@property(retain, nonatomic) MMLiveMagicEnginePerformanceRecord *editorMedianCPUIncreaseRecord; // @synthesize editorMedianCPUIncreaseRecord=_editorMedianCPUIncreaseRecord;
@property(retain, nonatomic) MMLiveMagicEnginePerformanceRecord *editorMedianMemoryIncreaseRecord; // @synthesize editorMedianMemoryIncreaseRecord=_editorMedianMemoryIncreaseRecord;
@property(retain, nonatomic) MMLiveMagicEnginePerformanceRecord *playMedianGPUIncreaseRecord; // @synthesize playMedianGPUIncreaseRecord=_playMedianGPUIncreaseRecord;
@property(retain, nonatomic) MMLiveMagicEnginePerformanceRecord *playMedianCPUIncreaseRecord; // @synthesize playMedianCPUIncreaseRecord=_playMedianCPUIncreaseRecord;
@property(retain, nonatomic) MMLiveMagicEnginePerformanceRecord *playMedianMemoryIncreaseRecord; // @synthesize playMedianMemoryIncreaseRecord=_playMedianMemoryIncreaseRecord;
@property(copy, nonatomic) CDUnknownBlockType onPerformanceRecordScencChangeCallback; // @synthesize onPerformanceRecordScencChangeCallback=_onPerformanceRecordScencChangeCallback;
@property(nonatomic) _Bool recordMemoryIncrease; // @synthesize recordMemoryIncrease=_recordMemoryIncrease;
@property(retain, nonatomic) MMLiveMetricsInfoRecordInfo *baseMetricsRecord; // @synthesize baseMetricsRecord=_baseMetricsRecord;
@property(nonatomic) unsigned long long currentRecordScene; // @synthesize currentRecordScene=_currentRecordScene;
@property(retain, nonatomic) MMLiveMagicEnginePerformanceRecord *currPerformanceRecord; // @synthesize currPerformanceRecord=_currPerformanceRecord;
@property(retain, nonatomic) NSMutableArray *recentEditorSceneRecordList; // @synthesize recentEditorSceneRecordList=_recentEditorSceneRecordList;
@property(retain, nonatomic) NSMutableArray *recentPlaySceneRecordList; // @synthesize recentPlaySceneRecordList=_recentPlaySceneRecordList;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *giftName; // @synthesize giftName=_giftName;
- (id)description;
- (void)createCurrPerformanceRecordIfNeed;
- (void)cacheCurrPerformanceRecord;
- (void)updateRecordScene:(unsigned long long)arg1;
- (id)getPerformanceRecordArrFilterGPUNullValue:(id)arg1;
- (id)getPerformanceRecordArrFilterCPUNullValue:(id)arg1;
- (id)getPerformanceRecordArrFilterMemoryNullValue:(id)arg1;
- (void)extractGPUIncreaseMedianRecord;
- (void)extractCPUIncreaseMedianRecord;
- (void)extractMemoryIncreaseMedianRecord;
- (void)extractMedianRecords;
- (void)tagRecordMemoryIncrease:(_Bool)arg1;
- (void)recordPerformanceWithMetricsInfo:(id)arg1;
- (_Bool)cancelPerformanceRecord:(unsigned long long)arg1;
- (_Bool)stopPerformanceRecord:(unsigned long long)arg1;
- (_Bool)startPerformanceRecord:(unsigned long long)arg1 withBaseMetrics:(id)arg2;
- (void)initDefaultData;
- (id)initWithGiftName:(id)arg1 productId:(id)arg2;

@end

