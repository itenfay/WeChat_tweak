//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MMGCRootsTracingGraphConfiguration : NSObject
{
    _Bool _shouldIncludeBlockAddress;
    _Bool _shouldCacheLayouts;
    _Bool _onlySearchAppSymbol;
    CDUnknownBlockType _transformerBlock;
    NSMutableDictionary *_layoutCache;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool onlySearchAppSymbol; // @synthesize onlySearchAppSymbol=_onlySearchAppSymbol;
@property(readonly, nonatomic) _Bool shouldCacheLayouts; // @synthesize shouldCacheLayouts=_shouldCacheLayouts;
@property(readonly, nonatomic) NSMutableDictionary *layoutCache; // @synthesize layoutCache=_layoutCache;
@property(readonly, nonatomic) _Bool shouldIncludeBlockAddress; // @synthesize shouldIncludeBlockAddress=_shouldIncludeBlockAddress;
@property(readonly, copy, nonatomic) CDUnknownBlockType transformerBlock; // @synthesize transformerBlock=_transformerBlock;
- (id)init;
- (id)initWithTransformerBlock:(CDUnknownBlockType)arg1;
- (id)initWithTransformerBlock:(CDUnknownBlockType)arg1 shouldIncludeBlockAddress:(_Bool)arg2;

@end

