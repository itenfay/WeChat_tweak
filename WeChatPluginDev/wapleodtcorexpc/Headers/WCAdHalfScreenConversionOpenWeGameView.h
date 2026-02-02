//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, WCAdOpenWeGameHalfScreenInfo, WCAdURLImageView;

@interface WCAdHalfScreenConversionOpenWeGameView
{
    WCAdOpenWeGameHalfScreenInfo *_halfScreenInfo;
    CDUnknownBlockType _resultBlock;
    WCAdURLImageView *_gameIconView;
    MMUILabel *_gameTitleView;
    MMUILabel *_giftNameView;
    MMUILabel *_tipWordingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *tipWordingView; // @synthesize tipWordingView=_tipWordingView;
@property(retain, nonatomic) MMUILabel *giftNameView; // @synthesize giftNameView=_giftNameView;
@property(retain, nonatomic) MMUILabel *gameTitleView; // @synthesize gameTitleView=_gameTitleView;
@property(retain, nonatomic) WCAdURLImageView *gameIconView; // @synthesize gameIconView=_gameIconView;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(retain, nonatomic) WCAdOpenWeGameHalfScreenInfo *halfScreenInfo; // @synthesize halfScreenInfo=_halfScreenInfo;
- (void)pageSheetDidClose:(_Bool)arg1;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (id)createLabel:(id)arg1 height:(double)arg2 font:(id)arg3 textColor:(id)arg4;
- (void)initDetailUI;
- (void)initCommonUI;
- (id)initWithHalfScreenInfo:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

