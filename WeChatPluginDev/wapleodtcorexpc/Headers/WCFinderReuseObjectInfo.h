//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderReuseObjectInfo : NSObject
{
    _Bool _autoCallPrepareForReuse;
    NSString *_identifier;
    CDUnknownBlockType _factory;
    CDUnknownBlockType _setter;
    CDUnknownBlockType _beforeEnqueue;
    CDUnknownBlockType _prepareForReuse;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool autoCallPrepareForReuse; // @synthesize autoCallPrepareForReuse=_autoCallPrepareForReuse;
@property(copy, nonatomic) CDUnknownBlockType prepareForReuse; // @synthesize prepareForReuse=_prepareForReuse;
@property(copy, nonatomic) CDUnknownBlockType beforeEnqueue; // @synthesize beforeEnqueue=_beforeEnqueue;
@property(copy, nonatomic) CDUnknownBlockType setter; // @synthesize setter=_setter;
@property(copy, nonatomic) CDUnknownBlockType factory; // @synthesize factory=_factory;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

@end

