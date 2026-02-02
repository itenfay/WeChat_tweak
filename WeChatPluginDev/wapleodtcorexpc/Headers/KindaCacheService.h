//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface KindaCacheService : NSObject
{
}

- (id)getFilePath:(id)arg1;
- (void)setInt64:(id)arg1 data:(long long)arg2 ttl:(long long)arg3;
- (long long)getInt64:(id)arg1 defaultValue:(long long)arg2;
- (_Bool)getBool:(id)arg1;
- (void)setBool:(id)arg1 data:(_Bool)arg2 ttl:(long long)arg3;
- (_Bool)remove:(id)arg1;
- (id)get:(id)arg1;
- (void)set:(id)arg1 data:(id)arg2 ttl:(long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

