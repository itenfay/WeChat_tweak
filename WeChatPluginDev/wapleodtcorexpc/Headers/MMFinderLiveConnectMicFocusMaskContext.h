//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MMFinderLiveConnectMicFocusMaskContext : NSObject
{
    _Bool _sorted;
    NSMutableArray *_items;
    unsigned long long _maxIndex;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool sorted; // @synthesize sorted=_sorted;
@property(nonatomic) unsigned long long maxIndex; // @synthesize maxIndex=_maxIndex;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void)drawInContext:(struct CGContext *)arg1 size:(struct CGSize)arg2;
- (void)sortItems;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)maskCoreImage;
- (id)maskLayer;
- (void)removeRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2;
- (void)removeRect:(struct CGRect)arg1;
- (void)addRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2;
- (void)addRect:(struct CGRect)arg1;
- (id)init;
- (id)initWithSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

