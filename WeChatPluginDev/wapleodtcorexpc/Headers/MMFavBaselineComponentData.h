//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavoritesItem, NSArray, NSString, UIImage;

@interface MMFavBaselineComponentData
{
    _Bool _bShowDataSize;
    _Bool _shouldHideSourceNameLabel;
    unsigned int _uiFavUpDateTime;
    unsigned int _usedTimes;
    unsigned long long _cellStyle;
    NSString *_authorName;
    NSString *_nameId;
    unsigned long long _dataSize;
    NSArray *_tagList;
    FavoritesItem *_item;
    UIImage *_logoImage;
    NSString *_nameTailContent;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldHideSourceNameLabel; // @synthesize shouldHideSourceNameLabel=_shouldHideSourceNameLabel;
@property(retain, nonatomic) NSString *nameTailContent; // @synthesize nameTailContent=_nameTailContent;
@property(retain, nonatomic) UIImage *logoImage; // @synthesize logoImage=_logoImage;
@property(retain, nonatomic) FavoritesItem *item; // @synthesize item=_item;
@property(retain, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(nonatomic) _Bool bShowDataSize; // @synthesize bShowDataSize=_bShowDataSize;
@property(nonatomic) unsigned int usedTimes; // @synthesize usedTimes=_usedTimes;
@property(nonatomic) unsigned long long dataSize; // @synthesize dataSize=_dataSize;
@property(retain, nonatomic) NSString *nameId; // @synthesize nameId=_nameId;
@property(retain, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(nonatomic) unsigned int uiFavUpDateTime; // @synthesize uiFavUpDateTime=_uiFavUpDateTime;
@property(nonatomic) unsigned long long cellStyle; // @synthesize cellStyle=_cellStyle;
- (void)fixComponentWidth;

@end

