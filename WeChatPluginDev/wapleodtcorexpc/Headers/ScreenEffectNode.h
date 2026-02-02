//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface ScreenEffectNode
{
    int _delay;
    unsigned long long _effectVersion;
    NSString *_effectId;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *effectId; // @synthesize effectId=_effectId;
@property(nonatomic) unsigned long long effectVersion; // @synthesize effectVersion=_effectVersion;
@property(nonatomic) int delay; // @synthesize delay=_delay;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (int)effectOption;
- (_Bool)isValid;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

