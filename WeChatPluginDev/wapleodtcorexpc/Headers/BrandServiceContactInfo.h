//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface BrandServiceContactInfo : NSObject
{
    NSString *_userName;
    NSString *_nickName;
    NSNumber *_isContact;
    NSNumber *_isPlaceTop;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithUserName:(id)arg1 nickName:(id)arg2 isContact:(id)arg3 isPlaceTop:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *isPlaceTop; // @synthesize isPlaceTop=_isPlaceTop;
@property(retain, nonatomic) NSNumber *isContact; // @synthesize isContact=_isContact;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)toList;

@end

