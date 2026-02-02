//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE, NSString;

@interface _TtC6WeChat6MEMeta
{
    MISSING_TYPE *ext;
    MISSING_TYPE *emojiKey;
    MISSING_TYPE *isFrom;
    MISSING_TYPE *msgId;
    MISSING_TYPE *msgType;
    MISSING_TYPE *fromUserName;
    MISSING_TYPE *toUserName;
    MISSING_TYPE *emojiConfigVersion;
    MISSING_TYPE *content;
}

- (void).cxx_destruct;
- (id)init;
- (id)toDictionary;
@property(nonatomic, copy) NSString *content;
@property(nonatomic) long long emojiConfigVersion; // @synthesize emojiConfigVersion;
@property(nonatomic, copy) NSString *toUserName;
@property(nonatomic, copy) NSString *fromUserName;
@property(nonatomic) unsigned int msgType; // @synthesize msgType;
@property(nonatomic) unsigned int msgId; // @synthesize msgId;
@property(nonatomic) _Bool isFrom; // @synthesize isFrom;
@property(nonatomic, copy) NSString *emojiKey;
@property(nonatomic, copy) NSString *ext;

@end

