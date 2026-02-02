//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJStyleEditData, NSArray, NSDictionary, NSMutableDictionary, NSString, OMJMaterialInfo, OMJMaterialManager;
@protocol MJStyleEditViewModelDataSource;

@interface MJStyleEditViewModel : NSObject
{
    _Bool _segmentHasMultiSubtitles;
    _Bool _hasChanges;
    _Bool _shouldShowTextAnimTab;
    id <MJStyleEditViewModelDataSource> _dataSource;
    MJStyleEditData *_stickerData;
    MJStyleEditData *_fontData;
    MJStyleEditData *_colorData;
    MJStyleEditData *_animData;
    NSArray *_tabItems;
    unsigned long long _selectedTabIndex;
    long long _entrance;
    unsigned long long _segmentType;
    OMJMaterialInfo *_defaultTitleMaterialInfo;
    OMJMaterialManager *_manager;
    NSString *_selectedMaterialID;
    NSDictionary *_stickerDicts;
    NSDictionary *_fontDicts;
    NSDictionary *_animDicts;
    NSMutableDictionary *_downloadStatus;
    NSDictionary *_backupStylesDict;
}

+ (long long)searchAnimPresetIDWith:(id)arg1 data:(id)arg2;
+ (long long)searchColorStyleIDWith:(id)arg1 data:(id)arg2;
+ (long long)searchFontNameWith:(id)arg1 data:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *backupStylesDict; // @synthesize backupStylesDict=_backupStylesDict;
@property(retain, nonatomic) NSMutableDictionary *downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(retain, nonatomic) NSDictionary *animDicts; // @synthesize animDicts=_animDicts;
@property(retain, nonatomic) NSDictionary *fontDicts; // @synthesize fontDicts=_fontDicts;
@property(retain, nonatomic) NSDictionary *stickerDicts; // @synthesize stickerDicts=_stickerDicts;
@property(retain, nonatomic) NSString *selectedMaterialID; // @synthesize selectedMaterialID=_selectedMaterialID;
@property(nonatomic) _Bool shouldShowTextAnimTab; // @synthesize shouldShowTextAnimTab=_shouldShowTextAnimTab;
@property(retain, nonatomic) OMJMaterialManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) OMJMaterialInfo *defaultTitleMaterialInfo; // @synthesize defaultTitleMaterialInfo=_defaultTitleMaterialInfo;
@property(nonatomic) _Bool hasChanges; // @synthesize hasChanges=_hasChanges;
@property(nonatomic) _Bool segmentHasMultiSubtitles; // @synthesize segmentHasMultiSubtitles=_segmentHasMultiSubtitles;
@property(nonatomic) unsigned long long segmentType; // @synthesize segmentType=_segmentType;
@property(nonatomic) long long entrance; // @synthesize entrance=_entrance;
@property(nonatomic) unsigned long long selectedTabIndex; // @synthesize selectedTabIndex=_selectedTabIndex;
@property(retain, nonatomic) NSArray *tabItems; // @synthesize tabItems=_tabItems;
@property(retain, nonatomic) MJStyleEditData *animData; // @synthesize animData=_animData;
@property(retain, nonatomic) MJStyleEditData *colorData; // @synthesize colorData=_colorData;
@property(retain, nonatomic) MJStyleEditData *fontData; // @synthesize fontData=_fontData;
@property(retain, nonatomic) MJStyleEditData *stickerData; // @synthesize stickerData=_stickerData;
@property(nonatomic) __weak id <MJStyleEditViewModelDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)loadingStatusForID:(id)arg1 threadSafetyHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)mj_loadingStatusWithID:(id)arg1;
- (float)mj_loadingProgressWithID:(id)arg1;
- (void)mj_loadMaterialWithID:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)materialScene;
- (void)updateColorDataIfNeededWith:(id)arg1 type:(unsigned long long)arg2;
- (void)loadMaterialWithType:(unsigned long long)arg1 at:(long long)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)loadData:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchNearestSelectedDatas:(CDUnknownBlockType)arg1;
- (void)fetchBackupStyles:(CDUnknownBlockType)arg1;
- (void)backupStyles;
- (void)fetchDatas:(CDUnknownBlockType)arg1;
- (void)fetchLocalDatas:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long type;
- (id)segmentVM;
- (id)initWithMaterialManager:(id)arg1 entrance:(long long)arg2 segmentType:(unsigned long long)arg3 segmentHasMultiSubtitles:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

