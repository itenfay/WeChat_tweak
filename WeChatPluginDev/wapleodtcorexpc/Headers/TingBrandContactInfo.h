//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface TingBrandContactInfo : NSObject
{
    NSString *_username;
    NSNumber *_isSubscribe;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithUsername:(id)arg1 isSubscribe:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *isSubscribe; // @synthesize isSubscribe=_isSubscribe;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)toList;

@end

