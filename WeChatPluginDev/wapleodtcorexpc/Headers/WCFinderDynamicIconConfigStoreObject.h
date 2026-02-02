//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCFinderDynamicIconConfigStoreObject : NSObject
{
    NSString *_version;
    NSData *_content;
    long long _compressType;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_compressType;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_version;
- (void).cxx_destruct;
@property(nonatomic) long long compressType; // @synthesize compressType=_compressType;
@property(retain, nonatomic) NSData *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

