//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMBGMAssetClassfyResult, NSMutableArray;

@interface MMBGMSelectedOptionalConfig : NSObject
{
    _Bool _notShowSearchBar;
    _Bool _notShowOstOnButton;
    _Bool _notShowLyricOnButton;
    _Bool _notCallDelegateOnManualSetMusicButton;
    _Bool _shouldHightlightSearchQuery;
    _Bool _enablesResetResearchViewOnEnter;
    _Bool _shouldShowSecondCutPromotionEntry;
    _Bool _shouldShowMusicCategoryPanel;
    unsigned long long _preferDuration;
    NSMutableArray *_imagesDataArray;
    MMBGMAssetClassfyResult *_assetClassfyResult;
    unsigned long long _shouldHideTabBar;
    unsigned long long _cellType;
    unsigned long long _targetType;
    NSMutableArray *_assertItems;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowMusicCategoryPanel; // @synthesize shouldShowMusicCategoryPanel=_shouldShowMusicCategoryPanel;
@property(nonatomic) _Bool shouldShowSecondCutPromotionEntry; // @synthesize shouldShowSecondCutPromotionEntry=_shouldShowSecondCutPromotionEntry;
@property(retain, nonatomic) NSMutableArray *assertItems; // @synthesize assertItems=_assertItems;
@property(nonatomic) unsigned long long targetType; // @synthesize targetType=_targetType;
@property(nonatomic) _Bool enablesResetResearchViewOnEnter; // @synthesize enablesResetResearchViewOnEnter=_enablesResetResearchViewOnEnter;
@property(nonatomic) _Bool shouldHightlightSearchQuery; // @synthesize shouldHightlightSearchQuery=_shouldHightlightSearchQuery;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) unsigned long long shouldHideTabBar; // @synthesize shouldHideTabBar=_shouldHideTabBar;
@property(nonatomic) _Bool notCallDelegateOnManualSetMusicButton; // @synthesize notCallDelegateOnManualSetMusicButton=_notCallDelegateOnManualSetMusicButton;
@property(nonatomic) _Bool notShowLyricOnButton; // @synthesize notShowLyricOnButton=_notShowLyricOnButton;
@property(nonatomic) _Bool notShowOstOnButton; // @synthesize notShowOstOnButton=_notShowOstOnButton;
@property(nonatomic) _Bool notShowSearchBar; // @synthesize notShowSearchBar=_notShowSearchBar;
@property(retain, nonatomic) MMBGMAssetClassfyResult *assetClassfyResult; // @synthesize assetClassfyResult=_assetClassfyResult;
@property(retain, nonatomic) NSMutableArray *imagesDataArray; // @synthesize imagesDataArray=_imagesDataArray;
@property(nonatomic) unsigned long long preferDuration; // @synthesize preferDuration=_preferDuration;

@end

