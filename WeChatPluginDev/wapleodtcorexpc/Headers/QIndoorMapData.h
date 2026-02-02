//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface QIndoorMapData : NSObject
{
    _Bool _indoorMapEnabled;
    long long _keyType;
    NSArray *_buildingList;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *buildingList; // @synthesize buildingList=_buildingList;
@property(readonly, nonatomic) long long keyType; // @synthesize keyType=_keyType;
@property(readonly, nonatomic) _Bool indoorMapEnabled; // @synthesize indoorMapEnabled=_indoorMapEnabled;
- (id)toJSON;
- (id)initWithJSON:(id)arg1;

@end

