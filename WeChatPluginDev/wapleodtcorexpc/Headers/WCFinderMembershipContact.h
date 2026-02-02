//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderTabTipsDSLRenderTmpl, NSString, WCFinderContact;

@interface WCFinderMembershipContact : NSObject
{
    NSString *_username;
    WCFinderContact *_contact;
    unsigned long long _memberStatus;
    unsigned long long _expireTime;
    unsigned long long _pageType;
    FinderTabTipsDSLRenderTmpl *_dslRender;
}

+ (void)__wcdb_index_6:(void *)arg1;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (id)swift_pageType;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)pageType;
+ (id)swift_expireTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)expireTime;
+ (id)swift_memberStatus;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)memberStatus;
+ (id)swift_contact;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)contact;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)username;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderTabTipsDSLRenderTmpl *dslRender; // @synthesize dslRender=_dslRender;
@property(nonatomic) unsigned long long pageType; // @synthesize pageType=_pageType;
@property(nonatomic) unsigned long long expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) unsigned long long memberStatus; // @synthesize memberStatus=_memberStatus;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)initWithFinderMemberFans:(id)arg1;
- (id)initWithFinderMemberCard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

