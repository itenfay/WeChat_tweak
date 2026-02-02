//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface BraceletHKWorkout : NSObject
{
    int _typeID;
    NSString *_name;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int typeID; // @synthesize typeID=_typeID;
- (id)initWithTypeId:(int)arg1 name:(id)arg2;

@end

