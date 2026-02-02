//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface EmoticonStoreReportInfo : NSObject
{
    unsigned long long _searchId;
    unsigned long long _docId;
    unsigned long long _sessionId;
    long long _index;
    NSString *_info;
    unsigned long long _pageScene;
    unsigned long long _thirdPartyLinkId;
    unsigned long long _thirdPartyLinkStatus;
    NSString *_thirdPartyLinkReportInfo;
    NSString *_reqId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *reqId; // @synthesize reqId=_reqId;
@property(retain, nonatomic) NSString *thirdPartyLinkReportInfo; // @synthesize thirdPartyLinkReportInfo=_thirdPartyLinkReportInfo;
@property(nonatomic) unsigned long long thirdPartyLinkStatus; // @synthesize thirdPartyLinkStatus=_thirdPartyLinkStatus;
@property(nonatomic) unsigned long long thirdPartyLinkId; // @synthesize thirdPartyLinkId=_thirdPartyLinkId;
@property(nonatomic) unsigned long long pageScene; // @synthesize pageScene=_pageScene;
@property(retain, nonatomic) NSString *info; // @synthesize info=_info;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned long long docId; // @synthesize docId=_docId;
@property(nonatomic) unsigned long long searchId; // @synthesize searchId=_searchId;

@end

