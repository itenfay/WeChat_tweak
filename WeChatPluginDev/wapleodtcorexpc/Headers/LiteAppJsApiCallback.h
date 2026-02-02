//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface LiteAppJsApiCallback : NSObject
{
    _Bool _isFromView;
    unsigned int _appUuid;
    unsigned int _localId;
    NSString *_appId;
    unsigned long long _appPtr;
    unsigned long long _pageId;
    NSString *_apiName;
    long long _callbackId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) _Bool isFromView; // @synthesize isFromView=_isFromView;
@property(nonatomic) long long callbackId; // @synthesize callbackId=_callbackId;
@property(retain, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
@property(nonatomic) unsigned int appUuid; // @synthesize appUuid=_appUuid;
@property(nonatomic) unsigned long long pageId; // @synthesize pageId=_pageId;
@property(nonatomic) unsigned long long appPtr; // @synthesize appPtr=_appPtr;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (unsigned int)getAppUuid;
- (unsigned long long)getPageId;
- (unsigned long long)getAppPtr;
- (id)getAppId;
- (void)succes:(id)arg1;
- (void)fail:(id)arg1;
- (void)succes:(id)arg1 keepAlive:(_Bool)arg2;
- (void)fail:(id)arg1 keepAlive:(_Bool)arg2;
- (void)jsApiCallback:(const void *)arg1 keepAlive:(_Bool)arg2;
- (id)initWithParam:(id)arg1 appPtr:(unsigned long long)arg2 pageId:(unsigned long long)arg3 appUuid:(unsigned int)arg4 apiName:(id)arg5 callbackId:(long long)arg6 localId:(unsigned int)arg7 isFromView:(_Bool)arg8;

@end

