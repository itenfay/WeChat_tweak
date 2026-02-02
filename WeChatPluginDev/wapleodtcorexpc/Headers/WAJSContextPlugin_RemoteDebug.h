//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CADisplayLink, NSMutableArray, NSString, WARemoteDebugMaskView, WARemoteDebugPanelView;

@interface WAJSContextPlugin_RemoteDebug
{
    double _panelWidth;
    NSMutableArray *_printItemList;
    CADisplayLink *_updateTimer;
    WARemoteDebugPanelView *_panelView;
    WARemoteDebugMaskView *_maskView;
    _Bool _isDisplay;
    unsigned int _noConfirmedCount;
    unsigned int _noSendCount;
    unsigned int _sendCount;
    unsigned int _recvCount;
    NSString *_sendLength;
    NSString *_recvLength;
    NSString *_connectString;
    NSString *_serverString;
    NSString *_maskString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *maskString; // @synthesize maskString=_maskString;
@property(copy, nonatomic) NSString *serverString; // @synthesize serverString=_serverString;
@property(copy, nonatomic) NSString *connectString; // @synthesize connectString=_connectString;
@property(nonatomic) unsigned int recvCount; // @synthesize recvCount=_recvCount;
@property(copy, nonatomic) NSString *recvLength; // @synthesize recvLength=_recvLength;
@property(nonatomic) unsigned int sendCount; // @synthesize sendCount=_sendCount;
@property(copy, nonatomic) NSString *sendLength; // @synthesize sendLength=_sendLength;
@property(nonatomic) unsigned int noSendCount; // @synthesize noSendCount=_noSendCount;
@property(nonatomic) unsigned int noConfirmedCount; // @synthesize noConfirmedCount=_noConfirmedCount;
@property(nonatomic) _Bool isDisplay; // @synthesize isDisplay=_isDisplay;
- (void)updatePanelView;
- (void)destoryUpdateTimer;
- (void)initUpdateTimer;
- (void)didRotate:(id)arg1;
- (void)dismissMaskView;
- (void)showMaskView:(id)arg1 isButtonHidden:(_Bool)arg2;
- (void)consoleLog:(id)arg1 isSendout:(_Bool)arg2;
- (void)onStopButtonChanged:(id)arg1;
- (void)initMaskView;
- (void)initPanelView;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (id)init;
- (void)dealloc;

@end

