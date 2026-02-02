//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, ForwardMessageLogicController, NSArray, NSData, NSString, NewLifeFeedScrollActionDelegateObject, RecentForwardScrollView, WCFinderDataItem;

@interface NewLifeScrollActionSheet
{
    _Bool _isRecentForward;
    _Bool _author;
    _Bool _isInnerUser;
    CDUnknownBlockType _callbackHandler;
    CDUnknownBlockType _forwardCompletion;
    NewLifeFeedScrollActionDelegateObject *_delegateObj;
    WCFinderDataItem *_dataItem;
    RecentForwardScrollView *_recentView;
    CMessageWrap *_forwardMsg;
    ForwardMessageLogicController *_forwardLogic;
    NSArray *_statusWordingList;
    NSData *_thumbData;
}

+ (id)getForwardExtraInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *thumbData; // @synthesize thumbData=_thumbData;
@property(retain, nonatomic) NSArray *statusWordingList; // @synthesize statusWordingList=_statusWordingList;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(retain, nonatomic) CMessageWrap *forwardMsg; // @synthesize forwardMsg=_forwardMsg;
@property(retain, nonatomic) RecentForwardScrollView *recentView; // @synthesize recentView=_recentView;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) NewLifeFeedScrollActionDelegateObject *delegateObj; // @synthesize delegateObj=_delegateObj;
@property(nonatomic) _Bool isInnerUser; // @synthesize isInnerUser=_isInnerUser;
@property(nonatomic, getter=isAuthor) _Bool author; // @synthesize author=_author;
@property(copy, nonatomic) CDUnknownBlockType forwardCompletion; // @synthesize forwardCompletion=_forwardCompletion;
@property(copy, nonatomic) CDUnknownBlockType callbackHandler; // @synthesize callbackHandler=_callbackHandler;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)directForwardMsg;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (_Bool)isActionTypeEnable:(int)arg1;
- (_Bool)isLocalPreview;
- (_Bool)isHeartItemVisible;
- (_Bool)isEditItemVisible;
- (id)itemImageDisableColor;
- (void)callback:(int)arg1 isSuccess:(_Bool)arg2 extraInfo:(id)arg3;
- (void)callback:(int)arg1 isSuccess:(_Bool)arg2;
- (void)showErrorTips:(id)arg1;
- (void)showDoneTips:(id)arg1;
- (id)compliantItem;
- (id)unlikeItem;
- (id)heartItem;
- (id)editItem;
- (id)publicItem;
- (id)deleteItem;
- (id)topItem;
- (id)debugItem;
- (id)favoriteItem;
- (id)shareMPFeedToTimeline:(id)arg1 title:(id)arg2 desc:(id)arg3 thumbData:(id)arg4 size:(struct CGSize)arg5;
- (id)momentsForwardItem;
- (id)forwardItem;
- (void)addBodyFooterView;
- (id)secondRow;
- (id)firstRow;
- (id)allItemRows;
- (_Bool)isLocal;
- (_Bool)isStickyTop;
- (_Bool)isPrivated;
- (_Bool)isSelf;
- (id)initWithDataItem:(id)arg1 isAuthor:(_Bool)arg2 isInnerUser:(_Bool)arg3 thumbData:(id)arg4;
- (void)onDataItemForwarded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

