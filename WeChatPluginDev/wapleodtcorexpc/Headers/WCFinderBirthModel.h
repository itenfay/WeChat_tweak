//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDateComponents;

@interface WCFinderBirthModel : NSObject
{
    long long _birthYear;
    long long _birthMonth;
    NSDateComponents *_components;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDateComponents *components; // @synthesize components=_components;
@property(nonatomic) long long birthMonth; // @synthesize birthMonth=_birthMonth;
@property(nonatomic) long long birthYear; // @synthesize birthYear=_birthYear;
- (id)genDate;
- (id)initWithDate:(id)arg1;
- (id)initWithYear:(long long)arg1 month:(long long)arg2;

@end

