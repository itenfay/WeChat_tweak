//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TBIndoorBuilding : NSObject
{
    unsigned long long _defaultLevelIndex;
    NSString *_guid;
    NSArray *_levels;
    NSString *_name;
    CDStruct_34734122 _centerPoint;
    CDStruct_02837cd9 _boundingMapRect;
}

- (void).cxx_destruct;
@property(nonatomic) CDStruct_02837cd9 boundingMapRect; // @synthesize boundingMapRect=_boundingMapRect;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) CDStruct_c3b9c2ee centerPoint; // @synthesize centerPoint=_centerPoint;
@property(retain, nonatomic) NSArray *levels; // @synthesize levels=_levels;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(nonatomic) unsigned long long defaultLevelIndex; // @synthesize defaultLevelIndex=_defaultLevelIndex;
- (id)description;
- (id)descriptionDictionary;

@end

