//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderLiveKtvAllWaitSongCountInfo : NSObject
{
    unsigned int _allWaitSongCnt;
    unsigned long long _version;
}

+ (id)genAllWaitSongCountInfoWithWaitCnt:(unsigned int)arg1 version:(unsigned long long)arg2;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(nonatomic) unsigned int allWaitSongCnt; // @synthesize allWaitSongCnt=_allWaitSongCnt;
- (id)description;

@end

