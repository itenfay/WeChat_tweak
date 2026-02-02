//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VideoRingNetProvider : NSObject
{
}

- (id)applyRingToneProcess:(unsigned long long)arg1 withRing:(id)arg2;
- (id)getMyGlobalRingTone;
- (id)fillUpFinderItemForRing:(id)arg1 useCache:(_Bool)arg2;
- (id)fetchRingToneDetailForFriend:(id)arg1 selfIsCaller:(_Bool)arg2;
- (id)promiseAllExclusiveRingsWithSequence:(unsigned long long)arg1;
- (id)setMessageRingType:(unsigned int)arg1;
- (id)setRingToneWithType:(unsigned long long)arg1 ring:(id)arg2 userName:(id)arg3 op:(unsigned long long)arg4 scene:(unsigned long long)arg5 extraInfo:(id)arg6;
- (id)searchMusicRingWithQuery:(id)arg1 offset:(unsigned int)arg2 searchID:(unsigned long long)arg3;

@end

