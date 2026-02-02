//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAScreenVideoInfo
{
    NSString *_videobuttontext;
    NSString *_videomd5;
    NSString *_videoremoteurl;
    NSString *_videothumburl;
    NSString *_videoplaydesc;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *videoplaydesc; // @synthesize videoplaydesc=_videoplaydesc;
@property(copy, nonatomic) NSString *videothumburl; // @synthesize videothumburl=_videothumburl;
@property(copy, nonatomic) NSString *videoremoteurl; // @synthesize videoremoteurl=_videoremoteurl;
@property(copy, nonatomic) NSString *videomd5; // @synthesize videomd5=_videomd5;
@property(copy, nonatomic) NSString *videobuttontext; // @synthesize videobuttontext=_videobuttontext;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

