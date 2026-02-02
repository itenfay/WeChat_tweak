//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface TingFinderContactInfo : NSObject
{
    NSString *_username;
    NSString *_nickname;
    NSString *_headImageUrl;
    NSNumber *_isFollow;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithUsername:(id)arg1 nickname:(id)arg2 headImageUrl:(id)arg3 isFollow:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *isFollow; // @synthesize isFollow=_isFollow;
@property(copy, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)toList;

@end

