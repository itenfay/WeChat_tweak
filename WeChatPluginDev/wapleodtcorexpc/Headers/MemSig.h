//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MemSig : NSObject
{
    NSString *sigName;
    unsigned int dwAppid;
    NSData *sig;
    NSData *sigKey;
}

@property(nonatomic) unsigned int dwAppid; // @synthesize dwAppid;
@property(copy, nonatomic) NSString *sigName; // @synthesize sigName;
@property(retain, nonatomic) NSData *sigKey; // @synthesize sigKey;
@property(retain, nonatomic) NSData *sig; // @synthesize sig;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;

@end

