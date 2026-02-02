//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface RingToneHistoryModel : NSObject
{
    _Bool _continueFlag;
    _Bool _isFetching;
    unsigned int _offset;
    NSMutableArray *_rings;
    unsigned long long _seq;
    NSMutableSet *_feedIDs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *feedIDs; // @synthesize feedIDs=_feedIDs;
@property(nonatomic) unsigned long long seq; // @synthesize seq=_seq;
@property(nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSMutableArray *rings; // @synthesize rings=_rings;
- (void)playWithID:(id)arg1;
- (void)stopAllPlay;
- (void)removeRingAtIndex:(unsigned long long)arg1;
- (void)clear;
- (id)fetch;
- (id)init;

@end

