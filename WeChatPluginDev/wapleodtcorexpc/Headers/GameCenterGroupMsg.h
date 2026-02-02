//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface GameCenterGroupMsg
{
    int _subType;
    NSString *_topicTitle;
    NSString *_reply;
    NSString *_commentToReply;
    NSString *_topicUrl;
    NSString *_sourceUrl;
    NSString *_groupName;
    NSString *_groupUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *groupUrl; // @synthesize groupUrl=_groupUrl;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
@property(retain, nonatomic) NSString *topicUrl; // @synthesize topicUrl=_topicUrl;
@property(retain, nonatomic) NSString *commentToReply; // @synthesize commentToReply=_commentToReply;
@property(retain, nonatomic) NSString *reply; // @synthesize reply=_reply;
@property(retain, nonatomic) NSString *topicTitle; // @synthesize topicTitle=_topicTitle;
@property(nonatomic) int subType; // @synthesize subType=_subType;
- (id)getMsgCenterContent;
- (id)initWithXmlNode:(struct XmlReaderNode_t *)arg1;

@end

