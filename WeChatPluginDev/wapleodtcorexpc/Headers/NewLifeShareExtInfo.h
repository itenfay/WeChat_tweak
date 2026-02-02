//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLocation, FinderNewLifeDesc, FinderNewLifeInfo, NSString;

@interface NewLifeShareExtInfo : NSObject
{
    double _createTime;
    FinderNewLifeInfo *_info;
    FinderNewLifeDesc *_desc;
    FinderLocation *_location;
    long long _commentEggCount;
    long long _activityType;
    long long _isInnerQuickShare;
}

+ (void)initialize;
+ (void)PBArrayAdd_isInnerQuickShare;
+ (void)PBArrayAdd_activityType;
+ (void)PBArrayAdd_commentEggCount;
+ (void)PBArrayAdd_location;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_info;
+ (void)PBArrayAdd_createTime;
- (void).cxx_destruct;
@property(nonatomic) long long isInnerQuickShare; // @synthesize isInnerQuickShare=_isInnerQuickShare;
@property(nonatomic) long long activityType; // @synthesize activityType=_activityType;
@property(nonatomic) long long commentEggCount; // @synthesize commentEggCount=_commentEggCount;
@property(retain, nonatomic) FinderLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) FinderNewLifeDesc *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) FinderNewLifeInfo *info; // @synthesize info=_info;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
- (id)toXML;
- (void)fromXML:(struct XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

