//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface UserProfileLaunchRequest : NSObject
{
    NSString *_username;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithUsername:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)toList;

@end

