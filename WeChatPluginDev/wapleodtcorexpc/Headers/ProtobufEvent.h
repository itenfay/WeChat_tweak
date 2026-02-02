//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAuthInfo, NSRecursiveLock, NSString, ProtobufCGIWrap, ProtobufEventHandler, ProtobufPrtlChannel;

@interface ProtobufEvent
{
    ProtobufPrtlChannel *m_ptrl;
    ProtobufCGIWrap *m_pbCGIWrap;
    ProtobufEventHandler *m_pbEventHandler;
    _Bool m_bSpeedy;
    _Bool m_hasInvokePreHandler;
    int m_cmdstatus;
    _Bool m_ecdhHasSwitchCert;
    unsigned int m_ecdhCertVersion;
    unsigned int m_certRegion;
    void *m_ecdhClient;
    void *m_axEcdhClient;
    MMAuthInfo *m_authInfo;
    NSRecursiveLock *m_lock;
    _Bool m_hasTerminated;
    NSString *_logIdentifier;
}

+ (map_c53b27e0)taskExtraInfo:(const void *)arg1 cgiWrap:(id)arg2;
+ (unsigned int)switchFromCertVersion:(unsigned int)arg1 region:(unsigned int)arg2;
+ (unsigned int)certVersionWithRegion:(unsigned int)arg1;
+ (void)SetHybridEcdhEncryptSkipAAK;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(nonatomic) _Bool m_bSpeedy; // @synthesize m_bSpeedy;
@property(readonly, nonatomic) ProtobufCGIWrap *m_pbCGIWrap; // @synthesize m_pbCGIWrap;
- (int)UnPack:(const struct AutoBuffer *)arg1 headExtFlags:(int *)arg2 sequenceId:(unsigned short *)arg3;
- (_Bool)InternalPack:(struct AutoBuffer *)arg1 Host:(id)arg2 sequenceId:(unsigned short)arg3;
- (_Bool)Pack:(struct AutoBuffer *)arg1 Host:(id)arg2 sequenceId:(unsigned short)arg3;
- (void)NotifyFromPrtl:(unsigned int)arg1 MessageInfo:(id)arg2;
- (void)safeLogIdkeyWithId:(unsigned int)arg1 key:(unsigned int)arg2;
- (void)Stop;
- (void)TerminateIfNotReceived;
- (_Bool)realStart;
- (void)TryStart;
- (id)m_delNotifyFromEvent;
- (void)dealloc;
- (id)initWithCGIWrap:(id)arg1 eventId:(unsigned int)arg2;

@end

