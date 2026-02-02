//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface EcsContactInfo : NSObject
{
    NSString *_nickName;
    NSString *_userName;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithNickName:(id)arg1 userName:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
- (id)toList;

@end

