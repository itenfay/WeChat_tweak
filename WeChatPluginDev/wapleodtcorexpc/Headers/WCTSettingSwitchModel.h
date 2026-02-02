//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCTSettingSwitchModel
{
    _Bool _on;
    CDUnknownBlockType _switchAction;
}

+ (id)createWithTitle:(id)arg1 on:(_Bool)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType switchAction; // @synthesize switchAction=_switchAction;
@property(nonatomic) _Bool on; // @synthesize on=_on;

@end

