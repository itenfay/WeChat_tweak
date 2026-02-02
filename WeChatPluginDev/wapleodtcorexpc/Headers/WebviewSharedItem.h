//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WebviewSharedItem
{
    NSString *_m_nsJsAppId;
    NSString *_m_nsPublisherId;
    NSString *_m_nsPublisherReqId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsPublisherReqId; // @synthesize m_nsPublisherReqId=_m_nsPublisherReqId;
@property(retain, nonatomic) NSString *m_nsPublisherId; // @synthesize m_nsPublisherId=_m_nsPublisherId;
@property(retain, nonatomic) NSString *m_nsJsAppId; // @synthesize m_nsJsAppId=_m_nsJsAppId;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

