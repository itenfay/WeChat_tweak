//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderWebRedDotShowDicInfo : NSObject
{
    unsigned long long _showType;
    unsigned long long _count;
    NSString *_title;
    NSString *_iconUrl;
    NSString *_path;
    unsigned long long _clearType;
    NSString *_parent;
    unsigned long long _objectId;
    NSString *_objectNonceId;
    NSString *_byPassInfoString;
    NSString *_tipsUuid;
    unsigned long long _ctrlInfoType;
    unsigned long long _businessType;
}

+ (void)initialize;
+ (void)PBArrayAdd_ctrlInfoType;
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_tipsUuid;
+ (void)PBArrayAdd_byPassInfoString;
+ (void)PBArrayAdd_objectNonceId;
+ (void)PBArrayAdd_objectId;
+ (void)PBArrayAdd_parent;
+ (void)PBArrayAdd_clearType;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_count;
+ (void)PBArrayAdd_showType;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
@property(nonatomic) unsigned long long ctrlInfoType; // @synthesize ctrlInfoType=_ctrlInfoType;
@property(copy, nonatomic) NSString *tipsUuid; // @synthesize tipsUuid=_tipsUuid;
@property(copy, nonatomic) NSString *byPassInfoString; // @synthesize byPassInfoString=_byPassInfoString;
@property(copy, nonatomic) NSString *objectNonceId; // @synthesize objectNonceId=_objectNonceId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) NSString *parent; // @synthesize parent=_parent;
@property(nonatomic) unsigned long long clearType; // @synthesize clearType=_clearType;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long showType; // @synthesize showType=_showType;
- (id)genDicFormat;
- (id)initWithRedDotShowInfo:(id)arg1 ctrlInfo:(id)arg2;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

