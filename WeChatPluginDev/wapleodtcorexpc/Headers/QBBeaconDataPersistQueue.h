//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface QBBeaconDataPersistQueue : NSObject
{
    NSMutableArray *tailList;
    int maxSize;
    int currSize;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (id)fetchAllObjectsAndClean;
- (void)addToTailList:(id)arg1;
- (void)addObject:(id)arg1;
- (int)getCurrSize;
- (int)getMaxSize;
- (void)setMaxSize:(int)arg1;
- (id)init;

@end

