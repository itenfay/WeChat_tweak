//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveContact, NSMutableArray;

@interface MMFinderLiveFansGroupMemberSectionInfo : NSObject
{
    unsigned int _memberCount;
    unsigned int _superfanCount;
    unsigned int _selfIntimacyToPrevRank;
    unsigned int _selfRank;
    NSMutableArray *_contactList;
    unsigned long long _currentVersion;
    FinderLiveContact *_selfContact;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int selfRank; // @synthesize selfRank=_selfRank;
@property(nonatomic) unsigned int selfIntimacyToPrevRank; // @synthesize selfIntimacyToPrevRank=_selfIntimacyToPrevRank;
@property(retain, nonatomic) FinderLiveContact *selfContact; // @synthesize selfContact=_selfContact;
@property(nonatomic) unsigned long long currentVersion; // @synthesize currentVersion=_currentVersion;
@property(nonatomic) unsigned int superfanCount; // @synthesize superfanCount=_superfanCount;
@property(nonatomic) unsigned int memberCount; // @synthesize memberCount=_memberCount;
@property(retain, nonatomic) NSMutableArray *contactList; // @synthesize contactList=_contactList;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)getFansGroupName;
- (void)resetContactList:(id)arg1;
- (void)appendContactList:(id)arg1;

@end

