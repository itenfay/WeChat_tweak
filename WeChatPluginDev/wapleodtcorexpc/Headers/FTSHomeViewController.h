//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FTSVoiceSearchBarController, MMTListAdapter, NSArray, NSString, UITableView, WCWebSearchBar, WCWebSearchInputProvider, _TtC6WeChat19FTSHomePageReporter;
@protocol FTSHomeViewControllerDelegate, WSHotListTeachView;

@interface FTSHomeViewController
{
    _Bool _isFromVoice;
    id <FTSHomeViewControllerDelegate> _delegate;
    MMTListAdapter *_listAdapter;
    FTSVoiceSearchBarController *_presenter;
    id <WSHotListTeachView> _guideView;
    UITableView *_tableView;
    NSArray *_sectionData;
    WCWebSearchInputProvider *_inputProvider;
    _TtC6WeChat19FTSHomePageReporter *_reporter;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFromVoice; // @synthesize isFromVoice=_isFromVoice;
@property(retain, nonatomic) _TtC6WeChat19FTSHomePageReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) WCWebSearchInputProvider *inputProvider; // @synthesize inputProvider=_inputProvider;
@property(retain, nonatomic) NSArray *sectionData; // @synthesize sectionData=_sectionData;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) id <WSHotListTeachView> guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) FTSVoiceSearchBarController *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) MMTListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(nonatomic) __weak id <FTSHomeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFTSHomePageSearchDone;
- (id)homePageReporer;
- (void)onEndInteractivePop:(_Bool)arg1;
- (void)onGetTextInput:(id)arg1 isFromVoice:(_Bool)arg2;
- (void)onContactsModified;
- (void)onSelectSearchResult;
- (id)resultListView;
- (void)resignSearchFirstResponder;
- (void)exitPageWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)searchTextField;
- (id)searchBarText;
- (void)reloadList;
- (_Bool)isNativeGuideView;
- (void)setLoadingStatus;
- (void)updateFooterView;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)applyTextFieldBlur;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)doWebSearchWithQuery:(id)arg1;
- (id)customSearchBar;
- (void)visionStyleDismissPage;
- (void)onNavigationCancelItemClick;
- (void)initGuideView;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)viewDidLoad;
- (void)registerYReportSdk;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) WCWebSearchBar *searchBar; // @dynamic searchBar;
@property(readonly) Class superclass;

@end

