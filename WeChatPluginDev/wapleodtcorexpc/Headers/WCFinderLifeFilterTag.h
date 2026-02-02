//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCFinderLifeFilterTag : NSObject
{
    _Bool _isGroup;
    unsigned long long _tagId;
    NSString *_wording;
    NSArray *_subTags;
    NSArray *_groups;
    unsigned long long _defaultTagId;
    long long _level;
    WCFinderLifeFilterTag *_parent;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WCFinderLifeFilterTag *parent; // @synthesize parent=_parent;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) unsigned long long defaultTagId; // @synthesize defaultTagId=_defaultTagId;
@property(nonatomic) _Bool isGroup; // @synthesize isGroup=_isGroup;
@property(retain, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(readonly, nonatomic) NSArray *subTags; // @synthesize subTags=_subTags;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(nonatomic) unsigned long long tagId; // @synthesize tagId=_tagId;
- (id)description;
- (id)subTagForId:(unsigned long long)arg1;
- (id)defaultTags;
- (id)defaultTag;
- (void)_filledPath:(id)arg1;
- (id)toPath;
- (_Bool)isEqualToFilterTag:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)childs;
- (id)root;

@end

