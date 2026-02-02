//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QClickItem : NSObject
{
    int _x;
    int _y;
    int _overlayID;
    long long _type;
    NSString *_name;
    NSString *_levelName;
    NSString *_buildingGUID;
    NSString *_buildingName;
    NSString *_poiId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;
@property(nonatomic) int overlayID; // @synthesize overlayID=_overlayID;
@property(retain, nonatomic) NSString *buildingName; // @synthesize buildingName=_buildingName;
@property(retain, nonatomic) NSString *buildingGUID; // @synthesize buildingGUID=_buildingGUID;
@property(retain, nonatomic) NSString *levelName; // @synthesize levelName=_levelName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) int y; // @synthesize y=_y;
@property(nonatomic) int x; // @synthesize x=_x;

@end

