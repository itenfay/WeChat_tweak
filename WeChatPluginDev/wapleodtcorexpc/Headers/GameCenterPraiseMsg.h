//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface GameCenterPraiseMsg
{
    NSString *_praiseContent;
    NSString *_rankDesc;
    NSString *_rankIconUrl;
    NSString *_rankJumpUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *rankJumpUrl; // @synthesize rankJumpUrl=_rankJumpUrl;
@property(retain, nonatomic) NSString *rankIconUrl; // @synthesize rankIconUrl=_rankIconUrl;
@property(retain, nonatomic) NSString *rankDesc; // @synthesize rankDesc=_rankDesc;
@property(retain, nonatomic) NSString *praiseContent; // @synthesize praiseContent=_praiseContent;
- (id)getMsgCenterContent;
- (id)initWithXmlNode:(struct XmlReaderNode_t *)arg1;

@end

