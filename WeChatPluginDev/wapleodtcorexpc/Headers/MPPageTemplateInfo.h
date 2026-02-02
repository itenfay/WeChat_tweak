//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MPPageTemplateInfo : NSObject
{
    unsigned int _latestVersion;
    unsigned int _minValidVersion;
    unsigned int _latestDownloadedVersion;
    unsigned int _templateType;
    unsigned int _reportId;
    NSMutableArray *_downloadedRecordList;
    NSString *_latestFullVersion;
}

+ (void)initialize;
+ (void)PBArrayAdd_latestFullVersion;
+ (void)PBArrayAdd_reportId;
+ (void)PBArrayAdd_templateType;
+ (void)PBArrayAdd_downloadedRecordList;
+ (void)PBArrayAdd_latestDownloadedVersion;
+ (void)PBArrayAdd_minValidVersion;
+ (void)PBArrayAdd_latestVersion;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *latestFullVersion; // @synthesize latestFullVersion=_latestFullVersion;
@property(nonatomic) unsigned int reportId; // @synthesize reportId=_reportId;
@property(nonatomic) unsigned int templateType; // @synthesize templateType=_templateType;
@property(retain, nonatomic) NSMutableArray *downloadedRecordList; // @synthesize downloadedRecordList=_downloadedRecordList;
@property(nonatomic) unsigned int latestDownloadedVersion; // @synthesize latestDownloadedVersion=_latestDownloadedVersion;
@property(nonatomic) unsigned int minValidVersion; // @synthesize minValidVersion=_minValidVersion;
@property(nonatomic) unsigned int latestVersion; // @synthesize latestVersion=_latestVersion;
- (void)removeDownloadedRecordWhichIsDeprecatedAndGetHasDelete:(_Bool *)arg1;
- (void)removeDownloadedRecordWithFullVersion:(id)arg1 getHasDelete:(_Bool *)arg2;
- (void)removeDownloadedRecordWhichIsNotVersion:(unsigned int)arg1 getHasDelete:(_Bool *)arg2;
- (void)removeDownloadedRecordWithVersion:(unsigned int)arg1;
- (id)downloadedRecordWithVersion:(unsigned int)arg1;
- (id)latestDownloadedVersionGroup;
- (id)latestDownloadedFullVersion;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

