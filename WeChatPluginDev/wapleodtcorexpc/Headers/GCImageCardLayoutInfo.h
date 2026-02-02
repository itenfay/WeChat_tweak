//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIFont;

@interface GCImageCardLayoutInfo
{
    double _innerContentWidth;
    UIFont *_titleFont;
    double _titleHeight;
    double _titleTopOffset;
    double _contentMarginWidth;
    double _playBtnSize;
}

- (void).cxx_destruct;
@property(nonatomic) double playBtnSize; // @synthesize playBtnSize=_playBtnSize;
@property(nonatomic) double contentMarginWidth; // @synthesize contentMarginWidth=_contentMarginWidth;
@property(nonatomic) double titleTopOffset; // @synthesize titleTopOffset=_titleTopOffset;
@property(nonatomic) double titleHeight; // @synthesize titleHeight=_titleHeight;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) double innerContentWidth; // @synthesize innerContentWidth=_innerContentWidth;
- (id)init;

@end

