//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppBrandExtInfo, LiteAppExtInfo, NSString;

@interface GameShareCardItem
{
    unsigned int _isExposed;
    unsigned int _isVideo;
    unsigned int _duration;
    LiteAppExtInfo *_liteAppExtInfo;
    AppBrandExtInfo *_appBrandExtInfo;
    NSString *_gameShareId;
    NSString *_shareData;
    NSString *_readText;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned int isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic) unsigned int isExposed; // @synthesize isExposed=_isExposed;
@property(retain, nonatomic) NSString *readText; // @synthesize readText=_readText;
@property(retain, nonatomic) NSString *shareData; // @synthesize shareData=_shareData;
@property(retain, nonatomic) NSString *gameShareId; // @synthesize gameShareId=_gameShareId;
@property(retain, nonatomic) AppBrandExtInfo *appBrandExtInfo; // @synthesize appBrandExtInfo=_appBrandExtInfo;
@property(retain, nonatomic) LiteAppExtInfo *liteAppExtInfo; // @synthesize liteAppExtInfo=_liteAppExtInfo;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

