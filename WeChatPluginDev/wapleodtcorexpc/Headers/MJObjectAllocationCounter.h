//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJObjectAllocationCounter : NSObject
{
}

+ (id)dictionaryRepresentation;
+ (void)dump;
+ (void)prune;
+ (void)decreaseObject:(id)arg1;
+ (void)increaseObject:(id)arg1;

@end

