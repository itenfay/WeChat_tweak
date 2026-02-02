//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiteAppViewController, MMUIViewController;

@interface WCFinderJsApiPluginScheduler
{
    MMUIViewController *_fromVC;
    MMLiteAppViewController *_toLiteAppVC;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMLiteAppViewController *toLiteAppVC; // @synthesize toLiteAppVC=_toLiteAppVC;
@property(nonatomic) __weak MMUIViewController *fromVC; // @synthesize fromVC=_fromVC;
- (void)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;

@end

