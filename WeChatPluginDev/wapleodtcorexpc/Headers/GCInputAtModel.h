//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GCCollectionViewManager, GCCommonServer, GCInputAtModelConfig, GCInputAtView, MMGrowTextView, NSData, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface GCInputAtModel : NSObject
{
    _Bool _isAtFilter;
    _Bool _isFromSelctChange;
    _Bool _hasReceiveResponse;
    _Bool _reported;
    GCInputAtView *_atView;
    GCInputAtModelConfig *_config;
    MMGrowTextView *_growTextView;
    NSMutableSet *_atList;
    GCCollectionViewManager *_viewManager;
    GCCommonServer *_server;
    NSData *_context;
    NSMutableArray *_atCellModelArray;
    NSMutableArray *_contentRelatedUserList;
    NSMutableSet *_contentUserIdSet;
    NSMutableArray *_normalUserList;
    NSMutableDictionary *_userNameToCellModel;
    NSMutableArray *_allCellModelArray;
    NSString *_filterText;
    unsigned long long _inputAtLocation;
    NSString *_inputAtFilterPreContent;
    NSString *_inputAtFilterAfterContent;
    NSString *_currentNsText;
    unsigned long long _fetchCnt;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool reported; // @synthesize reported=_reported;
@property(nonatomic) unsigned long long fetchCnt; // @synthesize fetchCnt=_fetchCnt;
@property(nonatomic) _Bool hasReceiveResponse; // @synthesize hasReceiveResponse=_hasReceiveResponse;
@property(retain, nonatomic) NSString *currentNsText; // @synthesize currentNsText=_currentNsText;
@property(nonatomic) _Bool isFromSelctChange; // @synthesize isFromSelctChange=_isFromSelctChange;
@property(retain, nonatomic) NSString *inputAtFilterAfterContent; // @synthesize inputAtFilterAfterContent=_inputAtFilterAfterContent;
@property(retain, nonatomic) NSString *inputAtFilterPreContent; // @synthesize inputAtFilterPreContent=_inputAtFilterPreContent;
@property(nonatomic) unsigned long long inputAtLocation; // @synthesize inputAtLocation=_inputAtLocation;
@property(nonatomic) _Bool isAtFilter; // @synthesize isAtFilter=_isAtFilter;
@property(retain, nonatomic) NSString *filterText; // @synthesize filterText=_filterText;
@property(retain, nonatomic) NSMutableArray *allCellModelArray; // @synthesize allCellModelArray=_allCellModelArray;
@property(retain, nonatomic) NSMutableDictionary *userNameToCellModel; // @synthesize userNameToCellModel=_userNameToCellModel;
@property(retain, nonatomic) NSMutableArray *normalUserList; // @synthesize normalUserList=_normalUserList;
@property(retain, nonatomic) NSMutableSet *contentUserIdSet; // @synthesize contentUserIdSet=_contentUserIdSet;
@property(retain, nonatomic) NSMutableArray *contentRelatedUserList; // @synthesize contentRelatedUserList=_contentRelatedUserList;
@property(retain, nonatomic) NSMutableArray *atCellModelArray; // @synthesize atCellModelArray=_atCellModelArray;
@property(retain, nonatomic) NSData *context; // @synthesize context=_context;
@property(retain, nonatomic) GCCommonServer *server; // @synthesize server=_server;
@property(retain, nonatomic) GCCollectionViewManager *viewManager; // @synthesize viewManager=_viewManager;
@property(retain, nonatomic) NSMutableSet *atList; // @synthesize atList=_atList;
@property(nonatomic) __weak MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) GCInputAtModelConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) GCInputAtView *atView; // @synthesize atView=_atView;
- (void)handleReportWithCellModel:(id)arg1;
- (id)isSearchDictInfo;
- (id)atCellModelFromUserInfo:(id)arg1;
- (void)exitAtFilterStatus;
- (_Bool)checkAtListMatch;
- (void)hideAtPanel;
- (void)checkAtListComplete;
- (void)handleTextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)getCustomeTagLocation:(id)arg1 textView:(id)arg2;
- (void)onContentChange;
- (void)handleNewCellModelArray:(id)arg1;
- (void)updateViewEmptyState;
- (void)handleResponse:(id)arg1;
- (void)triggerGetContentList;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

