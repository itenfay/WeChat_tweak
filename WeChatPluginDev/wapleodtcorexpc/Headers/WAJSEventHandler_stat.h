//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;

@interface WAJSEventHandler_stat
{
    NSMutableDictionary *_recursiveDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *recursiveDic; // @synthesize recursiveDic=_recursiveDic;
- (void)traversePath:(id)arg1 isLocalCache:(_Bool)arg2;
- (id)dicFromStat:(struct stat)arg1;
- (void)innerHandleJSEven:(id)arg1;
- (void)handleJSEvent:(id)arg1;

@end

