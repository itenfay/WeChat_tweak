//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, ScreenEffectNode;

@interface AnimateEmojiNode
{
    NSString *_key;
    NSString *_animFile;
    ScreenEffectNode *_screenEffect;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1 resDir:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) ScreenEffectNode *screenEffect; // @synthesize screenEffect=_screenEffect;
@property(retain, nonatomic) NSString *animFile; // @synthesize animFile=_animFile;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (id)loadFramesFromDisk;
- (_Bool)isValid;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

