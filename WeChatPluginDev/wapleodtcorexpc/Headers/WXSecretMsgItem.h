//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WXSecretMsgItem
{
    _Bool _isScrectMsg;
}

@property(nonatomic) _Bool isScrectMsg; // @synthesize isScrectMsg=_isScrectMsg;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

