//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString;

@interface WCFinderCellIdentifier : NSObject
{
    long long hashValue;
    id _object;
    NSString *_section;
    unsigned long long _secHash;
    NSString *_item;
    NSIndexPath *_indexPath;
    long long _extField1;
    NSObject *_extField2;
    unsigned long long _duplicateIdx;
}

+ (id)createIdentifierForObject:(id)arg1 setter:(CDUnknownBlockType)arg2;
+ (id)identifierForObject:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long duplicateIdx; // @synthesize duplicateIdx=_duplicateIdx;
@property(retain, nonatomic) NSObject *extField2; // @synthesize extField2=_extField2;
@property(nonatomic) long long extField1; // @synthesize extField1=_extField1;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) NSString *item; // @synthesize item=_item;
@property(nonatomic) unsigned long long secHash; // @synthesize secHash=_secHash;
@property(retain, nonatomic) NSString *section; // @synthesize section=_section;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (id)debugDescription;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

