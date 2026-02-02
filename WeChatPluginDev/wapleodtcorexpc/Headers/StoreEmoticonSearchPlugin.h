//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface StoreEmoticonSearchPlugin
{
    unsigned long long _scene;
}

@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void)parserCommand:(id)arg1;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (id)initWithScene:(unsigned long long)arg1;

@end

