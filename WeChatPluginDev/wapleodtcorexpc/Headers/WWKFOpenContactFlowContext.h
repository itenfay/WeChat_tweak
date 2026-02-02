//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSString, WWKFContactBindNotifyCtx, WWKFContentSendMsgInfo;

@interface WWKFOpenContactFlowContext : NSObject
{
    _Bool _bPopVCWhenLeave;
    _Bool _hasUserConfirm;
    _Bool _showPageSheet;
    int _scene;
    unsigned int _actionType;
    MMUIViewController *_viewController;
    CDUnknownBlockType _completeBlock;
    NSString *_wwkfUrl;
    WWKFContactBindNotifyCtx *_notifyCtx;
    NSString *_sharecardTicket;
    NSString *_antispamAlertText;
    WWKFContentSendMsgInfo *_quickSendMsgInfo;
    NSString *_encUsername;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *encUsername; // @synthesize encUsername=_encUsername;
@property(nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) _Bool showPageSheet; // @synthesize showPageSheet=_showPageSheet;
@property(nonatomic) _Bool hasUserConfirm; // @synthesize hasUserConfirm=_hasUserConfirm;
@property(nonatomic) _Bool bPopVCWhenLeave; // @synthesize bPopVCWhenLeave=_bPopVCWhenLeave;
@property(retain, nonatomic) WWKFContentSendMsgInfo *quickSendMsgInfo; // @synthesize quickSendMsgInfo=_quickSendMsgInfo;
@property(copy, nonatomic) NSString *antispamAlertText; // @synthesize antispamAlertText=_antispamAlertText;
@property(copy, nonatomic) NSString *sharecardTicket; // @synthesize sharecardTicket=_sharecardTicket;
@property(retain, nonatomic) WWKFContactBindNotifyCtx *notifyCtx; // @synthesize notifyCtx=_notifyCtx;
@property(copy, nonatomic) NSString *wwkfUrl; // @synthesize wwkfUrl=_wwkfUrl;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;

@end

