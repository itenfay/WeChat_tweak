//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, OrderedDictionary;

@interface EmoticonManageDataLogic : NSObject
{
    _Bool _hasUnDownload;
    OrderedDictionary *_pageDict;
    NSMutableArray *_existLocalPackageArray;
    OrderedDictionary *_tmpDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OrderedDictionary *tmpDict; // @synthesize tmpDict=_tmpDict;
@property(nonatomic) _Bool hasUnDownload; // @synthesize hasUnDownload=_hasUnDownload;
@property(retain, nonatomic) NSMutableArray *existLocalPackageArray; // @synthesize existLocalPackageArray=_existLocalPackageArray;
@property(retain, nonatomic) OrderedDictionary *pageDict; // @synthesize pageDict=_pageDict;
- (void)moveAllAbsIndexFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 offset:(unsigned long long)arg3 isUp:(_Bool)arg4;
- (void)moveObjInsideSet:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)moveObjFrom:(unsigned long long)arg1 To:(unsigned long long)arg2;
- (id)commitEdit;
- (id)unDownloadIndexPathsForSection:(unsigned long long)arg1;
- (unsigned long long)downloadedCount;
- (_Bool)isUnDownloadAt:(unsigned long long)arg1;
- (unsigned long long)getManageObjCount;
- (unsigned long long)getPackageCount;
- (_Bool)hasUnDownloadPacks;
- (id)reloadDataFor:(id)arg1;
- (void)reloadAllData;
- (id)dataObjAtIndex:(unsigned long long)arg1;
- (id)getManageDataList;
- (void)loadDataFromDB;
- (id)init;

@end

