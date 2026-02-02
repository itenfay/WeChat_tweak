//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface WCTimelineActionSheet
{
    _Bool _shownWithBadge;
    _Bool _oversea;
    NSMutableArray *_sections;
}

+ (id)defaultCancelSheetForOversea:(id)arg1;
+ (id)defaultCancelSheet:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(nonatomic) _Bool oversea; // @synthesize oversea=_oversea;
@property(nonatomic) _Bool shownWithBadge; // @synthesize shownWithBadge=_shownWithBadge;
- (_Bool)dynamicAddSpringSection;
- (_Bool)dynamicAddMiaoJianSection;
- (_Bool)dynamicAddFinderPostSection;
- (_Bool)dynamicAddWeseeSection;
- (_Bool)dynamicAddCameraSection;
- (void)addSelectPhotoSection;
- (_Bool)realContainSection:(id)arg1;
- (void)configDynamicSection:(id)arg1;
- (unsigned int)mapReportClickType:(long long)arg1;
- (void)reportForFinderActionsheetItemEndExpose:(long long)arg1;
- (void)reportForFinderActionsheetItemSelect:(long long)arg1;
- (void)reportOnOpenedURL:(long long)arg1 success:(_Bool)arg2;
- (void)reportOnSelected:(long long)arg1;
- (void)reportOnShow;

@end

