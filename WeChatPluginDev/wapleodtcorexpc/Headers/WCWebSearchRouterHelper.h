//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCWebSearchRouterHelper : NSObject
{
}

+ (_Bool)FTSWebSearchEntryOn;
+ (_Bool)TopicSearchEntryOn;
+ (_Bool)TextSearchEntryOn;
+ (_Bool)ImageSearchEntryOn;
+ (_Bool)MainSwitchOn;
+ (void)LaunchSearchDetailPage:(id)arg1 curViewController:(id)arg2;
+ (id)GenNewWeAppSearchPage:(id)arg1;
+ (_Bool)isXDevice;
+ (id)GenNewWeAppSearchPageWithScene:(unsigned long long)arg1 withMusicEntries:(_Bool)arg2 extendParam:(id)arg3;
+ (id)StartWeAppSearchWithScene:(unsigned long long)arg1 curViewController:(id)arg2 withMusicEntries:(_Bool)arg3 extendParam:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)StartWeAppSearchWithScene:(unsigned long long)arg1 curViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)StartWeAppSearchWithScene:(unsigned long long)arg1 curViewController:(id)arg2;
+ (void)__startImageSearchWithSearchEntity:(id)arg1 curViewController:(id)arg2;
+ (void)StartImageSearchWithSearchEntity:(id)arg1 curViewController:(id)arg2;
+ (void)__startTextSearch:(id)arg1 curViewController:(id)arg2;
+ (void)StartTextSearch:(id)arg1 curViewController:(id)arg2;
+ (void)PushVideoFlowVCWithVideoInfo:(id)arg1 webSearchMgr:(id)arg2 initedParam:(id)arg3 srcSNSItem:(id)arg4 srsMsgWrap:(id)arg5 curNavController:(id)arg6;
+ (void)PushVideoFlowVCWithVideoInfo:(id)arg1 initedParams:(id)arg2 curNavController:(id)arg3;

@end

