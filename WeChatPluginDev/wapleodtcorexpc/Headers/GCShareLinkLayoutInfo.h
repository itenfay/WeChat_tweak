//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIFont;

@interface GCShareLinkLayoutInfo
{
    double _imageSize;
    UIFont *_titleFont;
    UIFont *_descFont;
    double _titleHeight;
    double _descHeight;
    double _titleLeftMargin;
    double _titleRightMargin;
    double _labelSpace;
    double _labelContentWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double labelContentWidth; // @synthesize labelContentWidth=_labelContentWidth;
@property(nonatomic) double labelSpace; // @synthesize labelSpace=_labelSpace;
@property(nonatomic) double titleRightMargin; // @synthesize titleRightMargin=_titleRightMargin;
@property(nonatomic) double titleLeftMargin; // @synthesize titleLeftMargin=_titleLeftMargin;
@property(nonatomic) double descHeight; // @synthesize descHeight=_descHeight;
@property(nonatomic) double titleHeight; // @synthesize titleHeight=_titleHeight;
@property(retain, nonatomic) UIFont *descFont; // @synthesize descFont=_descFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) double imageSize; // @synthesize imageSize=_imageSize;
- (id)init;

@end

