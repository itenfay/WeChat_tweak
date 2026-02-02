//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderUniversalPlayerUtil : NSObject
{
}

+ (void)setRefreshInterval:(long long)arg1;
+ (long long)refreshInterval;
+ (void)preloadMediaWithJSON:(id)arg1 scene:(int)arg2;
+ (id)requestIDWithInfo:(id)arg1;
+ (void)asyncGetMediaWrapWithJSON:(id)arg1 scene:(int)arg2 complectionBlock:(CDUnknownBlockType)arg3 errorCallBcakBlock:(CDUnknownBlockType)arg4;

@end

