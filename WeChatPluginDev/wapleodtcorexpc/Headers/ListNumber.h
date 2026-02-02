//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NumberObj;

@interface ListNumber : NSObject
{
    NSString *_leftIdentifier;
    NumberObj *_number;
    NSString *_rightIdentifier;
}

+ (id)extractFromString:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *rightIdentifier; // @synthesize rightIdentifier=_rightIdentifier;
@property(retain, nonatomic) NumberObj *number; // @synthesize number=_number;
@property(retain, nonatomic) NSString *leftIdentifier; // @synthesize leftIdentifier=_leftIdentifier;
- (_Bool)increase;
- (id)string;
- (id)initWithLeftIdentifier:(id)arg1 valueStr:(id)arg2 rightIdentifier:(id)arg3 preferType:(int)arg4;
- (id)initWithLeftIdentifier:(id)arg1 valueStr:(id)arg2 rightIdentifier:(id)arg3;

@end

