//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMFinderLivePivotScrollDownEducationViewModel
{
    double _tipsHeight;
    double _tipsAlpha;
}

@property(nonatomic) double tipsAlpha; // @synthesize tipsAlpha=_tipsAlpha;
@property(nonatomic) double tipsHeight; // @synthesize tipsHeight=_tipsHeight;
- (id)tipsString;
- (id)arrowImageName;
- (double)tipsTop;
- (double)arrowIconTop;
- (double)tipsViewDefaultHeight;
- (double)tipsViewMaxHeight;
- (double)backgroundViewY;
- (void)onScrollViewDidScroll:(id)arg1;

@end

