//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MemSigManager;

@interface MemAppidSig : NSObject
{
    unsigned int dwAppid;
    unsigned int dwPriority;
    unsigned int dwTime;
    unsigned int dwExpTime;
    MemSigManager *memSigManager;
}

@property(nonatomic) unsigned int dwExpTime; // @synthesize dwExpTime;
@property(nonatomic) unsigned int dwTime; // @synthesize dwTime;
@property(nonatomic) unsigned int dwPriority; // @synthesize dwPriority;
@property(nonatomic) unsigned int dwAppid; // @synthesize dwAppid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)printAppidSig;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)appidSigByName:(id)arg1;
- (void)addAppidSig:(id)arg1;
- (void)dealloc;
- (id)init;

@end

