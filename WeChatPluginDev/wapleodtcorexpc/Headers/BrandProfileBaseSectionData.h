//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface BrandProfileBaseSectionData
{
    double _sectionWidth;
}

@property(readonly, nonatomic) double sectionWidth; // @synthesize sectionWidth=_sectionWidth;
@property(readonly, nonatomic) double sectionHeight;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (double)heightForHeaderInSection;
- (long long)numberOfRowsInSection;
- (void)updateSectionWidth:(double)arg1;
- (id)initWithSectionWidth:(double)arg1;

@end

