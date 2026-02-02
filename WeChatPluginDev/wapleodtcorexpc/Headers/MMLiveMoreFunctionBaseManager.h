//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, MMLiveAnchorMoreFunctionOperationView, NSMutableArray, NSString;
@protocol MMLiveMoreFunctionManagerDelegate;

@interface MMLiveMoreFunctionBaseManager : NSObject
{
    _Bool _isGameLive;
    id <MMLiveMoreFunctionManagerDelegate> _delegate;
    NSMutableArray *_dataArray;
    MMLiveAnchorMoreFunctionOperationView *_operationView;
    unsigned long long _operationViewType;
    MMFinderLiveTaskId *_liveTaskId;
    double _customHeight;
    long long _fromSrc;
    CDUnknownBlockType _redDotQueryBlock;
    CDUnknownBlockType _redDotExposeBlock;
    CDUnknownBlockType _redDotClickBlock;
}

+ (id)getMoreFunctionItemsWithTaskId:(id)arg1 viewType:(unsigned long long)arg2 isGameLive:(_Bool)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType redDotClickBlock; // @synthesize redDotClickBlock=_redDotClickBlock;
@property(copy, nonatomic) CDUnknownBlockType redDotExposeBlock; // @synthesize redDotExposeBlock=_redDotExposeBlock;
@property(copy, nonatomic) CDUnknownBlockType redDotQueryBlock; // @synthesize redDotQueryBlock=_redDotQueryBlock;
@property(nonatomic) long long fromSrc; // @synthesize fromSrc=_fromSrc;
@property(nonatomic) double customHeight; // @synthesize customHeight=_customHeight;
@property(nonatomic) _Bool isGameLive; // @synthesize isGameLive=_isGameLive;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(nonatomic) unsigned long long operationViewType; // @synthesize operationViewType=_operationViewType;
@property(retain, nonatomic) MMLiveAnchorMoreFunctionOperationView *operationView; // @synthesize operationView=_operationView;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) __weak id <MMLiveMoreFunctionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getFunctionItemForRowAtIndexPath:(id)arg1;
- (double)getTitleStringHeightWithItem:(id)arg1;
- (double)getDetailStringHeightWithItem:(id)arg1;
- (unsigned long long)getCellRetCorner:(id)arg1 dataArray:(id)arg2;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (_Bool)isCanUseSectionArray:(id)arg1;
- (long long)getCurrentSectionCount:(long long)arg1;
- (double)getCurrentSectionHeight:(id)arg1;
- (id)getCurrentTitle:(unsigned long long)arg1;
- (id)createData:(unsigned long long)arg1;
- (void)onOperationViewWillDisappear;
- (id)getAnchorMoreFunctionOperationView;
- (void)onReportOperationViewDidSelect:(unsigned long long)arg1 item:(id)arg2;
- (void)invokePushToVC:(id)arg1 naviBarHidden:(_Bool)arg2 fromItem:(id)arg3;
- (void)moreFunctionIndexPath:(id)arg1 item:(id)arg2 isOn:(_Bool)arg3;
- (_Bool)canDidSelectWithItem:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadOperationView;
- (void)hideMoreFunctionOperationView;
- (void)showMoreFunctionOperationViewWithTaskId:(id)arg1 operationViewType:(unsigned long long)arg2 isGameLive:(_Bool)arg3 customHeight:(double)arg4 inView:(id)arg5 fromSrc:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

