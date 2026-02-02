//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TPAVPlayerCommonUtils : NSObject
{
    NSMutableDictionary *_playbackStateNames;
    NSMutableDictionary *_loadStateNames;
    NSMutableDictionary *_seekSourceNames;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)makeSeekSourceName:(long long)arg1;
- (id)makeLoadStateName:(long long)arg1;
- (id)makePlaybackStateName:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

