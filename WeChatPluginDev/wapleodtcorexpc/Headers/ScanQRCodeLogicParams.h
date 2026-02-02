//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CameraScannerViewWrapper, GetUrlInfoReqSession, NSNumber, NSString, OpenIMContactSearchContext;

@interface ScanQRCodeLogicParams : NSObject
{
    _Bool _bNeedCameraScan;
    _Bool _bShowMyQRCodeBtn;
    _Bool _bEnableCombine;
    _Bool _wxaIsFromWeAppInnerWebView;
    int _codeType;
    unsigned int _fromScene;
    unsigned long long _mode;
    unsigned long long _enterScene;
    CameraScannerViewWrapper *_wrapper;
    unsigned long long _longPressScanScene;
    long long _getA8KeyScene;
    NSString *_msgChatName;
    NSString *_msgUserName;
    NSString *_msgId;
    NSNumber *_contentType;
    NSNumber *_msgInnerType;
    NSString *_wxaPathWithQuery;
    NSString *_wxaSessionId;
    GetUrlInfoReqSession *_getUrlInfoSessionParam;
    OpenIMContactSearchContext *_openIMContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OpenIMContactSearchContext *openIMContext; // @synthesize openIMContext=_openIMContext;
@property(retain, nonatomic) GetUrlInfoReqSession *getUrlInfoSessionParam; // @synthesize getUrlInfoSessionParam=_getUrlInfoSessionParam;
@property(nonatomic) _Bool wxaIsFromWeAppInnerWebView; // @synthesize wxaIsFromWeAppInnerWebView=_wxaIsFromWeAppInnerWebView;
@property(retain, nonatomic) NSString *wxaSessionId; // @synthesize wxaSessionId=_wxaSessionId;
@property(retain, nonatomic) NSString *wxaPathWithQuery; // @synthesize wxaPathWithQuery=_wxaPathWithQuery;
@property(retain, nonatomic) NSNumber *msgInnerType; // @synthesize msgInnerType=_msgInnerType;
@property(retain, nonatomic) NSNumber *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(retain, nonatomic) NSString *msgUserName; // @synthesize msgUserName=_msgUserName;
@property(retain, nonatomic) NSString *msgChatName; // @synthesize msgChatName=_msgChatName;
@property(nonatomic) long long getA8KeyScene; // @synthesize getA8KeyScene=_getA8KeyScene;
@property(nonatomic) _Bool bEnableCombine; // @synthesize bEnableCombine=_bEnableCombine;
@property(nonatomic) unsigned long long longPressScanScene; // @synthesize longPressScanScene=_longPressScanScene;
@property(retain, nonatomic) CameraScannerViewWrapper *wrapper; // @synthesize wrapper=_wrapper;
@property(nonatomic) _Bool bShowMyQRCodeBtn; // @synthesize bShowMyQRCodeBtn=_bShowMyQRCodeBtn;
@property(nonatomic) _Bool bNeedCameraScan; // @synthesize bNeedCameraScan=_bNeedCameraScan;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) int codeType; // @synthesize codeType=_codeType;
- (id)initWithCodeType:(int)arg1 fromScene:(unsigned int)arg2 enterScene:(unsigned long long)arg3 bNeedCameraScan:(_Bool)arg4 bShowMyQRCodeBtn:(_Bool)arg5 wrapper:(id)arg6;
- (id)initWithCodeType:(int)arg1 fromScene:(unsigned int)arg2;

@end

