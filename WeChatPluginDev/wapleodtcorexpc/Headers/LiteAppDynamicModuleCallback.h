//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface LiteAppDynamicModuleCallback : NSObject
{
    _Bool _isFromView;
    unsigned int _appUuid;
    unsigned int _localId;
    NSString *_appId;
    unsigned long long _pageId;
    long long _callbackId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) _Bool isFromView; // @synthesize isFromView=_isFromView;
@property(nonatomic) long long callbackId; // @synthesize callbackId=_callbackId;
@property(nonatomic) unsigned long long pageId; // @synthesize pageId=_pageId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) unsigned int appUuid; // @synthesize appUuid=_appUuid;
- (_Bool)isJsonString:(id)arg1;
- (unsigned int)getLocalId;
- (long long)getCallbackId;
- (unsigned long long)getPageId;
- (id)getAppId;
- (unsigned int)getAppUuId;
- (void)callbackImpl:(id)arg1 keepAlive:(_Bool)arg2 error:(_Bool)arg3;
- (void)callbackError:(id)arg1 keepAlive:(_Bool)arg2;
- (void)callback:(id)arg1 keepAlive:(_Bool)arg2;
- (id)initWithParam:(unsigned int)arg1 appId:(id)arg2 pageId:(unsigned long long)arg3 callbackId:(long long)arg4 localId:(unsigned int)arg5 isFromView:(_Bool)arg6;

@end

