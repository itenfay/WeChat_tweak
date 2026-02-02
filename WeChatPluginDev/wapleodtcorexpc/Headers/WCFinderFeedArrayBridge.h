//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface WCFinderFeedArrayBridge : NSObject
{
    _Bool _modifying;
    NSHashTable *_targetArrays;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *targetArrays; // @synthesize targetArrays=_targetArrays;
@property(nonatomic) _Bool modifying; // @synthesize modifying=_modifying;
- (void)applyChange:(id)arg1 target:(id)arg2;
- (void)onFeedArrayChanged:(id)arg1;
- (void)recardFeedArray:(id)arg1;
- (id)init;

@end

