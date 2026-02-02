//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface TextStatePublishIconList : NSObject
{
    NSMutableArray *_groupArray;
    NSMutableDictionary *_descriptionToIconDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *descriptionToIconDict; // @synthesize descriptionToIconDict=_descriptionToIconDict;
@property(retain, nonatomic) NSMutableArray *groupArray; // @synthesize groupArray=_groupArray;
- (void)removeCustomIcon;
- (void)insertGroup:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)iconForDescription:(id)arg1;
- (id)initWithStorage:(id)arg1 maxShowCount:(unsigned long long)arg2;

@end

