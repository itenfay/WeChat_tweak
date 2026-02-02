//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmojiInfoObj, NSString;

@interface EmoticonMd5Object
{
    _Bool _needRecoverHighPriority;
    unsigned int _m_status;
    unsigned int _emojiInfoValidVersion;
    NSString *_m_md5;
    EmojiInfoObj *_emojiInfoObj;
}

+ (void)initialize;
+ (void)PBArrayAdd_emojiInfoValidVersion;
+ (void)PBArrayAdd_emojiInfoObj;
+ (void)PBArrayAdd_m_status;
+ (void)PBArrayAdd_m_md5;
- (void).cxx_destruct;
@property(nonatomic) unsigned int emojiInfoValidVersion; // @synthesize emojiInfoValidVersion=_emojiInfoValidVersion;
@property(retain, nonatomic) EmojiInfoObj *emojiInfoObj; // @synthesize emojiInfoObj=_emojiInfoObj;
@property(nonatomic) unsigned int m_status; // @synthesize m_status=_m_status;
@property(retain, nonatomic) NSString *m_md5; // @synthesize m_md5=_m_md5;
@property(nonatomic) _Bool needRecoverHighPriority; // @synthesize needRecoverHighPriority=_needRecoverHighPriority;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool isEmojiInfoValid; // @dynamic isEmojiInfoValid;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

