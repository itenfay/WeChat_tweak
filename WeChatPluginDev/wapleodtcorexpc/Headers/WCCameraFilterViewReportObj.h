//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCCameraFilterViewReportObj : NSObject
{
    unsigned long long _filterOriginal;
    unsigned long long _filterNatural;
    unsigned long long _filterWhiteSkin;
    unsigned long long _filterVitality;
    unsigned long long _filterMatte;
    unsigned long long _filterClear;
    unsigned long long _filterSunset;
    unsigned long long _filterProfound;
    unsigned long long _filterAutumn;
    unsigned long long _filterDeliciousFood;
    unsigned long long _filterBlues;
    unsigned long long _filterMax;
}

@property(nonatomic) unsigned long long filterMax; // @synthesize filterMax=_filterMax;
@property(nonatomic) unsigned long long filterBlues; // @synthesize filterBlues=_filterBlues;
@property(nonatomic) unsigned long long filterDeliciousFood; // @synthesize filterDeliciousFood=_filterDeliciousFood;
@property(nonatomic) unsigned long long filterAutumn; // @synthesize filterAutumn=_filterAutumn;
@property(nonatomic) unsigned long long filterProfound; // @synthesize filterProfound=_filterProfound;
@property(nonatomic) unsigned long long filterSunset; // @synthesize filterSunset=_filterSunset;
@property(nonatomic) unsigned long long filterClear; // @synthesize filterClear=_filterClear;
@property(nonatomic) unsigned long long filterMatte; // @synthesize filterMatte=_filterMatte;
@property(nonatomic) unsigned long long filterVitality; // @synthesize filterVitality=_filterVitality;
@property(nonatomic) unsigned long long filterWhiteSkin; // @synthesize filterWhiteSkin=_filterWhiteSkin;
@property(nonatomic) unsigned long long filterNatural; // @synthesize filterNatural=_filterNatural;
@property(nonatomic) unsigned long long filterOriginal; // @synthesize filterOriginal=_filterOriginal;
- (id)genReportDictWithType:(unsigned long long)arg1;
- (void)updateProModeViewState:(unsigned long long)arg1 withType:(unsigned long long)arg2;

@end

