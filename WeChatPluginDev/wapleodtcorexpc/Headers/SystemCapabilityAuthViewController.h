//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView, _TtC6WeChat24SystemAuthCapabilityInfo;

@interface SystemCapabilityAuthViewController
{
    _TtC6WeChat24SystemAuthCapabilityInfo *_capabilityInfo;
    RichTextView *_richTextLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *richTextLabel; // @synthesize richTextLabel=_richTextLabel;
@property(retain, nonatomic) _TtC6WeChat24SystemAuthCapabilityInfo *capabilityInfo; // @synthesize capabilityInfo=_capabilityInfo;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (_Bool)isSetNormalToBlackStyle;
- (id)normalTintColor;
- (id)genHeaderView;
- (id)richTextView;
- (id)genCell:(id)arg1;
- (void)updateViewConstraints;
- (void)initInteractiveNavi;
- (id)navigationBarBackgroundColor;
- (_Bool)showNavigationBarSepLine;
- (void)initView;
- (_Bool)useBlackStatusbar;
- (void)viewDidLoad;
- (id)initWithCapability:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

