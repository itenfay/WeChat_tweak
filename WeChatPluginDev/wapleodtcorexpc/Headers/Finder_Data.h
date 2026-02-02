//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface Finder_Data : NSObject
{
    NSString *_username;
    NSString *_nickname;
    NSString *_logo_url;
    NSNumber *_finder_uin;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithUsername:(id)arg1 nickname:(id)arg2 logo_url:(id)arg3 finder_uin:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *finder_uin; // @synthesize finder_uin=_finder_uin;
@property(copy, nonatomic) NSString *logo_url; // @synthesize logo_url=_logo_url;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)toList;

@end

