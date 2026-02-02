//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, WCAdInteractionTagInfo, WCAdInteractionTagLogic, WCAdPagView, WCAdURLImageView, WCDataItem;

@interface WCAdInteractionTagView
{
    _Bool _isDetail;
    WCAdInteractionTagInfo *_adInteractionTagInfo;
    WCDataItem *_dataItem;
    WCAdURLImageView *_normalIconImage;
    WCAdPagView *_activeIconPag;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCAdPagView *activeIconPag; // @synthesize activeIconPag=_activeIconPag;
@property(retain, nonatomic) WCAdURLImageView *normalIconImage; // @synthesize normalIconImage=_normalIconImage;
@property(nonatomic) _Bool isDetail; // @synthesize isDetail=_isDetail;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCAdInteractionTagInfo *adInteractionTagInfo; // @synthesize adInteractionTagInfo=_adInteractionTagInfo;
- (void)onInteractionActiveStateChanged:(id)arg1 contentItemScene:(unsigned long long)arg2 isActive:(_Bool)arg3;
@property(readonly, nonatomic) WCAdInteractionTagLogic *interactionTagLogic;
- (void)adjustView;
- (void)updateView;
- (void)initView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2 isDetail:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

