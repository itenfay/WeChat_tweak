//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandProfileMessageSectionData, BrandProfileMsgBaseCell;

@interface BrandProfileMsgBaseViewModel
{
    double _cellHeight;
    BrandProfileMsgBaseCell *_cellView;
    BrandProfileMessageSectionData *_sectionData;
}

- (void).cxx_destruct;
@property(nonatomic) __weak BrandProfileMessageSectionData *sectionData; // @synthesize sectionData=_sectionData;
@property(nonatomic) __weak BrandProfileMsgBaseCell *cellView; // @synthesize cellView=_cellView;
- (id)tableViewCellClassName;
- (void)clearLayoutCache;
- (double)calCellHeight;
@property(readonly, nonatomic) double cellHeight;
@property(readonly, nonatomic) double cellWidth;

@end

