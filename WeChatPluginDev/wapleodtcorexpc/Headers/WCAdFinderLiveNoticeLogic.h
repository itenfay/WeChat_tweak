//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAdFinderLiveNoticeInfo, WCAdHalfScreenFinderLiveNoticeView, WCDataItem;

@interface WCAdFinderLiveNoticeLogic
{
    _Bool _isDetail;
    WCAdFinderLiveNoticeInfo *_adFinderLiveNoticeInfo;
    WCDataItem *_dataItem;
    WCAdHalfScreenFinderLiveNoticeView *_reserveSuccessHalfScreenView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdHalfScreenFinderLiveNoticeView *reserveSuccessHalfScreenView; // @synthesize reserveSuccessHalfScreenView=_reserveSuccessHalfScreenView;
@property(nonatomic) _Bool isDetail; // @synthesize isDetail=_isDetail;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCAdFinderLiveNoticeInfo *adFinderLiveNoticeInfo; // @synthesize adFinderLiveNoticeInfo=_adFinderLiveNoticeInfo;
- (void)onConfirmButtonClick;
- (void)showReserveSuccessView;
- (void)doFinderLiveNoticeReserve;
- (void)start;
- (id)initWithFinderLiveNoticeInfo:(id)arg1 dataItem:(id)arg2 isDetail:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

