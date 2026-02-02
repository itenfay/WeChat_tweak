//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderLiveRecordLiveUtil : NSObject
{
}

+ (void)reportRecordLiveWithType:(unsigned long long)arg1;
+ (void)showTipsForNeedDownloadGame:(id)arg1;
+ (_Bool)canDownloadGameOnAppstore:(id)arg1;
+ (CDUnknownBlockType)launchGameAppCallbackHandler:(id)arg1;
+ (void)launchGameApp:(id)arg1;
+ (void)getFilteredGameUserInfoWithAppId:(id)arg1 finderLiveTask:(id)arg2 liveViewController:(id)arg3;
+ (void)getFilteredGameUserInfoWithAppId:(id)arg1 finderLiveTask:(id)arg2 filteredGameCompleteBlock:(CDUnknownBlockType)arg3;

@end

