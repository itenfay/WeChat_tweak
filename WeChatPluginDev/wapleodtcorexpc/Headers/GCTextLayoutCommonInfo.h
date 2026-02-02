//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIFont;

@interface GCTextLayoutCommonInfo
{
    UIFont *_sysTitleFont;
    double _sysTitleHeight;
    double _sysTitleTopOffset;
    double _sysTitleMarginWidth;
    double _sysTitleToContentMargin;
}

- (void).cxx_destruct;
@property(nonatomic) double sysTitleToContentMargin; // @synthesize sysTitleToContentMargin=_sysTitleToContentMargin;
@property(nonatomic) double sysTitleMarginWidth; // @synthesize sysTitleMarginWidth=_sysTitleMarginWidth;
@property(nonatomic) double sysTitleTopOffset; // @synthesize sysTitleTopOffset=_sysTitleTopOffset;
@property(nonatomic) double sysTitleHeight; // @synthesize sysTitleHeight=_sysTitleHeight;
@property(retain, nonatomic) UIFont *sysTitleFont; // @synthesize sysTitleFont=_sysTitleFont;
- (id)init;

@end

