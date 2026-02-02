//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface UITableViewSectionExposureInfo
{
    unsigned long long _sectionIndex;
    double _exposureRatio;
    struct CGRect _intersectionRect;
    struct CGRect _sectionRect;
}

@property(nonatomic) double exposureRatio; // @synthesize exposureRatio=_exposureRatio;
@property(nonatomic) struct CGRect sectionRect; // @synthesize sectionRect=_sectionRect;
@property(nonatomic) struct CGRect intersectionRect; // @synthesize intersectionRect=_intersectionRect;
@property(nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;

@end

