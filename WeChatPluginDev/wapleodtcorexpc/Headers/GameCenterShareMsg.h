//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameCenterMsgShareInfo;

@interface GameCenterShareMsg
{
    GameCenterMsgShareInfo *_shareInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GameCenterMsgShareInfo *shareInfo; // @synthesize shareInfo=_shareInfo;
- (id)getMsgCenterContent;
- (id)initWithXmlNode:(struct XmlReaderNode_t *)arg1;

@end

