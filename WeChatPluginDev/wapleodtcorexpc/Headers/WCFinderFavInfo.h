//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderFavInfo, NSString;

@interface WCFinderFavInfo : NSObject
{
    _Bool _thankFlag;
    unsigned int _followFlag;
    unsigned int _memberFlag;
    unsigned int _orderCount;
    unsigned int _interactionCount;
    NSString *_nickName;
    NSString *_headImgUrl;
    NSString *_favId;
    NSString *_username;
    NSString *_displayName;
    NSString *_feedID;
    FinderFavInfo *_info;
}

+ (id)favInfoWithFinderFavInfo:(id)arg1 tid:(id)arg2;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_favId;
+ (void)PBArrayAdd_headImgUrl;
+ (void)PBArrayAdd_nickName;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderFavInfo *info; // @synthesize info=_info;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) _Bool thankFlag; // @synthesize thankFlag=_thankFlag;
@property(nonatomic) unsigned int interactionCount; // @synthesize interactionCount=_interactionCount;
@property(nonatomic) unsigned int orderCount; // @synthesize orderCount=_orderCount;
@property(nonatomic) unsigned int memberFlag; // @synthesize memberFlag=_memberFlag;
@property(nonatomic) unsigned int followFlag; // @synthesize followFlag=_followFlag;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *favId; // @synthesize favId=_favId;
@property(copy, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl=_headImgUrl;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
- (unsigned int)relationshipIconTypeForReport;
- (unsigned int)relationshipTypeForReport;
@property(readonly, copy) NSString *description;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

