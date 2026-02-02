//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, NSString;

@interface CExtendInfoOfVoip : NSObject
{
    unsigned int m_uiVoipRecvTime;
    unsigned int m_uiVoipStatus;
    unsigned int m_uiVoipInviteType;
    unsigned long long m_iVoipRoomid;
    long long m_i64VoipKey;
    unsigned int m_wordingType;
    unsigned int m_duration;
    CMessageWrap *m_refMessageWrap;
}

+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_duration; // @synthesize m_duration;
@property(nonatomic) unsigned int m_wordingType; // @synthesize m_wordingType;
@property(nonatomic) __weak CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
@property(nonatomic) unsigned int m_uiVoipStatus; // @synthesize m_uiVoipStatus;
@property(nonatomic) unsigned int m_uiVoipRecvTime; // @synthesize m_uiVoipRecvTime;
@property(nonatomic) unsigned int m_uiVoipInviteType; // @synthesize m_uiVoipInviteType;
@property(nonatomic) unsigned long long m_iVoipRoomid; // @synthesize m_iVoipRoomid;
@property(nonatomic) long long m_i64VoipKey; // @synthesize m_i64VoipKey;
- (void)UpdateContent:(id)arg1;
- (void)ChangeForDisplay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

