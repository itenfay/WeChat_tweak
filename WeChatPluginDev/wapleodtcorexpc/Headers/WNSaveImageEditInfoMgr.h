//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WNSaveImageEditInfoMgr
{
    NSMutableArray *_arrDataSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrDataSource; // @synthesize arrDataSource=_arrDataSource;
- (id)getBase64String:(id)arg1;
- (void)getConfigInCurrentMode:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)initDataSourceForTextAlignments;
- (void)initDataSourceForBackgroundImages;
- (id)checkFontName:(id)arg1;
- (void)initDataSourceForFontNames;
- (void)initDataSourceForImageTypes;
- (void)getCurrentDataSource;
- (id)getActionSheetDataSource;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

