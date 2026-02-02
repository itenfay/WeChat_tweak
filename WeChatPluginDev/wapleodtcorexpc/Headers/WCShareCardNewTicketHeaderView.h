//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCShareCardNewTicketHeaderDelegate;

@interface WCShareCardNewTicketHeaderView
{
    double _viewWidth;
    id <WCShareCardNewTicketHeaderDelegate> _delegate;
    _Bool _isHaveCells;
    unsigned int _usedStoreCount;
    _Bool _shouldShowGiftView;
    NSString *_giftUsrName;
    NSString *_giftDesc;
}

- (void).cxx_destruct;
- (void)onLoadImageOK:(id)arg1;
- (void)openUsedStoreView;
- (id)createGiftView;
- (id)createUnnormalStateView;
- (id)createAcceptBtn;
- (id)createHeadImgViewWithUrl:(id)arg1;
- (id)createMoreStoreView;
- (id)createLocationInfoViewWithWidth:(double)arg1;
- (id)createDetailInfoViewWithWidth:(double)arg1;
- (id)createTitleInfoViewWithWidth:(double)arg1;
- (void)initView;
- (id)initWithViewWidth:(double)arg1 CardSourceData:(id)arg2 isShareCard:(_Bool)arg3 cardStatus:(int)arg4 isNeedHideAccecptBtn:(_Bool)arg5 delegate:(id)arg6 usedStoreCount:(unsigned int)arg7 isHaveCells:(_Bool)arg8 shouldShowGift:(_Bool)arg9 giftUsrName:(id)arg10 giftDesc:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

