//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DBContactOther : NSObject
{
    unsigned int _deleteFlag;
    unsigned int _friendScene;
    unsigned int _addCreateTime;
    NSString *_antispamTicket;
    NSString *_sourceExtInfo;
    NSString *_groupMemberTicket;
    unsigned long long _localBitFlag;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_addCreateTime;
+ (void)PBArrayAdd_localBitFlag;
+ (void)PBArrayAdd_groupMemberTicket;
+ (void)PBArrayAdd_sourceExtInfo;
+ (void)PBArrayAdd_antispamTicket;
+ (void)PBArrayAdd_friendScene;
+ (void)PBArrayAdd_deleteFlag;
- (void).cxx_destruct;
@property(nonatomic) unsigned int addCreateTime; // @synthesize addCreateTime=_addCreateTime;
@property(nonatomic) unsigned long long localBitFlag; // @synthesize localBitFlag=_localBitFlag;
@property(retain, nonatomic) NSString *groupMemberTicket; // @synthesize groupMemberTicket=_groupMemberTicket;
@property(retain, nonatomic) NSString *sourceExtInfo; // @synthesize sourceExtInfo=_sourceExtInfo;
@property(retain, nonatomic) NSString *antispamTicket; // @synthesize antispamTicket=_antispamTicket;
@property(nonatomic) unsigned int friendScene; // @synthesize friendScene=_friendScene;
@property(nonatomic) unsigned int deleteFlag; // @synthesize deleteFlag=_deleteFlag;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

