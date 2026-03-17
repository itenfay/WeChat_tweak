//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BrandMsgValidExposeConfig : NSObject
{
    unsigned int _validExposureAreaRatioInPct;
    unsigned int _validExposurePeriodInMs;
}

@property(nonatomic) unsigned int validExposurePeriodInMs; // @synthesize validExposurePeriodInMs=_validExposurePeriodInMs;
@property(nonatomic) unsigned int validExposureAreaRatioInPct; // @synthesize validExposureAreaRatioInPct=_validExposureAreaRatioInPct;
- (id)description;

@end

