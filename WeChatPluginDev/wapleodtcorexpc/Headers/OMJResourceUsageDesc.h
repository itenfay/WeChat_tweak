//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface OMJResourceUsageDesc : NSObject
{
    NSArray *_resourceItems;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *resourceItems; // @synthesize resourceItems=_resourceItems;
- (_Bool)isEqual:(id)arg1;
- (id)initWithResourceItems:(id)arg1;

@end

