//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TingUserContactInfo : NSObject
{
    NSString *_userName;
    NSString *_nickName;
    NSString *_headUrl;
    NSString *_hashUsername;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithUserName:(id)arg1 nickName:(id)arg2 headUrl:(id)arg3 hashUsername:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *hashUsername; // @synthesize hashUsername=_hashUsername;
@property(copy, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)toList;

@end

