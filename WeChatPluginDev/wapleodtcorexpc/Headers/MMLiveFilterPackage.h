//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveBeautyBadgeCollection, NSMutableArray;

@interface MMLiveFilterPackage : NSObject
{
    NSMutableArray *_items;
    MMLiveBeautyBadgeCollection *_badges;
}

+ (id)filterPackageInLocalDirectory:(id)arg1 withConfigurationPath:(id)arg2;
+ (id)filterPackageInResourcePackage:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveBeautyBadgeCollection *badges; // @synthesize badges=_badges;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;

@end

