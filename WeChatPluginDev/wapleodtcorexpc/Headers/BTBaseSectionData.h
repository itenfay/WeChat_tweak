//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol BTBaseSectionDataDelegate;

@interface BTBaseSectionData
{
    double _sectionWidth;
    id <BTBaseSectionDataDelegate> _delegate;
}

+ (_Bool)isFunctionalSecionType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <BTBaseSectionDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double sectionWidth; // @synthesize sectionWidth=_sectionWidth;
- (id)identifierWithRow:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long sectionType;
@property(readonly, nonatomic) double viewHeight;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (long long)numberOfRowsInSection;
- (id)initWithSectionWidth:(double)arg1;

@end

