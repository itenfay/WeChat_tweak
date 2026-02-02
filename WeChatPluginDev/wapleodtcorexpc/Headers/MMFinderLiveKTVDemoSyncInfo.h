//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMFinderLiveKTVDemoSyncInfo : NSObject
{
    int _version;
    NSMutableArray *_requestedSongItems;
    unsigned long long _syncId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long syncId; // @synthesize syncId=_syncId;
@property(retain, nonatomic) NSMutableArray *requestedSongItems; // @synthesize requestedSongItems=_requestedSongItems;
@property(nonatomic) int version; // @synthesize version=_version;

@end

