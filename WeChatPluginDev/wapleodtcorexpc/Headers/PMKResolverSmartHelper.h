//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface PMKResolverSmartHelper : NSObject
{
    _Bool _resolved;
    CDUnknownBlockType _resolver;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool resolved; // @synthesize resolved=_resolved;
@property(copy, nonatomic) CDUnknownBlockType resolver; // @synthesize resolver=_resolver;
- (void)dealloc;
- (void)resolver:(id)arg1;

@end

