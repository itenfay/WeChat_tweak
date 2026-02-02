//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface GameGroupSectionModelLayout
{
    double _labelHeight;
    double _fontSize;
    double _totalHeight;
    struct UIEdgeInsets _edgeInsets;
}

@property(nonatomic) double totalHeight; // @synthesize totalHeight=_totalHeight;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) double labelHeight; // @synthesize labelHeight=_labelHeight;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (id)init;

@end

