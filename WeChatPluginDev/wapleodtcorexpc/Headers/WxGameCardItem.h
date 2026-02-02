//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WxGameCardItem
{
    unsigned int _msgtype;
    NSString *_frameSetName;
    NSString *_mbCardData;
    NSString *_minPkgVersion;
    NSString *_clientExtInfo;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int msgtype; // @synthesize msgtype=_msgtype;
@property(retain, nonatomic) NSString *clientExtInfo; // @synthesize clientExtInfo=_clientExtInfo;
@property(retain, nonatomic) NSString *minPkgVersion; // @synthesize minPkgVersion=_minPkgVersion;
@property(retain, nonatomic) NSString *mbCardData; // @synthesize mbCardData=_mbCardData;
@property(retain, nonatomic) NSString *frameSetName; // @synthesize frameSetName=_frameSetName;
- (void)parseClientExtInfo;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (_Bool)canShowNotice;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

