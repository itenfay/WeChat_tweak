//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, NSMutableArray, WCCgiBlockHelper;
@protocol BypSendMessageMgrDelegate;

@interface BypSendMessageMgr : NSObject
{
    id <BypSendMessageMgrDelegate> _delegate;
    NSMutableArray *_sendMsgQueue;
    CMessageWrap *_curSendMsg;
    WCCgiBlockHelper *_curCgiBlockHelper;
}

+ (int)bizTypeForMsgWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCCgiBlockHelper *curCgiBlockHelper; // @synthesize curCgiBlockHelper=_curCgiBlockHelper;
@property(retain, nonatomic) CMessageWrap *curSendMsg; // @synthesize curSendMsg=_curSendMsg;
@property(retain, nonatomic) NSMutableArray *sendMsgQueue; // @synthesize sendMsgQueue=_sendMsgQueue;
@property(nonatomic) __weak id <BypSendMessageMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (id)createAppmsgPackWithMsg:(id)arg1;
- (id)createVideoPackWithMsg:(id)arg1;
- (id)createTextPackWithMsg:(id)arg1;
- (id)createImagePackWithMsg:(id)arg1;
- (_Bool)shouldModContentAfterSendWithMsgWrap:(id)arg1;
- (void)modMsgAfterSendFailedWithMsgWrap:(id)arg1;
- (void)onSendFailed;
- (void)onSendSuccessedWithSvrId:(long long)arg1;
- (void)clearCurSendMsg;
- (void)stopCurSendMsg;
- (_Bool)createSendMsgEvent:(id)arg1;
- (void)CheckSendQueue;
- (void)StopSendMsgByChatName:(id)arg1;
- (void)StopSendMsg:(id)arg1;
- (void)StartSendMsg:(id)arg1;
- (_Bool)IsMsgInSendQueue:(id)arg1;
- (id)init;

@end

