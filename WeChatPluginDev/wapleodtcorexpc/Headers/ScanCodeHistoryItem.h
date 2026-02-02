//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface ScanCodeHistoryItem
{
    _Bool _isFromAlbum;
    _Bool _isFromCombineTab;
    int _fromScene;
    int _version;
    int _networkType;
    NSString *_codeUrl;
    NSString *_timeString;
    NSString *_type;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFromCombineTab; // @synthesize isFromCombineTab=_isFromCombineTab;
@property(nonatomic) int networkType; // @synthesize networkType=_networkType;
@property(nonatomic) _Bool isFromAlbum; // @synthesize isFromAlbum=_isFromAlbum;
@property(nonatomic) int version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) int fromScene; // @synthesize fromScene=_fromScene;
@property(copy, nonatomic) NSString *timeString; // @synthesize timeString=_timeString;
@property(copy, nonatomic) NSString *codeUrl; // @synthesize codeUrl=_codeUrl;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

