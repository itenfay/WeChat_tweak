//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCWeakWraperObject : NSObject
{
    id _weakObject;
}

+ (id)wrapperWithWeakObject:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id weakObject; // @synthesize weakObject=_weakObject;
- (id)initWithWeakObject:(id)arg1;

@end

