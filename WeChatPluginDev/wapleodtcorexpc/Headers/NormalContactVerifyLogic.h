//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol NormalContactVerifyLogicDelegate;

@interface NormalContactVerifyLogic : NSObject
{
    unsigned int m_uiNeedConfirm;
    unsigned int _m_qrAddScene;
    id <NormalContactVerifyLogicDelegate> _delegate;
    NSString *_m_reportInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_reportInfo; // @synthesize m_reportInfo=_m_reportInfo;
@property(nonatomic) unsigned int m_qrAddScene; // @synthesize m_qrAddScene=_m_qrAddScene;
@property(nonatomic) __weak id <NormalContactVerifyLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int m_uiNeedConfirm; // @synthesize m_uiNeedConfirm;
- (void)OnSendVerifyUserPreCheck:(id)arg1;
- (_Bool)sendVerifyUserPreCheck:(id)arg1 opcode:(unsigned int)arg2;
- (void)HandleVerifyUser:(id)arg1;
- (void)HandleGetContact:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)sendVerifyUserRequest:(id)arg1;
- (_Bool)doubleCheckContactAntispamTickets:(id)arg1 withRequest:(id)arg2;
- (_Bool)startVerifyContact:(id)arg1 opcode:(unsigned int)arg2 verifyMsg:(id)arg3;
- (void)dealloc;
- (id)init;

@end

