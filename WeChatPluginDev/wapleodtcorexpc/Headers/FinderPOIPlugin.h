//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, POIFlutterAPI, POIFlutterDataReport, WCFinderPOIRelatedStreamViewModel;
@protocol FinderPOIPluginDelegate;

@interface FinderPOIPlugin : NSObject
{
    _Bool _didScrollToTop;
    int _commentScene;
    id <FinderPOIPluginDelegate> _delegate;
    POIFlutterAPI *_flutterAPI;
    POIFlutterDataReport *_dataReportAPI;
    WCFinderPOIRelatedStreamViewModel *_relatedStreamViewModel;
    NSMutableDictionary *_pageViewModels;
    NSMutableDictionary *_exposeTimeDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *exposeTimeDict; // @synthesize exposeTimeDict=_exposeTimeDict;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSMutableDictionary *pageViewModels; // @synthesize pageViewModels=_pageViewModels;
@property(retain, nonatomic) WCFinderPOIRelatedStreamViewModel *relatedStreamViewModel; // @synthesize relatedStreamViewModel=_relatedStreamViewModel;
@property(retain, nonatomic) POIFlutterDataReport *dataReportAPI; // @synthesize dataReportAPI=_dataReportAPI;
@property(retain, nonatomic) POIFlutterAPI *flutterAPI; // @synthesize flutterAPI=_flutterAPI;
@property(nonatomic) _Bool didScrollToTop; // @synthesize didScrollToTop=_didScrollToTop;
@property(nonatomic) __weak id <FinderPOIPluginDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finderPoiInvalidWithErrorCode:(int)arg1 viewModel:(id)arg2;
- (void)finderPoiNoMoreData:(id)arg1;
- (void)finderPoiAppendDataFrom:(long long)arg1 toIndex:(long long)arg2 viewModel:(id)arg3;
- (void)finderPoiReloadAllData:(id)arg1;
- (id)generateUpdateDataWithTabIndex:(unsigned long long)arg1 filterIndex:(unsigned long long)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4 isReload:(_Bool)arg5;
- (id)pageViewModelAtTabIndex:(unsigned long long)arg1 filterIndex:(unsigned long long)arg2;
- (id)streamReportUDFKV:(id)arg1;
- (void)onFeedExposeItemIndex:(long long)arg1 sectionIndex:(long long)arg2 tabIndex:(long long)arg3 filterIndex:(long long)arg4 isEnd:(_Bool)arg5 x:(double)arg6 y:(double)arg7 width:(double)arg8 height:(double)arg9 error:(id *)arg10;
- (void)onFeedTapItemIndex:(long long)arg1 sectionIndex:(long long)arg2 tabIndex:(long long)arg3 filterIndex:(long long)arg4 visibleCellsInfoJSON:(id)arg5 error:(id *)arg6;
- (void)onRequestPOIStreamTabIndex:(long long)arg1 filterIndex:(long long)arg2 isReload:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)onAddressEntranceTapWithError:(id *)arg1;
- (void)onForwardButtonTapWithError:(id *)arg1;
- (void)onChangeFavoriteStateSelected:(_Bool)arg1 error:(id *)arg2;
- (void)onTakeCarButtonTapWithError:(id *)arg1;
- (void)onNavigateButtonTapWithError:(id *)arg1;
- (void)onChangeScrollStateIsTop:(_Bool)arg1 error:(id *)arg2;
- (void)makePhoneCallPhoneNumber:(id)arg1 error:(id *)arg2;
- (void)reloadPOIStream:(id)arg1;
- (void)reloadHeadWithInfo:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (id)initWithCommentScene:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

