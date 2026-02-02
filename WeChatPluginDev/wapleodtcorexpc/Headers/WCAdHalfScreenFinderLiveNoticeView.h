//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAdFinderLiveNoticeInfo;
@protocol WCAdHalfScreenFinderLiveNoticeViewDelegate;

@interface WCAdHalfScreenFinderLiveNoticeView
{
    id <WCAdHalfScreenFinderLiveNoticeViewDelegate> _delegate;
    WCAdFinderLiveNoticeInfo *_finderLiveNoticeInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdFinderLiveNoticeInfo *finderLiveNoticeInfo; // @synthesize finderLiveNoticeInfo=_finderLiveNoticeInfo;
@property(nonatomic) __weak id <WCAdHalfScreenFinderLiveNoticeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)styleForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (void)initDetailUI;
- (void)initCommonUI;
- (void)initSubview;
- (id)initWithFinderLiveNoticeInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

