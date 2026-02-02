//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface FTSContactSearchParameter : NSObject
{
    _Bool _isMultiSearchGroupMember;
    int _type;
    NSString *_query;
    CDUnknownBlockType _cancelBlock;
    NSMutableDictionary *_groupRelation;
    NSMutableSet *_matchGroups;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *matchGroups; // @synthesize matchGroups=_matchGroups;
@property(retain, nonatomic) NSMutableDictionary *groupRelation; // @synthesize groupRelation=_groupRelation;
@property(nonatomic) _Bool isMultiSearchGroupMember; // @synthesize isMultiSearchGroupMember=_isMultiSearchGroupMember;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;

@end

