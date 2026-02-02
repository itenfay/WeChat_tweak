//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportNewXmlPushLibsMsgItem
{
    unsigned int _busiType;
    unsigned int _msgType;
    unsigned int _state;
    unsigned long long _receiveTime;
    NSString *_msgId;
}

+ (void)reportWithMsg:(id)arg1 state:(unsigned int)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) unsigned int busiType; // @synthesize busiType=_busiType;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(nonatomic) unsigned long long receiveTime; // @synthesize receiveTime=_receiveTime;
- (id)reportString;
- (int)reportID;

@end

