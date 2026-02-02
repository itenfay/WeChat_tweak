//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonStoreItem, MMEmoticonStoreDownloadLogic, MMWebImageView, NSString, UIView;

@interface MMStoreEmotionBaseAllCell
{
    _Bool _layoutStaticBtnWidth;
    long long _type;
    long long _scene;
    EmoticonStoreItem *_storeItem;
    MMEmoticonStoreDownloadLogic *_downloadLogic;
    unsigned long long _lineStyle;
    double _horizontalInset;
    MMWebImageView *_linkIconView;
    CDUnknownBlockType _downloadViewSDKReportSetter;
    UIView *_lastCellLineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lastCellLineView; // @synthesize lastCellLineView=_lastCellLineView;
@property(copy, nonatomic) CDUnknownBlockType downloadViewSDKReportSetter; // @synthesize downloadViewSDKReportSetter=_downloadViewSDKReportSetter;
@property(nonatomic) _Bool layoutStaticBtnWidth; // @synthesize layoutStaticBtnWidth=_layoutStaticBtnWidth;
@property(retain, nonatomic) MMWebImageView *linkIconView; // @synthesize linkIconView=_linkIconView;
@property(nonatomic) double horizontalInset; // @synthesize horizontalInset=_horizontalInset;
@property(nonatomic) unsigned long long lineStyle; // @synthesize lineStyle=_lineStyle;
@property(retain, nonatomic) MMEmoticonStoreDownloadLogic *downloadLogic; // @synthesize downloadLogic=_downloadLogic;
@property(retain, nonatomic) EmoticonStoreItem *storeItem; // @synthesize storeItem=_storeItem;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)getNameTextWithArrow:(id)arg1 foregroundColor:(id)arg2;
- (id)getNameTextWithArrow:(id)arg1;
- (id)downloadLogicReportInfo;
- (void)onStoreDownloadLogicDisplayViewChanged;
- (void)onDownloadFinished;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)arg1;
- (void)updateSpilitLineStyle:(void *)arg1;
- (void)layoutRightViewContainer;
- (void)layoutBaseViewContainer;
- (void)layoutContentView;
- (void)prepareForReuse;
- (void)appendBottomLineForlast;
- (void)setHighlighted:(_Bool)arg1;
- (void)setScene:(long long)arg1 andType:(long long)arg2;
- (void)updateWithLinkInfo:(id)arg1;
- (void)updateLinkInfoLayout;
- (void)updateStoreItem:(id)arg1;
- (void)initDownloadView;
- (id)downloadLogicConfig;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

