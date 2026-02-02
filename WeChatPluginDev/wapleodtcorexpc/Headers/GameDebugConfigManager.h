//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameMultiOptionItem, NSString;

@interface GameDebugConfigManager
{
    GameMultiOptionItem *_gameWkInterceptOptionItem;
    GameMultiOptionItem *_loadHtmlOptionItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GameMultiOptionItem *loadHtmlOptionItem; // @synthesize loadHtmlOptionItem=_loadHtmlOptionItem;
@property(retain, nonatomic) GameMultiOptionItem *gameWkInterceptOptionItem; // @synthesize gameWkInterceptOptionItem=_gameWkInterceptOptionItem;
- (_Bool)measurePerformance;
- (id)getStringForKey:(id)arg1;
- (_Bool)getBoolForKey:(id)arg1;
- (_Bool)setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

