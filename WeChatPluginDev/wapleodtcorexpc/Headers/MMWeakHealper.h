//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMWeakHealper : NSObject
{
    id _object;
}

@property(nonatomic) __weak id object; // @synthesize object=_object;
- (_Bool)isEqual:(id)arg1;

@end

