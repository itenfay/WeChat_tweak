//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderMsgSessionOwnerInfo : NSObject
{
    _Bool _hasSetDefaultOwner;
    NSString *_owner;
    NSString *_lastOwner;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastOwner;
+ (void)PBArrayAdd_hasSetDefaultOwner;
+ (void)PBArrayAdd_owner;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastOwner; // @synthesize lastOwner=_lastOwner;
@property(nonatomic) _Bool hasSetDefaultOwner; // @synthesize hasSetDefaultOwner=_hasSetDefaultOwner;
@property(retain, nonatomic) NSString *owner; // @synthesize owner=_owner;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

