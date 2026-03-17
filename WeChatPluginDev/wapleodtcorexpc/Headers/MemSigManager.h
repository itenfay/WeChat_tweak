//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MemSigManager : NSObject
{
    NSMutableDictionary *sigDict;
}

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)printSig;
- (id)sigByName:(id)arg1;
- (void)addSig:(id)arg1;
- (void)dealloc;
- (id)init;

@end

