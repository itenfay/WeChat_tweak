//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJShootComposingTemplateSinglePageViewModel, MJShootComposingViewModel, MJShootTemplateItemReportModel, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UBDictionarySignal, WCGetCameraTemplateListParams;
@protocol MJShootComposingTemplatePanelViewModelDelegate;

@interface MJShootComposingTemplatePanelViewModel : NSObject
{
    _Bool _isInSingleTemplateShowingMode;
    _Bool _shouldHideNoneTemplateShootEntry;
    int _favTabIndex;
    MJShootComposingViewModel *_shootComposingVM;
    unsigned long long _selectedTabID;
    NSString *_selectedTemplateID;
    NSString *_username;
    WCGetCameraTemplateListParams *_cgiParams;
    NSArray *_tabInfos;
    NSMutableArray *_templateItemsForListView;
    NSString *_downloadingTemplateID;
    UBDictionarySignal *_templateDownloadingProgressDidChangeSignal;
    UBDictionarySignal *_templateDownloadingDidFinishSignal;
    id <MJShootComposingTemplatePanelViewModelDelegate> _delegate;
    unsigned long long _enterScene;
    NSMutableSet *_displayedTemplateItemReportModels;
    unsigned long long _currentTabID;
    MJShootTemplateItemReportModel *_userSelectedTemplateItemReportModel;
    NSArray *_singlePageVMs;
    NSMutableDictionary *_downloadTemplateIDByRequestID;
    MJShootComposingTemplateSinglePageViewModel *_defaultTabVM;
    NSArray *_templateItemsForDefaultTab;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *templateItemsForDefaultTab; // @synthesize templateItemsForDefaultTab=_templateItemsForDefaultTab;
@property(nonatomic) int favTabIndex; // @synthesize favTabIndex=_favTabIndex;
@property(retain, nonatomic) MJShootComposingTemplateSinglePageViewModel *defaultTabVM; // @synthesize defaultTabVM=_defaultTabVM;
@property(readonly, nonatomic) NSMutableDictionary *downloadTemplateIDByRequestID; // @synthesize downloadTemplateIDByRequestID=_downloadTemplateIDByRequestID;
@property(retain, nonatomic) NSArray *singlePageVMs; // @synthesize singlePageVMs=_singlePageVMs;
@property(nonatomic) _Bool shouldHideNoneTemplateShootEntry; // @synthesize shouldHideNoneTemplateShootEntry=_shouldHideNoneTemplateShootEntry;
@property(retain, nonatomic) MJShootTemplateItemReportModel *userSelectedTemplateItemReportModel; // @synthesize userSelectedTemplateItemReportModel=_userSelectedTemplateItemReportModel;
@property(nonatomic) unsigned long long currentTabID; // @synthesize currentTabID=_currentTabID;
@property(retain, nonatomic) NSMutableSet *displayedTemplateItemReportModels; // @synthesize displayedTemplateItemReportModels=_displayedTemplateItemReportModels;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) __weak id <MJShootComposingTemplatePanelViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UBDictionarySignal *templateDownloadingDidFinishSignal; // @synthesize templateDownloadingDidFinishSignal=_templateDownloadingDidFinishSignal;
@property(readonly, nonatomic) UBDictionarySignal *templateDownloadingProgressDidChangeSignal; // @synthesize templateDownloadingProgressDidChangeSignal=_templateDownloadingProgressDidChangeSignal;
@property(retain, nonatomic) NSString *downloadingTemplateID; // @synthesize downloadingTemplateID=_downloadingTemplateID;
@property(retain, nonatomic) NSMutableArray *templateItemsForListView; // @synthesize templateItemsForListView=_templateItemsForListView;
@property(retain, nonatomic) NSArray *tabInfos; // @synthesize tabInfos=_tabInfos;
@property(readonly, nonatomic) WCGetCameraTemplateListParams *cgiParams; // @synthesize cgiParams=_cgiParams;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) _Bool isInSingleTemplateShowingMode; // @synthesize isInSingleTemplateShowingMode=_isInSingleTemplateShowingMode;
@property(retain, nonatomic) NSString *selectedTemplateID; // @synthesize selectedTemplateID=_selectedTemplateID;
@property(nonatomic) unsigned long long selectedTabID; // @synthesize selectedTabID=_selectedTabID;
@property(nonatomic) __weak MJShootComposingViewModel *shootComposingVM; // @synthesize shootComposingVM=_shootComposingVM;
- (id)createTemplateSinglePageViewModelWithTabID:(unsigned long long)arg1 tabType:(unsigned int)arg2;
- (void)updateTemplateItemFavoriteStatus:(id)arg1;
- (void)removeTemplateFromFavoritesWithItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addTemplateToFavoritesWithItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)getTemplateScene;
- (void)loadMoreTemplateItemsForDefaultTab;
- (void)templateSinglePageViewModel:(id)arg1 didUpdateTemplateItems:(id)arg2;
- (void)templateSinglePageViewModel:(id)arg1 didFetchTabInfos:(id)arg2 currentTabInfo:(id)arg3 itemsForDefaultTab:(id)arg4;
- (void)didFinishCurrentTemplateItemDownloading;
- (void)startDownloadingTemplateWithItem:(id)arg1;
- (_Bool)isTemplateLoadedWithItem:(id)arg1;
- (id)tabIDKeyWithID:(unsigned long long)arg1;
- (void)fetchTemplateItemWithShortURL:(id)arg1;
- (void)fetchTemplateItemsForDefaultTab;
- (id)templatePageViewModels;
- (id)initWithUsername:(id)arg1 cgiParams:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

