//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmotionLinkInfo, NSString;

@interface MMStoreEmoticonPreviewCell
{
    _Bool _disableDownload;
    _Bool _didLoadCacheLinkInfo;
    EmotionLinkInfo *_linkInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didLoadCacheLinkInfo; // @synthesize didLoadCacheLinkInfo=_didLoadCacheLinkInfo;
@property(retain, nonatomic) EmotionLinkInfo *linkInfo; // @synthesize linkInfo=_linkInfo;
@property(nonatomic) _Bool disableDownload; // @synthesize disableDownload=_disableDownload;
- (void)updateAccessibilityLabel;
- (void)layoutBaseViewContainer;
- (void)layoutSubviews;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)updateNameWithArrow;
- (void)updateLinkInfoLayout;
- (void)updateWithLinkInfo:(id)arg1;
- (void)updateStoreItem:(id)arg1;
- (id)downloadLogicConfig;
- (void)setMsgBrowseStyleWithDownloadable:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

