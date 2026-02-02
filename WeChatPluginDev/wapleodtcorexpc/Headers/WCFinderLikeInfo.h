//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLikeInfo, NSString;

@interface WCFinderLikeInfo : NSObject
{
    _Bool _unRead;
    unsigned int _followFlag;
    unsigned int _memberFlag;
    unsigned int _orderCount;
    unsigned int _interactionCount;
    unsigned int _thankFlag;
    NSString *_nickName;
    NSString *_headImgUrl;
    unsigned long long _likeId;
    unsigned long long _likeFlag;
    unsigned long long _refuseFlag;
    NSString *_wxUsername;
    NSString *_displayName;
    NSString *_feedID;
    FinderLikeInfo *_info;
}

+ (id)likeInfoWithFinderLikeInfo:(id)arg1 tid:(id)arg2;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_unRead;
+ (void)PBArrayAdd_wxUsername;
+ (void)PBArrayAdd_refuseFlag;
+ (void)PBArrayAdd_likeFlag;
+ (void)PBArrayAdd_likeId;
+ (void)PBArrayAdd_headImgUrl;
+ (void)PBArrayAdd_nickName;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderLikeInfo *info; // @synthesize info=_info;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(nonatomic) unsigned int thankFlag; // @synthesize thankFlag=_thankFlag;
@property(nonatomic) unsigned int interactionCount; // @synthesize interactionCount=_interactionCount;
@property(nonatomic) unsigned int orderCount; // @synthesize orderCount=_orderCount;
@property(nonatomic) unsigned int memberFlag; // @synthesize memberFlag=_memberFlag;
@property(nonatomic) unsigned int followFlag; // @synthesize followFlag=_followFlag;
@property(nonatomic) _Bool unRead; // @synthesize unRead=_unRead;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *wxUsername; // @synthesize wxUsername=_wxUsername;
@property(nonatomic) unsigned long long refuseFlag; // @synthesize refuseFlag=_refuseFlag;
@property(nonatomic) unsigned long long likeFlag; // @synthesize likeFlag=_likeFlag;
@property(nonatomic) unsigned long long likeId; // @synthesize likeId=_likeId;
@property(copy, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl=_headImgUrl;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(readonly, copy) NSString *description;
- (unsigned int)relationshipIconTypeForReport;
- (unsigned int)relationshipTypeForReport;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

