//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCLabelDynamicLayout;

@interface GCSheetCardLayoutProvider
{
    int _rowCnt;
    int _cowCnt;
    GCLabelDynamicLayout *_headLabelLayout;
    GCLabelDynamicLayout *_multiLabelRowLayout;
    GCLabelDynamicLayout *_multiLabelRowBoldLayout;
    double _headLineLabelBtmSpace;
    double _contentHeight;
    struct UIEdgeInsets _labelGroupEdgeInsets;
}

- (void).cxx_destruct;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) int cowCnt; // @synthesize cowCnt=_cowCnt;
@property(nonatomic) int rowCnt; // @synthesize rowCnt=_rowCnt;
@property(nonatomic) struct UIEdgeInsets labelGroupEdgeInsets; // @synthesize labelGroupEdgeInsets=_labelGroupEdgeInsets;
@property(nonatomic) double headLineLabelBtmSpace; // @synthesize headLineLabelBtmSpace=_headLineLabelBtmSpace;
@property(retain, nonatomic) GCLabelDynamicLayout *multiLabelRowBoldLayout; // @synthesize multiLabelRowBoldLayout=_multiLabelRowBoldLayout;
@property(retain, nonatomic) GCLabelDynamicLayout *multiLabelRowLayout; // @synthesize multiLabelRowLayout=_multiLabelRowLayout;
@property(retain, nonatomic) GCLabelDynamicLayout *headLabelLayout; // @synthesize headLabelLayout=_headLabelLayout;
- (id)init;

@end

