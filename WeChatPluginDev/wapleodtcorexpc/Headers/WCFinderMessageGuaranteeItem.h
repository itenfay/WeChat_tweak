//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderMessageGuaranteeItem
{
    NSString *_title;
    NSString *_desc;
    NSString *_relativePath;
    NSString *_appid;
    NSString *_scene;
}

+ (id)xmlNodeName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *relativePath; // @synthesize relativePath=_relativePath;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)toXML;
- (void)fromXML:(struct XmlReaderNode_t *)arg1;

@end

