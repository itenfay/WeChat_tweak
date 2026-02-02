//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTLiveSectionBarCellView, BrandFinderLiveInfo, NSArray;

@interface BTLiveSectionData
{
    _Bool _isLiveBarExpand;
    NSArray *_arrLiveInfo;
    NSArray *_arrItemViewModel;
    BTLiveSectionBarCellView *_cellView;
    BrandFinderLiveInfo *_redDotLiveInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BrandFinderLiveInfo *redDotLiveInfo; // @synthesize redDotLiveInfo=_redDotLiveInfo;
@property(nonatomic) _Bool isLiveBarExpand; // @synthesize isLiveBarExpand=_isLiveBarExpand;
@property(nonatomic) __weak BTLiveSectionBarCellView *cellView; // @synthesize cellView=_cellView;
@property(retain, nonatomic) NSArray *arrItemViewModel; // @synthesize arrItemViewModel=_arrItemViewModel;
@property(retain, nonatomic) NSArray *arrLiveInfo; // @synthesize arrLiveInfo=_arrLiveInfo;
- (id)genItemViewModelWithLiveInfo:(id)arg1;
- (void)initItemViewModelList;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (long long)numberOfRowsInSection;
- (unsigned long long)sectionType;
- (void)updateWithArrLiveInfo:(id)arg1 mainCellRedDotLiveInfo:(id)arg2;
- (void)setIsExpand:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isExpand;
- (id)initWithSectionWidth:(double)arg1 arrLiveInfo:(id)arg2 mainCellRedDotLiveInfo:(id)arg3 delegate:(id)arg4;

@end

