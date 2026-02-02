//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface SolitaireItem
{
    _Bool _isHeader;
    _Bool _isExample;
    _Bool _canEdit;
    unsigned int _msgLocalId;
    unsigned int _index;
    unsigned int _createTime;
    unsigned int _msgCreateTime;
    NSString *_content;
    NSString *_nsSeparator;
    NSString *_username;
    long long _itemNum;
    struct _NSRange _range;
}

+ (void)initialize;
+ (void)PBArrayAdd_itemNum;
+ (void)PBArrayAdd_msgCreateTime;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_index;
+ (void)PBArrayAdd_canEdit;
+ (void)PBArrayAdd_isExample;
+ (void)PBArrayAdd_isHeader;
+ (void)PBArrayAdd_msgLocalId;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_nsSeparator;
+ (void)PBArrayAdd_content;
- (void).cxx_destruct;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) unsigned int msgCreateTime; // @synthesize msgCreateTime=_msgCreateTime;
@property(nonatomic) long long itemNum; // @synthesize itemNum=_itemNum;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(nonatomic) _Bool canEdit; // @synthesize canEdit=_canEdit;
@property(nonatomic) _Bool isExample; // @synthesize isExample=_isExample;
@property(nonatomic) _Bool isHeader; // @synthesize isHeader=_isHeader;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *nsSeparator; // @synthesize nsSeparator=_nsSeparator;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

