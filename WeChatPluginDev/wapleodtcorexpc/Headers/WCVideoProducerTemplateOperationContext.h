//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, OrderedDictionary, WCVideoProducerTemplatePlayingOperation;

@interface WCVideoProducerTemplateOperationContext : NSObject
{
    long long _belonger;
    NSMutableArray *_providedTemplateList;
    OrderedDictionary *_showedTemplateListMap;
    NSMutableArray *_templateOperationList;
    WCVideoProducerTemplatePlayingOperation *_currentTemplateOperation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCVideoProducerTemplatePlayingOperation *currentTemplateOperation; // @synthesize currentTemplateOperation=_currentTemplateOperation;
@property(retain, nonatomic) NSMutableArray *templateOperationList; // @synthesize templateOperationList=_templateOperationList;
@property(retain, nonatomic) OrderedDictionary *showedTemplateListMap; // @synthesize showedTemplateListMap=_showedTemplateListMap;
@property(retain, nonatomic) NSMutableArray *providedTemplateList; // @synthesize providedTemplateList=_providedTemplateList;
@property(nonatomic) long long belonger; // @synthesize belonger=_belonger;
- (void)didCancelEditingAsset:(id)arg1 withClipSegment:(id)arg2 atIndex:(long long)arg3;
- (void)didFinishEditingAsset:(id)arg1 withClipSegment:(id)arg2 atIndex:(long long)arg3;
- (void)didStopEditingSegment;
- (void)didStartEditingSegmentWithTemplateInfo:(id)arg1;
- (void)didStopPlayingMusicSearchResult;
- (void)didStartPlayingSelectedSearchResultMusic;
- (void)didSelectMusicSearchResult:(id)arg1 atIndex:(long long)arg2;
- (void)didShowMusicSearchResult:(id)arg1 atIndex:(long long)arg2;
- (void)didSearchMusicByKey:(id)arg1;
- (void)didExitSearchingMusic;
- (void)didEnterSearchingMusic;
- (void)didFetchExtRecommendMusicWithRequestID:(unsigned long long)arg1;
- (void)didStartPlayingSelectedMusic;
- (void)didSelectMusic:(id)arg1 atIndex:(long long)arg2;
- (void)didShowMusic:(id)arg1 atIndex:(long long)arg2;
- (void)didLaunchMJApp;
- (void)didClickLaunchMJApp;
- (void)didCheckJumpToMJAppRegular:(long long)arg1;
- (void)didSwitchOST:(_Bool)arg1;
- (void)didSwitchBGM:(_Bool)arg1;
- (void)didStopPlayingSelectedTemplate;
- (void)didStartPlayingSelectedTemplateWithDuration:(CDStruct_1b6d18a9)arg1;
- (void)didSelectTemplate:(id)arg1 atIndex:(long long)arg2;
- (void)didShowTemplate:(id)arg1 atIndex:(long long)arg2;
- (void)didProvideTemplate:(id)arg1;
- (_Bool)isActive;
- (void)dealloc;
- (id)initWithBelonger:(long long)arg1;

@end

