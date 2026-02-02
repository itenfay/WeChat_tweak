//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MPPageDownloadedTemplateRecord : NSObject
{
    unsigned int _version;
    unsigned int _downloadSize;
    NSString *_md5;
    NSString *_url;
    NSString *_fullVersion;
    NSMutableDictionary *_httpHeaderMap;
    NSString *_versionGroup;
    unsigned long long _startTime;
    unsigned long long _endTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_versionGroup;
+ (void)PBArrayAdd_httpHeaderMap;
+ (void)PBArrayAdd_fullVersion;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_version;
- (void).cxx_destruct;
@property(nonatomic) unsigned int downloadSize; // @synthesize downloadSize=_downloadSize;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *versionGroup; // @synthesize versionGroup=_versionGroup;
@property(retain, nonatomic) NSMutableDictionary *httpHeaderMap; // @synthesize httpHeaderMap=_httpHeaderMap;
@property(copy, nonatomic) NSString *fullVersion; // @synthesize fullVersion=_fullVersion;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

