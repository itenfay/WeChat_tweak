//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;

@interface AnimateEmojiConfig
{
    unsigned long long _emojiAnimVersion;
    NSMutableDictionary *_nodes;
}

+ (id)xmlFileName;
+ (id)fromConfigPath:(id)arg1 resDir:(id)arg2;
+ (id)fromXML:(struct XmlReaderNode_t *)arg1 resDir:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *nodes; // @synthesize nodes=_nodes;
@property(nonatomic) unsigned long long emojiAnimVersion; // @synthesize emojiAnimVersion=_emojiAnimVersion;
- (id)debugDescription;
- (id)init;

@end

