//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, SessionForwardRecordDB;

@interface SessionForwardRecordLogic : NSObject
{
    SessionForwardRecordDB *_forwardRecordDB;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SessionForwardRecordDB *forwardRecordDB; // @synthesize forwardRecordDB=_forwardRecordDB;
- (void)deleteExpiredSessionForwardRecord;
- (void)resetForwardMsgWithContact:(id)arg1;
- (void)recordForwardMsgWithContact:(id)arg1 scene:(unsigned long long)arg2;
- (void)onForwardMsgToContact:(id)arg1 scene:(unsigned long long)arg2;
- (void)onShowSessionWithUserName:(id)arg1;
- (void)onHideSessionWithUserName:(id)arg1;
- (void)onDeleteSessionOfUser:(id)arg1;
- (id)recentForwardRecords;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

