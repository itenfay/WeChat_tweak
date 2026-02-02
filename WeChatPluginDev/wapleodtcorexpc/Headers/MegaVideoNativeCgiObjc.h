//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MegaVideoNativeCgiObjc : NSObject
{
}

+ (void)fetchTopStoryFlow:(int)arg1 pullType:(int)arg2 lastBuffer:(id)arg3 commentScene:(int)arg4 redDotInfo:(id)arg5 callback:(CDUnknownBlockType)arg6;
+ (void)fetchTopicList:(int)arg1 finderObject:(id)arg2 lastBuffer:(id)arg3 direction:(int)arg4 commentScene:(int)arg5 callback:(CDUnknownBlockType)arg6;
+ (void)fetchRelatedList:(id)arg1 scene:(int)arg2 fromSessionId:(id)arg3 pullType:(int)arg4 lastBuffer:(id)arg5 longVideoPlayerContext:(id)arg6 commentScene:(int)arg7 callback:(CDUnknownBlockType)arg8;
+ (void)prefetchChannelFlow:(int)arg1 redDotInfo:(id)arg2 prefetchData:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (void)fetchChannelFlow:(int)arg1 lastBuffer:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)modSeeLaterStateWithParams:(id)arg1 modParams:(id)arg2 commentScene:(int)arg3;
+ (void)fetchContinuePlayNextFeed:(id)arg1 lastBuffer:(id)arg2 relatedListLastBuffer:(id)arg3 commentScene:(int)arg4 callback:(CDUnknownBlockType)arg5;

@end

