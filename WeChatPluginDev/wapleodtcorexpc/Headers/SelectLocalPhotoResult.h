//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SelectLocalPhotoResult : NSObject
{
    long long _ret;
    NSString *_msg;
    NSString *_path;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithRet:(long long)arg1 msg:(id)arg2 path:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) long long ret; // @synthesize ret=_ret;
- (id)toList;

@end

