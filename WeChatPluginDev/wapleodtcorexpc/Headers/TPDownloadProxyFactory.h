//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface TPDownloadProxyFactory : NSObject
{
    NSMutableDictionary *_tpDownloadProxyDic;
    NSLock *_proxyMapLock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLock *proxyMapLock; // @synthesize proxyMapLock=_proxyMapLock;
@property(retain, nonatomic) NSMutableDictionary *tpDownloadProxyDic; // @synthesize tpDownloadProxyDic=_tpDownloadProxyDic;
- (id)init;
- (id)getTPDownloadProxy:(int)arg1;

@end

