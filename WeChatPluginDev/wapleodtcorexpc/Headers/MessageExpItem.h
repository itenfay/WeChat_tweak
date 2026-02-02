//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MessageExpItem
{
    _Bool bNeedUpdateTitle;
    _Bool bNeedUpdateDesc;
    _Bool bAppMsgDefaultThumb;
    _Bool bNeedHiddenAppTail;
    unsigned int uiImageDownloadControlType;
    unsigned int uiSightDownloadControlType;
    NSString *nsExpIdStr;
    NSString *nsAppMsgTitle;
    NSString *nsAppMsgDesc;
}

+ (id)genExpXMLFromMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int uiSightDownloadControlType; // @synthesize uiSightDownloadControlType;
@property(nonatomic) unsigned int uiImageDownloadControlType; // @synthesize uiImageDownloadControlType;
@property(nonatomic) _Bool bNeedHiddenAppTail; // @synthesize bNeedHiddenAppTail;
@property(nonatomic) _Bool bAppMsgDefaultThumb; // @synthesize bAppMsgDefaultThumb;
@property(retain, nonatomic) NSString *nsAppMsgDesc; // @synthesize nsAppMsgDesc;
@property(nonatomic) _Bool bNeedUpdateDesc; // @synthesize bNeedUpdateDesc;
@property(retain, nonatomic) NSString *nsAppMsgTitle; // @synthesize nsAppMsgTitle;
@property(nonatomic) _Bool bNeedUpdateTitle; // @synthesize bNeedUpdateTitle;
@property(retain, nonatomic) NSString *nsExpIdStr; // @synthesize nsExpIdStr;
- (_Bool)isExpValid;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

