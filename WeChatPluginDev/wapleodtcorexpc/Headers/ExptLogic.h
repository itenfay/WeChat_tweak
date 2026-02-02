//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface ExptLogic
{
    _Bool _isReqNow;
    unsigned int _lastUpdateTime;
    unsigned int _interval;
}

@property(nonatomic) _Bool isReqNow; // @synthesize isReqNow=_isReqNow;
@property(nonatomic) unsigned int interval; // @synthesize interval=_interval;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
- (id)mmExptPath:(id)arg1;
- (_Bool)saveTimeToFile:(unsigned int)arg1 fileName:(id)arg2;
- (unsigned int)getTimeFromFile:(id)arg1;
- (unsigned int)getExptInterval;
- (void)noteGetExptIntervalSec:(unsigned int)arg1;
- (unsigned int)getLastGetExptTime;
- (void)writeGetExptTime:(unsigned int)arg1;
- (void)noteGetExptTime:(unsigned int)arg1;
- (void)resetGetXExptTime:(unsigned int)arg1;
- (_Bool)OnReceNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getSvrExpt:(unsigned int)arg1;
- (void)checkToGetSvrExpt;
- (void)dealloc;
- (id)init;

@end

