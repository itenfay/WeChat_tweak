//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MMSearchEmotWrap : NSObject
{
    _Bool _disableAddSticker;
    _Bool _isGenSticker;
    unsigned int _searchScene;
    unsigned int _type;
    unsigned int _fromSearchType;
    unsigned int _weappVersion;
    NSString *_searchID;
    NSString *_docID;
    NSString *_title;
    unsigned long long _sourceType;
    NSString *_md5;
    NSString *_encryptUrl;
    NSString *_aesKey;
    NSString *_thumbUrl;
    NSString *_designerId;
    NSString *_designerName;
    NSString *_designerThumbUrl;
    NSString *_productID;
    NSString *_productName;
    NSString *_productUrl;
    NSString *_activityId;
    NSString *_sourceUrl;
    NSString *_sourceName;
    NSData *_imgData;
    NSString *_weappUsrName;
    NSString *_brandUserName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *brandUserName; // @synthesize brandUserName=_brandUserName;
@property(nonatomic) unsigned int weappVersion; // @synthesize weappVersion=_weappVersion;
@property(retain, nonatomic) NSString *weappUsrName; // @synthesize weappUsrName=_weappUsrName;
@property(nonatomic) _Bool isGenSticker; // @synthesize isGenSticker=_isGenSticker;
@property(nonatomic) _Bool disableAddSticker; // @synthesize disableAddSticker=_disableAddSticker;
@property(retain, nonatomic) NSData *imgData; // @synthesize imgData=_imgData;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSString *productUrl; // @synthesize productUrl=_productUrl;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *productID; // @synthesize productID=_productID;
@property(retain, nonatomic) NSString *designerThumbUrl; // @synthesize designerThumbUrl=_designerThumbUrl;
@property(retain, nonatomic) NSString *designerName; // @synthesize designerName=_designerName;
@property(retain, nonatomic) NSString *designerId; // @synthesize designerId=_designerId;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(retain, nonatomic) NSString *encryptUrl; // @synthesize encryptUrl=_encryptUrl;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) unsigned int fromSearchType; // @synthesize fromSearchType=_fromSearchType;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *docID; // @synthesize docID=_docID;
@property(retain, nonatomic) NSString *searchID; // @synthesize searchID=_searchID;
@property(nonatomic) unsigned int searchScene; // @synthesize searchScene=_searchScene;
- (id)emoticonWrap;

@end

