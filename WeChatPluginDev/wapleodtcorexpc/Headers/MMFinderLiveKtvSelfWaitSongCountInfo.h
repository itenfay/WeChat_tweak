//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderLiveKtvSelfWaitSongCountInfo : NSObject
{
    unsigned int _selfWaitSongCnt;
    unsigned long long _version;
}

+ (id)genSelfWaitSongCountInfoWithWaitCnt:(unsigned int)arg1 version:(unsigned long long)arg2;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(nonatomic) unsigned int selfWaitSongCnt; // @synthesize selfWaitSongCnt=_selfWaitSongCnt;
- (id)description;

@end

