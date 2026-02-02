//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMLiveBeautyItemGroup : NSObject
{
    NSString *_groupId;
    NSString *_displayName;
    NSArray *_items;
    unsigned long long _order;
}

+ (id)itemGroupInJsonDictionary:(id)arg1 suiteId:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long order; // @synthesize order=_order;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;

@end

