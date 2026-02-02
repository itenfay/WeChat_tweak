//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate;

@interface OCRTransReport : NSObject
{
    _Bool _isBizImgTranslating;
    _Bool _shouldExitActionReported;
    unsigned int _source;
    unsigned int _result;
    unsigned int _showOriginCount;
    unsigned int _hasSaveResult;
    unsigned int _hasSaveOrigin;
    unsigned int _enhanceCount;
    unsigned long long _enhanceModelCostTime;
    NSDate *_startTime;
    NSDate *_captureTime;
    NSDate *_startUploadTime;
    NSDate *_endUploadTime;
    NSDate *_getResultTime;
    NSDate *_startEnhanceTime;
    NSDate *_endEnhanceTime;
    NSDate *_firstEndEnhanceTime;
}

+ (void)reportImageOCREnterScene:(unsigned int)arg1 opType:(unsigned int)arg2;
+ (void)reportImageOCRTaskIdKey:(unsigned int)arg1;
+ (void)reportImageOCRZoomType:(unsigned int)arg1 sessionID:(id)arg2;
+ (void)reportImageOCRActionType:(unsigned int)arg1 sessionID:(id)arg2 ocrResultType:(long long)arg3;
+ (void)reportImageOCRActionType:(unsigned int)arg1 sessionID:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldExitActionReported; // @synthesize shouldExitActionReported=_shouldExitActionReported;
@property(retain, nonatomic) NSDate *firstEndEnhanceTime; // @synthesize firstEndEnhanceTime=_firstEndEnhanceTime;
@property(retain, nonatomic) NSDate *endEnhanceTime; // @synthesize endEnhanceTime=_endEnhanceTime;
@property(retain, nonatomic) NSDate *startEnhanceTime; // @synthesize startEnhanceTime=_startEnhanceTime;
@property(retain, nonatomic) NSDate *getResultTime; // @synthesize getResultTime=_getResultTime;
@property(retain, nonatomic) NSDate *endUploadTime; // @synthesize endUploadTime=_endUploadTime;
@property(retain, nonatomic) NSDate *startUploadTime; // @synthesize startUploadTime=_startUploadTime;
@property(retain, nonatomic) NSDate *captureTime; // @synthesize captureTime=_captureTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned int enhanceCount; // @synthesize enhanceCount=_enhanceCount;
@property(nonatomic) unsigned long long enhanceModelCostTime; // @synthesize enhanceModelCostTime=_enhanceModelCostTime;
@property(nonatomic) _Bool isBizImgTranslating; // @synthesize isBizImgTranslating=_isBizImgTranslating;
@property(nonatomic) unsigned int hasSaveOrigin; // @synthesize hasSaveOrigin=_hasSaveOrigin;
@property(nonatomic) unsigned int hasSaveResult; // @synthesize hasSaveResult=_hasSaveResult;
@property(nonatomic) unsigned int showOriginCount; // @synthesize showOriginCount=_showOriginCount;
@property(nonatomic) unsigned int result; // @synthesize result=_result;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(readonly, nonatomic) unsigned long long translateExposeCost;
@property(readonly, nonatomic) unsigned long long totalCost;
@property(readonly, nonatomic) unsigned long long firstEnhanceCost;
@property(readonly, nonatomic) unsigned long long ocrTotalCost;
@property(readonly, nonatomic) unsigned long long ocrTranslateCost;
@property(readonly, nonatomic) unsigned long long uploadCost;
@property(readonly, nonatomic) unsigned long long captureCost;
- (void)reset;
- (void)reportExitAction;
- (void)reportExposeAction;

@end

