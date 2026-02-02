//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ShakeUserItem : NSObject
{
    NSString *_nickname;
    NSString *_username;
    NSString *_showchat;
}

+ (void)initialize;
+ (void)PBArrayAdd_showchat;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_nickname;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *showchat; // @synthesize showchat=_showchat;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

