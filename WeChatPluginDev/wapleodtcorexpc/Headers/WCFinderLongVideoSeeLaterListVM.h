//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString, WCFinderFeedArray, WCFinderListLoadingStateModel;

@interface WCFinderLongVideoSeeLaterListVM : NSObject
{
    WCFinderFeedArray *_feedArray;
    WCFinderListLoadingStateModel *_loadingState;
    NSData *_lastBuffer;
    NSString *_fromSessionID;
    NSMutableDictionary *_cellHeightDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cellHeightDict; // @synthesize cellHeightDict=_cellHeightDict;
@property(copy, nonatomic) NSString *fromSessionID; // @synthesize fromSessionID=_fromSessionID;
@property(copy, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) WCFinderListLoadingStateModel *loadingState; // @synthesize loadingState=_loadingState;
@property(retain, nonatomic) WCFinderFeedArray *feedArray; // @synthesize feedArray=_feedArray;
- (void)onSeeLaterStateChanged:(_Bool)arg1 withDataItem:(id)arg2;
- (int)commentScene;
- (void)requestData:(unsigned long long)arg1;
- (void)requestNextPage;
- (void)requestFirstPageIfNeed;
- (id)snapshot;
- (id)contentVMWithIndexPath:(id)arg1;
- (_Bool)isEmpty;
- (void)dealloc;
- (id)initWithInitialData:(id)arg1 lastBuffer:(id)arg2 continueFlag:(_Bool)arg3 fromSessionID:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

