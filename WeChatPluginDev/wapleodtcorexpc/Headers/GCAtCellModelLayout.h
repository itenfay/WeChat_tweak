//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCLabelDynamicLayout;

@interface GCAtCellModelLayout
{
    double _headWidth;
    double _avatarToTitleSpace;
    GCLabelDynamicLayout *_titleLabelLayout;
    double _titleToSubTitleSpace;
    GCLabelDynamicLayout *_subTitleLayout;
    double _selectedImgWidth;
    double _cellHeight;
    double _totalHeight;
    struct UIEdgeInsets _collectionViewInset;
}

- (void).cxx_destruct;
@property(nonatomic) double totalHeight; // @synthesize totalHeight=_totalHeight;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) struct UIEdgeInsets collectionViewInset; // @synthesize collectionViewInset=_collectionViewInset;
@property(nonatomic) double selectedImgWidth; // @synthesize selectedImgWidth=_selectedImgWidth;
@property(retain, nonatomic) GCLabelDynamicLayout *subTitleLayout; // @synthesize subTitleLayout=_subTitleLayout;
@property(nonatomic) double titleToSubTitleSpace; // @synthesize titleToSubTitleSpace=_titleToSubTitleSpace;
@property(retain, nonatomic) GCLabelDynamicLayout *titleLabelLayout; // @synthesize titleLabelLayout=_titleLabelLayout;
@property(nonatomic) double avatarToTitleSpace; // @synthesize avatarToTitleSpace=_avatarToTitleSpace;
@property(nonatomic) double headWidth; // @synthesize headWidth=_headWidth;
- (id)init;

@end

