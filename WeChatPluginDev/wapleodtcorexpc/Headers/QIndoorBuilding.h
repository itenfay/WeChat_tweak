//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface QIndoorBuilding : NSObject
{
    NSString *_guid;
    unsigned long long _defaultLevelIndex;
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
@property(nonatomic) unsigned long long defaultLevelIndex; // @synthesize defaultLevelIndex=_defaultLevelIndex;
@property(copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (id)description;
- (id)descriptionDictionary;
- (id)initWithInternalBuilding:(id)arg1;

@end

