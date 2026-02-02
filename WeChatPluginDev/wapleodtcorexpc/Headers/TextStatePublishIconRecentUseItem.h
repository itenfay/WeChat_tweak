//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TextStatePublishIconRecentUseItem : NSObject
{
    unsigned int _useTime;
    unsigned int _isCustom;
    NSString *_iconId;
    NSString *_iconDescription;
}

+ (void)initialize;
+ (void)PBArrayAdd_isCustom;
+ (void)PBArrayAdd_useTime;
+ (void)PBArrayAdd_iconDescription;
+ (void)PBArrayAdd_iconId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int isCustom; // @synthesize isCustom=_isCustom;
@property(nonatomic) unsigned int useTime; // @synthesize useTime=_useTime;
@property(retain, nonatomic) NSString *iconDescription; // @synthesize iconDescription=_iconDescription;
@property(retain, nonatomic) NSString *iconId; // @synthesize iconId=_iconId;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToItem:(id)arg1;
@property(readonly, copy) NSString *description;
- (long long)compare:(id)arg1;
- (_Bool)hasExpired;
- (_Bool)isValid;
- (id)key;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

