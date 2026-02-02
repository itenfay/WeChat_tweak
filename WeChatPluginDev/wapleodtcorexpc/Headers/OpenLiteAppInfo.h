//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LiteAppReferrerInfo, LiteAppStore, NSDictionary, NSString;

@interface OpenLiteAppInfo : NSObject
{
    _Bool _isTransparent;
    _Bool _waitDownload;
    _Bool _checkUpdate;
    _Bool _syncCheck;
    _Bool _forbidRightGesture;
    _Bool _openWithNewTab;
    _Bool _enableDragToCloseInHalfScreen;
    _Bool _withDownloadLoading;
    _Bool _forbidAutoresizingMask;
    _Bool _ignoreAlive;
    _Bool _isPipMode;
    _Bool _sizeChangeSnapshot;
    _Bool _presentsWithTransaction;
    int _keepAliveSeconds;
    NSString *_appId;
    NSString *_page;
    NSString *_query;
    unsigned long long _openType;
    unsigned long long _timeout;
    double _height;
    CDUnknownBlockType _whenClosed;
    NSString *_minVersion;
    double _delayTime;
    LiteAppReferrerInfo *_referrerInfo;
    LiteAppStore *_store;
    NSDictionary *_storeData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool presentsWithTransaction; // @synthesize presentsWithTransaction=_presentsWithTransaction;
@property(nonatomic) _Bool sizeChangeSnapshot; // @synthesize sizeChangeSnapshot=_sizeChangeSnapshot;
@property(nonatomic) _Bool isPipMode; // @synthesize isPipMode=_isPipMode;
@property(nonatomic) _Bool ignoreAlive; // @synthesize ignoreAlive=_ignoreAlive;
@property(nonatomic) int keepAliveSeconds; // @synthesize keepAliveSeconds=_keepAliveSeconds;
@property(retain, nonatomic) NSDictionary *storeData; // @synthesize storeData=_storeData;
@property(retain, nonatomic) LiteAppStore *store; // @synthesize store=_store;
@property(retain, nonatomic) LiteAppReferrerInfo *referrerInfo; // @synthesize referrerInfo=_referrerInfo;
@property(nonatomic) _Bool forbidAutoresizingMask; // @synthesize forbidAutoresizingMask=_forbidAutoresizingMask;
@property(nonatomic) double delayTime; // @synthesize delayTime=_delayTime;
@property(nonatomic) _Bool withDownloadLoading; // @synthesize withDownloadLoading=_withDownloadLoading;
@property(retain, nonatomic) NSString *minVersion; // @synthesize minVersion=_minVersion;
@property(copy, nonatomic) CDUnknownBlockType whenClosed; // @synthesize whenClosed=_whenClosed;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) unsigned long long timeout; // @synthesize timeout=_timeout;
@property(nonatomic) _Bool enableDragToCloseInHalfScreen; // @synthesize enableDragToCloseInHalfScreen=_enableDragToCloseInHalfScreen;
@property(nonatomic) unsigned long long openType; // @synthesize openType=_openType;
@property(nonatomic) _Bool openWithNewTab; // @synthesize openWithNewTab=_openWithNewTab;
@property(nonatomic) _Bool forbidRightGesture; // @synthesize forbidRightGesture=_forbidRightGesture;
@property(nonatomic) _Bool syncCheck; // @synthesize syncCheck=_syncCheck;
@property(nonatomic) _Bool checkUpdate; // @synthesize checkUpdate=_checkUpdate;
@property(nonatomic) _Bool waitDownload; // @synthesize waitDownload=_waitDownload;
@property(nonatomic) _Bool isTransparent; // @synthesize isTransparent=_isTransparent;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)initWithType:(unsigned long long)arg1 appId:(id)arg2 page:(id)arg3 query:(id)arg4;
- (id)initHalfScreen:(id)arg1 page:(id)arg2 query:(id)arg3 height:(double)arg4;
- (id)initEmbedView:(id)arg1 page:(id)arg2 query:(id)arg3;
- (id)init:(id)arg1 page:(id)arg2 query:(id)arg3;
- (id)initWithAppUrl:(id)arg1;

@end

