//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAssetImageGenerator;

@interface WCFinderVideoAnalysisMgr : NSObject
{
    AVAssetImageGenerator *_coverGenerator;
}

+ (id)convertRGBToHSL:(id)arg1;
+ (id)hsvArray:(id)arg1;
+ (id)formatRawWCFinderHSVModel:(id)arg1;
+ (id)totalFormatValue:(id)arg1;
+ (id)getFrequencyDicBy:(id)arg1;
+ (id)getImageHSVFrequencyDicByImage:(id)arg1;
+ (double)getHCRBetweenFrequencyFrom:(id)arg1 frequencyDicJ:(id)arg2;
+ (id)getWeightedByRaw:(id)arg1 curFrequencyDic:(id)arg2 len:(unsigned long long)arg3;
+ (id)genNewImageGeneratorByVideoPath:(id)arg1;
+ (unsigned long long)getImageColorfulIndex:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) AVAssetImageGenerator *coverGenerator; // @synthesize coverGenerator=_coverGenerator;
- (void)getVideoLensCount:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;

@end

