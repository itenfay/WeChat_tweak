//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FBSDKKeychainStore : NSObject
{
    NSString *_service;
    NSString *_accessGroup;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
@property(readonly, copy, nonatomic) NSString *service; // @synthesize service=_service;
- (id)queryForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (_Bool)setData:(id)arg1 forKey:(id)arg2 accessibility:(void *)arg3;
- (id)stringForKey:(id)arg1;
- (_Bool)setString:(id)arg1 forKey:(id)arg2 accessibility:(void *)arg3;
- (id)dictionaryForKey:(id)arg1;
- (_Bool)setDictionary:(id)arg1 forKey:(id)arg2 accessibility:(void *)arg3;
- (id)initWithService:(id)arg1 accessGroup:(id)arg2;

@end

