//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, RingToneDetail;

@interface RingTonePickerViewModel : NSObject
{
    unsigned int _offset;
    NSMutableArray *_rings;
    NSMutableSet *_feedIDs;
    RingToneDetail *_ring;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RingToneDetail *ring; // @synthesize ring=_ring;
@property(copy, nonatomic) NSMutableSet *feedIDs; // @synthesize feedIDs=_feedIDs;
@property(nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSMutableArray *rings; // @synthesize rings=_rings;
- (void)playWithID:(id)arg1;
- (void)stopAllPlay;
- (void)reportRecommendRingBackExpose:(long long)arg1 end:(long long)arg2;
- (void)addRingForRecommendList:(id)arg1;
- (void)refreshForTableView;
- (id)fetchRecommendRings:(unsigned long long)arg1;
- (id)init;

@end

