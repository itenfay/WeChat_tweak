//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableSet, NSString, WXGameWidgetNode;

@interface GWHostBaseView : UIView
{
    _Bool _isChildDirty;
    NSString *_xmlFileName;
    WXGameWidgetNode *_rootNode;
    NSMutableSet *_observedViews;
    struct CGRect _lastCaculateFrame;
    struct CGRect _curConfigFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *observedViews; // @synthesize observedViews=_observedViews;
@property(nonatomic) _Bool isChildDirty; // @synthesize isChildDirty=_isChildDirty;
@property(nonatomic) struct CGRect curConfigFrame; // @synthesize curConfigFrame=_curConfigFrame;
@property(nonatomic) struct CGRect lastCaculateFrame; // @synthesize lastCaculateFrame=_lastCaculateFrame;
@property(retain, nonatomic) WXGameWidgetNode *rootNode; // @synthesize rootNode=_rootNode;
@property(copy, nonatomic) NSString *xmlFileName; // @synthesize xmlFileName=_xmlFileName;
- (void)dealloc;
- (void)markChildDirty:(id)arg1;
- (void)removeObservedView:(id)arg1;
- (void)observeSubview:(id)arg1;
- (struct CGSize)calculateSizeWithLimit:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)isNewFrameSame;
- (void)configureLayout:(struct CGRect)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (unsigned long long)dynamicSizeStyle;
- (_Bool)loadWithXmlFile:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

