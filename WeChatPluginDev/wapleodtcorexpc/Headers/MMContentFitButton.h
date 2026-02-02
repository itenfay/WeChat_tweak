//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMContentFitButton
{
    _Bool _hideIfShrinked;
    double _expandWidth;
    double _expandHeight;
    double _fHeight;
}

@property(nonatomic) _Bool hideIfShrinked; // @synthesize hideIfShrinked=_hideIfShrinked;
@property(nonatomic) double fHeight; // @synthesize fHeight=_fHeight;
@property(nonatomic) double expandHeight; // @synthesize expandHeight=_expandHeight;
@property(nonatomic) double expandWidth; // @synthesize expandWidth=_expandWidth;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;

@end

