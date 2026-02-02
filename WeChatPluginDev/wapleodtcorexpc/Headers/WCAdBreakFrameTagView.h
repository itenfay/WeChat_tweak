//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, WCAdBreakFrameInfo, WCAdBreakFrameTagLogic, WCAdTypewriterLabel, WCAdURLImageView, WCDataItem;

@interface WCAdBreakFrameTagView
{
    _Bool _isDetail;
    WCAdBreakFrameInfo *_adBreakFrameInfo;
    WCDataItem *_dataItem;
    WCAdBreakFrameTagLogic *_tagLogic;
    WCAdURLImageView *_iconView;
    WCAdTypewriterLabel *_titleView;
    MMUIButton *_bgButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *bgButton; // @synthesize bgButton=_bgButton;
@property(retain, nonatomic) WCAdTypewriterLabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) WCAdURLImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) WCAdBreakFrameTagLogic *tagLogic; // @synthesize tagLogic=_tagLogic;
@property(nonatomic) _Bool isDetail; // @synthesize isDetail=_isDetail;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCAdBreakFrameInfo *adBreakFrameInfo; // @synthesize adBreakFrameInfo=_adBreakFrameInfo;
- (void)onBreakFrameInteractionStateChanged:(id)arg1 interactionState:(int)arg2;
- (void)onClickBgButton;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 adBreakFrameInfo:(id)arg2 dataItem:(id)arg3 isDetail:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

