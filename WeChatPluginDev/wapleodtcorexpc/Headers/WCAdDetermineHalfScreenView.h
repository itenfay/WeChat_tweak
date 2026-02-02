//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, WCAdDetermineHalfScreenInfo, WCAdURLImageView;
@protocol WCAdDetermineHalfScreenViewDelegate;

@interface WCAdDetermineHalfScreenView
{
    id <WCAdDetermineHalfScreenViewDelegate> _delegate;
    WCAdDetermineHalfScreenInfo *_determineInfo;
    WCAdURLImageView *_iconView;
    MMUILabel *_nameLabel;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) WCAdURLImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) WCAdDetermineHalfScreenInfo *determineInfo; // @synthesize determineInfo=_determineInfo;
@property(nonatomic) __weak id <WCAdDetermineHalfScreenViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)pageSheetDidDisappear;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (void)initDetermineUI;
- (void)initCommonUI;
- (id)initWithDetermineInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

