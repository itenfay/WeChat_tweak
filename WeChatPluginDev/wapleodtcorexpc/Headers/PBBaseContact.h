//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface PBBaseContact : NSObject
{
    unsigned int _conType;
    unsigned int _sex;
    unsigned int _type;
    unsigned int _chatState;
    unsigned int _qquin;
    unsigned int _friendScene;
    unsigned int _imgKey;
    unsigned int _extKey;
    unsigned int _imgKeyAtLastGet;
    unsigned int _extKeyAtLastGet;
    unsigned int _draftTime;
    NSString *_userName;
    NSString *_aliasName;
    NSString *_nickName;
    NSString *_fullPy;
    NSString *_remark;
    NSString *_remarkPyshort;
    NSString *_remarkPyfull;
    unsigned long long _typeExt;
    NSString *_imgStatus;
    NSString *_hdimgStatus;
    NSString *_headImgUrl;
    NSString *_headHdimgUrl;
    NSString *_draft;
    NSString *_qqnickName;
    NSString *_qqremark;
    NSString *_mobileIdentify;
    NSString *_atUserList;
    long long _referMsgId;
}

+ (void)initialize;
+ (void)PBArrayAdd_typeExt;
+ (void)PBArrayAdd_atUserList;
+ (void)PBArrayAdd_draftTime;
+ (void)PBArrayAdd_extKeyAtLastGet;
+ (void)PBArrayAdd_imgKeyAtLastGet;
+ (void)PBArrayAdd_extKey;
+ (void)PBArrayAdd_imgKey;
+ (void)PBArrayAdd_friendScene;
+ (void)PBArrayAdd_mobileIdentify;
+ (void)PBArrayAdd_qqremark;
+ (void)PBArrayAdd_qqnickName;
+ (void)PBArrayAdd_qquin;
+ (void)PBArrayAdd_draft;
+ (void)PBArrayAdd_headHdimgUrl;
+ (void)PBArrayAdd_headImgUrl;
+ (void)PBArrayAdd_hdimgStatus;
+ (void)PBArrayAdd_imgStatus;
+ (void)PBArrayAdd_chatState;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_sex;
+ (void)PBArrayAdd_remarkPyfull;
+ (void)PBArrayAdd_remarkPyshort;
+ (void)PBArrayAdd_remark;
+ (void)PBArrayAdd_fullPy;
+ (void)PBArrayAdd_nickName;
+ (void)PBArrayAdd_conType;
+ (void)PBArrayAdd_aliasName;
+ (void)PBArrayAdd_userName;
- (void).cxx_destruct;
@property(nonatomic) long long referMsgId; // @synthesize referMsgId=_referMsgId;
@property(retain, nonatomic) NSString *atUserList; // @synthesize atUserList=_atUserList;
@property(nonatomic) unsigned int draftTime; // @synthesize draftTime=_draftTime;
@property(nonatomic) unsigned int extKeyAtLastGet; // @synthesize extKeyAtLastGet=_extKeyAtLastGet;
@property(nonatomic) unsigned int imgKeyAtLastGet; // @synthesize imgKeyAtLastGet=_imgKeyAtLastGet;
@property(nonatomic) unsigned int extKey; // @synthesize extKey=_extKey;
@property(nonatomic) unsigned int imgKey; // @synthesize imgKey=_imgKey;
@property(nonatomic) unsigned int friendScene; // @synthesize friendScene=_friendScene;
@property(retain, nonatomic) NSString *mobileIdentify; // @synthesize mobileIdentify=_mobileIdentify;
@property(retain, nonatomic) NSString *qqremark; // @synthesize qqremark=_qqremark;
@property(retain, nonatomic) NSString *qqnickName; // @synthesize qqnickName=_qqnickName;
@property(nonatomic) unsigned int qquin; // @synthesize qquin=_qquin;
@property(retain, nonatomic) NSString *draft; // @synthesize draft=_draft;
@property(retain, nonatomic) NSString *headHdimgUrl; // @synthesize headHdimgUrl=_headHdimgUrl;
@property(retain, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl=_headImgUrl;
@property(retain, nonatomic) NSString *hdimgStatus; // @synthesize hdimgStatus=_hdimgStatus;
@property(retain, nonatomic) NSString *imgStatus; // @synthesize imgStatus=_imgStatus;
@property(nonatomic) unsigned int chatState; // @synthesize chatState=_chatState;
@property(nonatomic) unsigned long long typeExt; // @synthesize typeExt=_typeExt;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int sex; // @synthesize sex=_sex;
@property(retain, nonatomic) NSString *remarkPyfull; // @synthesize remarkPyfull=_remarkPyfull;
@property(retain, nonatomic) NSString *remarkPyshort; // @synthesize remarkPyshort=_remarkPyshort;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) NSString *fullPy; // @synthesize fullPy=_fullPy;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) unsigned int conType; // @synthesize conType=_conType;
@property(retain, nonatomic) NSString *aliasName; // @synthesize aliasName=_aliasName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)getPBPropertyTable;
- (void)setFromCBaseContact:(id)arg1;
- (id)toCBaseContact;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

