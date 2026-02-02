//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface AppBrandExtInfo
{
    int _priority;
    NSString *_liteGameInfo;
}

- (void).cxx_destruct;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *liteGameInfo; // @synthesize liteGameInfo=_liteGameInfo;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

