//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary;

@interface WAJSEventHandler_openWeComUserProfile
{
    NSDictionary *_reqDic;
    unsigned long long _scene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSDictionary *reqDic; // @synthesize reqDic=_reqDic;
- (void)showOpenIMContactInfoForThirdAppViewControllerWithDataUrl:(id)arg1 targetContact:(id)arg2 spamWording:(id)arg3;
- (void)handleJSEvent:(id)arg1;

@end

