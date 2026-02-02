//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, WCAdFireworkCheerGuideHalfScreenInfo, WCAdURLImageView;

@interface WCAdFireworkCheerGuideHalfScreenView
{
    WCAdFireworkCheerGuideHalfScreenInfo *_halfScreenInfo;
    WCAdURLImageView *_iconView;
    MMUILabel *_titleView;
    MMUILabel *_descView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *descView; // @synthesize descView=_descView;
@property(retain, nonatomic) MMUILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) WCAdURLImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) WCAdFireworkCheerGuideHalfScreenInfo *halfScreenInfo; // @synthesize halfScreenInfo=_halfScreenInfo;
- (long long)styleForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (double)fetchLabelHeight:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 lineHeight:(double)arg4;
- (id)createLabel:(id)arg1 height:(double)arg2 font:(id)arg3 textColor:(id)arg4;
- (void)initDetailUI;
- (void)initCommonUI;
- (id)initWithHalfScreenInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

