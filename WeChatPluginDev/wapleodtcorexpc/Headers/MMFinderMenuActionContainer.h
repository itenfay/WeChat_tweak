//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMScrollActionSheet, NSMutableArray, NSString, UIScrollView;
@protocol MMFinderMenuActionDelegate;

@interface MMFinderMenuActionContainer : UIView
{
    id <MMFinderMenuActionDelegate> _delegate;
    MMScrollActionSheet *_actionSheet;
    NSMutableArray *_contacts;
    UIScrollView *_scrollView;
    unsigned long long _bizScene;
    long long _longpressedIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long longpressedIndex; // @synthesize longpressedIndex=_longpressedIndex;
@property(nonatomic) unsigned long long bizScene; // @synthesize bizScene=_bizScene;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSMutableArray *contacts; // @synthesize contacts=_contacts;
@property(nonatomic) __weak MMScrollActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(nonatomic) __weak id <MMFinderMenuActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resetContacts:(long long)arg1;
- (void)onDelete:(id)arg1;
- (void)onMenuControllerWillHide;
- (void)onLongpress:(long long)arg1;
- (void)onItemClick:(id)arg1;
- (void)layoutSubviews;
- (id)createNameLabel:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 contacts:(id)arg2 bizScene:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

