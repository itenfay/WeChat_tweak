//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface VcardName : NSObject
{
    NSString *_firstName;
    NSString *_middleName;
    NSString *_lastName;
}

+ (_Bool)isChineseName:(id)arg1;
+ (_Bool)isValidName:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (void)print;

@end

