//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class NSMutableArray, NSString, UIStackView;
@protocol WSWebViewPluginableProtocol;

@interface WSTemplateScrollView : UIScrollView
{
    unsigned long long _curIndex;
    UIStackView *_stackView;
    NSMutableArray *_templateContainers;
    struct CGRect _newlifeTabArea;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect newlifeTabArea; // @synthesize newlifeTabArea=_newlifeTabArea;
@property(retain, nonatomic) NSMutableArray *templateContainers; // @synthesize templateContainers=_templateContainers;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) unsigned long long curIndex; // @synthesize curIndex=_curIndex;
- (void)onUpdateLocalJSTemplateForBizType:(unsigned long long)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)onSetScrollable:(_Bool)arg1;
- (void)onSetFlutterTabAreaWithFrame:(struct CGRect)arg1;
- (void)onStartRenderWithTagId:(long long)arg1;
- (void)templateAppear;
- (void)templateDidDisappear;
- (void)templateWillDisappear;
- (void)quitWSWebView;
- (void)didEnterWSWebView;
- (void)enterWSWebView;
@property(readonly, nonatomic) id <WSWebViewPluginableProtocol> curWebviewContainer;
- (void)loadContentForTabIfNeed:(unsigned long long)arg1;
- (void)scrollRectToPage:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)enumerateWebviewOwnerUsingBlock:(CDUnknownBlockType)arg1;
- (void)initAllWebviewsIfNeed;
- (void)layoutSubviews;
- (void)setContentSize:(struct CGSize)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)initViewWithConfigs:(id)arg1;
- (id)initWithTemplateConfigs:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

