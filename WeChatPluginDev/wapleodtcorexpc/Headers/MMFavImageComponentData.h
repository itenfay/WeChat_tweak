//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicInfo, MMMusicShareItem, NSArray, NSString, TingShareCategoryItem, TingShareListenItem, UIImage;

@interface MMFavImageComponentData
{
    _Bool _largeFilePossible;
    _Bool _isCDN;
    _Bool _bUseWebImgView;
    _Bool _fromWebPage;
    unsigned int _itemShowType;
    unsigned int _favId;
    unsigned int _liteAppItemShowType;
    long long _favType;
    NSString *_dataFmt;
    NSString *_thumbUrl;
    NSString *_ThumbPath;
    NSString *_CDNThumbUrl;
    NSString *_CDNThumbKey;
    unsigned long long _CDNThumbSize;
    NSString *_defaultThumbPath;
    NSString *_ocr;
    NSString *_WebImgUrl;
    UIImage *_icon;
    NSString *_accessibilityString;
    MMMusicInfo *_musicInfo;
    MMMusicShareItem *_musicShareItem;
    TingShareListenItem *_tingListenItem;
    TingShareCategoryItem *_tingCategoryItem;
    NSArray *_dataList;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int liteAppItemShowType; // @synthesize liteAppItemShowType=_liteAppItemShowType;
@property(nonatomic) unsigned int favId; // @synthesize favId=_favId;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) TingShareCategoryItem *tingCategoryItem; // @synthesize tingCategoryItem=_tingCategoryItem;
@property(retain, nonatomic) TingShareListenItem *tingListenItem; // @synthesize tingListenItem=_tingListenItem;
@property(retain, nonatomic) MMMusicShareItem *musicShareItem; // @synthesize musicShareItem=_musicShareItem;
@property(retain, nonatomic) MMMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(retain, nonatomic) NSString *accessibilityString; // @synthesize accessibilityString=_accessibilityString;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool fromWebPage; // @synthesize fromWebPage=_fromWebPage;
@property(copy, nonatomic) NSString *WebImgUrl; // @synthesize WebImgUrl=_WebImgUrl;
@property(nonatomic) _Bool bUseWebImgView; // @synthesize bUseWebImgView=_bUseWebImgView;
@property(retain, nonatomic) NSString *ocr; // @synthesize ocr=_ocr;
@property(retain, nonatomic) NSString *defaultThumbPath; // @synthesize defaultThumbPath=_defaultThumbPath;
@property(nonatomic) unsigned long long CDNThumbSize; // @synthesize CDNThumbSize=_CDNThumbSize;
@property(retain, nonatomic) NSString *CDNThumbKey; // @synthesize CDNThumbKey=_CDNThumbKey;
@property(retain, nonatomic) NSString *CDNThumbUrl; // @synthesize CDNThumbUrl=_CDNThumbUrl;
@property(retain, nonatomic) NSString *ThumbPath; // @synthesize ThumbPath=_ThumbPath;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *dataFmt; // @synthesize dataFmt=_dataFmt;
@property(nonatomic) _Bool isCDN; // @synthesize isCDN=_isCDN;
@property(nonatomic) _Bool largeFilePossible; // @synthesize largeFilePossible=_largeFilePossible;
@property(nonatomic) unsigned int itemShowType; // @synthesize itemShowType=_itemShowType;
@property(nonatomic) long long favType; // @synthesize favType=_favType;
- (id)init;

@end

