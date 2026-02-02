//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMDropableTitleView, MMUIViewController, NSArray, NSString, UIView;
@protocol WCNavTitleDropControllDelegate;

@interface WCNavTitleDropController : NSObject
{
    MMUIViewController *_attachViewController;
    NSString *_title;
    UIView *_backgroundView;
    UIView *_operateContentView;
    _Bool _isShowingItems;
    id <WCNavTitleDropControllDelegate> _delegate;
    NSArray *_arrItems;
    MMDropableTitleView *_titleView;
    double _dropViewOriginY;
}

- (void).cxx_destruct;
@property(nonatomic) double dropViewOriginY; // @synthesize dropViewOriginY=_dropViewOriginY;
@property(readonly, nonatomic) MMDropableTitleView *titleView; // @synthesize titleView=_titleView;
@property(readonly, nonatomic) _Bool isShowingItems; // @synthesize isShowingItems=_isShowingItems;
@property(readonly, nonatomic) NSArray *arrItems; // @synthesize arrItems=_arrItems;
@property(nonatomic) __weak id <WCNavTitleDropControllDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickOperateItem:(id)arg1;
- (void)onTapCancel:(id)arg1;
- (void)onClickDropableTitleView:(id)arg1;
- (void)updateItemSelectedIndex:(unsigned int)arg1;
- (id)getButtonByIndex:(unsigned int)arg1;
- (void)dismissView;
- (void)showItems;
- (id)makeButtonWithItem:(id)arg1 index:(int)arg2;
- (void)addTopLineView;
- (void)initItemView;
- (void)initOperateContentView;
- (void)initBackgroundViews;
- (void)updateTitle:(id)arg1 animated:(_Bool)arg2;
- (void)initTitleView;
- (id)initWithViewController:(id)arg1 title:(id)arg2 dropItems:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

