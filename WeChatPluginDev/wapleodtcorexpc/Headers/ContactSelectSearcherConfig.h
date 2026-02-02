//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface ContactSelectSearcherConfig : NSObject
{
    _Bool _colorProxyUseDarkMode;
    UIColor *_searchFieldColor;
    UIColor *_searchFieldTextColor;
    UIColor *_searchPlaceHolderIconColor;
    double _searchFieldCornerRadius;
    double _searchBarHeight;
    double _searchBarWidth;
    UIColor *_footerTextColor;
    UIColor *_emptySeperatorColorColor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool colorProxyUseDarkMode; // @synthesize colorProxyUseDarkMode=_colorProxyUseDarkMode;
@property(retain, nonatomic) UIColor *emptySeperatorColorColor; // @synthesize emptySeperatorColorColor=_emptySeperatorColorColor;
@property(retain, nonatomic) UIColor *footerTextColor; // @synthesize footerTextColor=_footerTextColor;
@property(nonatomic) double searchBarWidth; // @synthesize searchBarWidth=_searchBarWidth;
@property(nonatomic) double searchBarHeight; // @synthesize searchBarHeight=_searchBarHeight;
@property(nonatomic) double searchFieldCornerRadius; // @synthesize searchFieldCornerRadius=_searchFieldCornerRadius;
@property(retain, nonatomic) UIColor *searchPlaceHolderIconColor; // @synthesize searchPlaceHolderIconColor=_searchPlaceHolderIconColor;
@property(retain, nonatomic) UIColor *searchFieldTextColor; // @synthesize searchFieldTextColor=_searchFieldTextColor;
@property(retain, nonatomic) UIColor *searchFieldColor; // @synthesize searchFieldColor=_searchFieldColor;
- (id)init;

@end

