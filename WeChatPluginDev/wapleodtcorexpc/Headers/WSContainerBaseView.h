//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSNumber, NSString, UIViewController, WSContainerViewReporter;

@interface WSContainerBaseView : UIView
{
    _Bool _hasExposed;
    UIViewController *_tabViewController;
    WSContainerViewReporter *_reporter;
    NSNumber *_categoryId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *categoryId; // @synthesize categoryId=_categoryId;
@property(retain, nonatomic) WSContainerViewReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) __weak UIViewController *tabViewController; // @synthesize tabViewController=_tabViewController;
@property(nonatomic) _Bool hasExposed; // @synthesize hasExposed=_hasExposed;
- (id)getCategoryId;
- (void)onSwitchToOtherView:(id)arg1;
- (void)onSwitchToThisView:(id)arg1;
- (void)onQuitWSWebView:(_Bool)arg1;
- (void)onDidEnterWSWebView:(_Bool)arg1;
- (void)onEnterWSWebView:(_Bool)arg1;
- (_Bool)shouldInitViewWhenViewDidAppear;
- (void)exposed;
- (void)initViewIfNeed;
- (id)initConfig:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

