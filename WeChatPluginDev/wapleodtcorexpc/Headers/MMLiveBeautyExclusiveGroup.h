//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveBeautyItem, NSArray, NSDictionary, NSString;

@interface MMLiveBeautyExclusiveGroup : NSObject
{
    NSString *_groupId;
    MMLiveBeautyItem *_activeItem;
    NSDictionary *_exclusiveItems;
}

+ (id)exclusiveGroupInJsonDictionary:(id)arg1 suiteId:(id)arg2 suiteItems:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *exclusiveItems; // @synthesize exclusiveItems=_exclusiveItems;
@property(retain, nonatomic) MMLiveBeautyItem *activeItem; // @synthesize activeItem=_activeItem;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (_Bool)containsItemWithId:(id)arg1;
@property(readonly, nonatomic) NSArray *items;

@end

