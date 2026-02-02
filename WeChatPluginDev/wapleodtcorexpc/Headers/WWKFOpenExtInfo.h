//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString, WWKFContentSendMsgInfo;

@interface WWKFOpenExtInfo
{
    _Bool _bPopVCWhenLeave;
    _Bool _showPageSheet;
    NSString *_entityId;
    WWKFContentSendMsgInfo *_quickSendMsgInfo;
    NSData *_spamContext;
    NSString *_finderContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *finderContext; // @synthesize finderContext=_finderContext;
@property(nonatomic) _Bool showPageSheet; // @synthesize showPageSheet=_showPageSheet;
@property(retain, nonatomic) NSData *spamContext; // @synthesize spamContext=_spamContext;
@property(nonatomic) _Bool bPopVCWhenLeave; // @synthesize bPopVCWhenLeave=_bPopVCWhenLeave;
@property(retain, nonatomic) WWKFContentSendMsgInfo *quickSendMsgInfo; // @synthesize quickSendMsgInfo=_quickSendMsgInfo;
@property(copy, nonatomic) NSString *entityId; // @synthesize entityId=_entityId;

@end

