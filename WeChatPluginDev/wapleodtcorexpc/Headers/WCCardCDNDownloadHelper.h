//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCCardCDNDownloadHelper : NSObject
{
    NSMutableDictionary *_clientMsgId2DownloadInfoMap;
}

- (void).cxx_destruct;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnInit;
- (id)getMd5:(id)arg1;
- (id)download:(id)arg1;
- (id)init;
- (void)dealloc;

@end

