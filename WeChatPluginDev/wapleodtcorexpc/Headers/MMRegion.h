//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMRegion : NSObject
{
    int type;
    int numbersOfChildren;
    NSString *code;
    NSString *name;
    NSString *parentCode;
}

- (void).cxx_destruct;
@property(nonatomic) int numbersOfChildren; // @synthesize numbersOfChildren;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *parentCode; // @synthesize parentCode;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *code; // @synthesize code;
- (id)description;

@end

