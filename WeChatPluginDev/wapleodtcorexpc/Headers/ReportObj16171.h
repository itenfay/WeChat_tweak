//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ReportObj16171 : NSObject
{
    NSMutableArray *_checkVersionFinishPkgs;
    NSMutableArray *_checkVersionSuccessPkgs;
    NSMutableArray *_addDownloadKeys;
    NSMutableArray *_startDownloadKeys;
    NSMutableArray *_finshDownloadKeys;
    NSMutableArray *_downloadSuccessKeys;
    _Bool _allCheckFinished;
    _Bool _allDownloadFinished;
    unsigned int _totalBytes;
    id _pkgList;
}

+ (id)objWithPkgList:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id pkgList; // @synthesize pkgList=_pkgList;
- (void)sendReport;
- (void)clear;
- (_Bool)addObject:(id)arg1 To:(id *)arg2 byCheck:(id)arg3 containsIn:(id)arg4;
- (void)notifyDownloadBytes:(unsigned int)arg1 forUrl:(id)arg2 withPkgId:(id)arg3;
- (void)notifyDownloadSucceedUrl:(id)arg1 forPkgId:(id)arg2;
- (void)notifyFinishDownloadUrl:(id)arg1 forPkgId:(id)arg2;
- (void)notifyStartDownloadUrl:(id)arg1 forPkgId:(id)arg2;
- (void)notifyAddDownloadListForUrl:(id)arg1 withPkgId:(id)arg2;
- (void)notifyCheckVersionSuccessForPkgId:(id)arg1;
- (void)notifyPostCheckVersionFinish:(id)arg1;
- (void)notifyCheckVersionFinishedForPkgId:(id)arg1;
- (void)notifyPreCheckVersionFinish:(id)arg1;

@end

