//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCBGStorage : NSObject
{
    unsigned int hash;
    NSMutableArray *_albumList;
}

+ (id)fromBuffer:(id)arg1;
+ (id)parseFromXml:(id)arg1 preferLang:(id)arg2;
+ (void)initialize;
+ (void)PBArrayAdd_albumList;
+ (void)PBArrayAdd_hash;
+ (id)bgStorageFromServerObject:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *albumList; // @synthesize albumList=_albumList;
@property(nonatomic) unsigned int hash; // @synthesize hash;
- (id)toBuffer;
- (id)toXml;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

