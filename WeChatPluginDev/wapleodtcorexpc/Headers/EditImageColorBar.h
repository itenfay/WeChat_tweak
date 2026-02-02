//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditImageColor, NSArray, NSMutableArray;
@protocol EditImageColorBarDeleagate;

@interface EditImageColorBar
{
    unsigned long long m_selectedIndex;
    NSMutableArray *m_colorDotViews;
    id <EditImageColorBarDeleagate> _delegate;
    NSArray *_colorArray;
    double _selectedSizeLen;
    double _unselectedSizeLen;
}

- (void).cxx_destruct;
@property(nonatomic) double unselectedSizeLen; // @synthesize unselectedSizeLen=_unselectedSizeLen;
@property(nonatomic) double selectedSizeLen; // @synthesize selectedSizeLen=_selectedSizeLen;
@property(retain, nonatomic) NSArray *colorArray; // @synthesize colorArray=_colorArray;
@property(nonatomic) __weak id <EditImageColorBarDeleagate> delegate; // @synthesize delegate=_delegate;
- (void)onDotViewClick:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) EditImageColor *selectedColor;
- (double)preferWidthWithUnselectedPadding:(double)arg1;

@end

