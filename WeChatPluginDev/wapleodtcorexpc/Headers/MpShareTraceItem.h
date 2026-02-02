//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MpShareTraceItem
{
    _Bool _hasFinderElement;
    NSString *_lastGMsgID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastGMsgID; // @synthesize lastGMsgID=_lastGMsgID;
@property(nonatomic) _Bool hasFinderElement; // @synthesize hasFinderElement=_hasFinderElement;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

