//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WADynamicPageInfo
{
    _Bool _shouldUseDynamicPage;
    NSString *_cacheKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(nonatomic) _Bool shouldUseDynamicPage; // @synthesize shouldUseDynamicPage=_shouldUseDynamicPage;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

