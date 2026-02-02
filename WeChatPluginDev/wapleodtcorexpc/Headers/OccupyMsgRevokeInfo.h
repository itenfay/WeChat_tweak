//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface OccupyMsgRevokeInfo
{
    unsigned int _localID;
    unsigned int _createTime;
    unsigned long long _msgSvrID;
    NSString *_chatName;
    NSString *_overwriteMsgID;
}

+ (void)initialize;
+ (void)PBArrayAdd_overwriteMsgID;
+ (void)PBArrayAdd_chatName;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_msgSvrID;
+ (void)PBArrayAdd_localID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *overwriteMsgID; // @synthesize overwriteMsgID=_overwriteMsgID;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned long long msgSvrID; // @synthesize msgSvrID=_msgSvrID;
@property(nonatomic) unsigned int localID; // @synthesize localID=_localID;
- (id)initWithMessageWrap:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

