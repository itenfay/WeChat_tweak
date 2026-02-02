//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCWeakObjectContainer : NSObject
{
    id _object;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id object; // @synthesize object=_object;
- (id)initWithObject:(id)arg1;

@end

