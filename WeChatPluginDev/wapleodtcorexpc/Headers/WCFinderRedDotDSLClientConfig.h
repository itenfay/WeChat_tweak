//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderRedDotDSLClientConfig : NSObject
{
    _Bool _enableAbbreviate;
    _Bool _ignoreDSLWidthLimit;
    double _exceedWidth;
}

@property(nonatomic) double exceedWidth; // @synthesize exceedWidth=_exceedWidth;
@property(nonatomic) _Bool ignoreDSLWidthLimit; // @synthesize ignoreDSLWidthLimit=_ignoreDSLWidthLimit;
@property(nonatomic) _Bool enableAbbreviate; // @synthesize enableAbbreviate=_enableAbbreviate;

@end

