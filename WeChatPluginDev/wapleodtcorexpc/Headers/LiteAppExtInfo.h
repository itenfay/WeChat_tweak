//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface LiteAppExtInfo
{
    int _priority;
    NSString *_liteAppBizData;
}

- (void).cxx_destruct;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *liteAppBizData; // @synthesize liteAppBizData=_liteAppBizData;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

