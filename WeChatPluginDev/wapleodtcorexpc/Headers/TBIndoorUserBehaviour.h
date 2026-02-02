//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TBIndoorUserBehaviour : NSObject
{
    NSString *_buildingID;
    unsigned long long _showCount;
    unsigned long long _activeLevelAPICount;
    unsigned long long _pickerShowCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long pickerShowCount; // @synthesize pickerShowCount=_pickerShowCount;
@property(nonatomic) unsigned long long activeLevelAPICount; // @synthesize activeLevelAPICount=_activeLevelAPICount;
@property(nonatomic) unsigned long long showCount; // @synthesize showCount=_showCount;
@property(copy, nonatomic) NSString *buildingID; // @synthesize buildingID=_buildingID;
- (id)descriptionDictionary;
- (id)description;

@end

