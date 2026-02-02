//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WCFinderExpandableTagSelectorExpandInfo : NSObject
{
    struct map<long, Group, std::less<long>, std::allocator<std::pair<const long, Group>>> groupInfos;
    NSString *_identifier;
    long long _index;
    long long _groupNumber;
    NSMutableDictionary *_identifierMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *identifierMap; // @synthesize identifierMap=_identifierMap;
@property(nonatomic) long long groupNumber; // @synthesize groupNumber=_groupNumber;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIndex:(long long)arg1 groupNumber:(long long)arg2;

@end

