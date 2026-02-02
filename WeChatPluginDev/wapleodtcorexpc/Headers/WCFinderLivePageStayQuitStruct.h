//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WCFinderLivePageStayQuitStruct : NSObject
{
    unsigned long long _clientTime;
    NSString *_pageId;
    NSString *_tabId;
    NSString *_subTabId;
    NSString *_sessionID;
    NSString *_contextId;
    NSString *_clickTabContextId;
    NSString *_clickSubTabContextId;
    NSString *_pageUdfKv;
    NSString *_commentScene;
    NSMutableDictionary *_switchExtraDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *switchExtraDic; // @synthesize switchExtraDic=_switchExtraDic;
@property(retain, nonatomic) NSString *commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSString *pageUdfKv; // @synthesize pageUdfKv=_pageUdfKv;
@property(retain, nonatomic) NSString *clickSubTabContextId; // @synthesize clickSubTabContextId=_clickSubTabContextId;
@property(retain, nonatomic) NSString *clickTabContextId; // @synthesize clickTabContextId=_clickTabContextId;
@property(retain, nonatomic) NSString *contextId; // @synthesize contextId=_contextId;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSString *subTabId; // @synthesize subTabId=_subTabId;
@property(retain, nonatomic) NSString *tabId; // @synthesize tabId=_tabId;
@property(retain, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(nonatomic) unsigned long long clientTime; // @synthesize clientTime=_clientTime;
- (id)toReport;

@end

