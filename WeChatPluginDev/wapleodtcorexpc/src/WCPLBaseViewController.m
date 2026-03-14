//
// WCPLBaseViewController.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WCPLBaseViewController.h"
#import "WCPLServiceCenter.h"
#import "WCPLWeChatServiceHeaders.h"
#import "WCPLWeChatUIHeaders.h"
#import <objc/runtime.h>

@interface WCPLBaseViewController ()

@property (strong, nonatomic) id loadingView;

@end

@implementation WCPLBaseViewController

- (void)startLoadingBlocked {
    if (!self.loadingView) {
        self.loadingView = [self createDefaultLoadingView];
        [self.view addSubview:self.loadingView];
    } else {
        [self.view bringSubviewToFront:self.loadingView];
    }

    [self.loadingView performSelector:@selector(setM_bIgnoringInteractionEventsWhenLoading:) withObject:@YES];
    [self.loadingView performSelector:@selector(setFitFrame:) withObject:@1];
    [self.loadingView performSelector:@selector(startLoading)];
}

- (void)startLoadingNonBlock {
    if (!self.loadingView) {
        self.loadingView = [self createDefaultLoadingView];
        [self.view addSubview:self.loadingView];
    } else {
        [self.view bringSubviewToFront:self.loadingView];
    }

    [self.loadingView performSelector:@selector(setM_bIgnoringInteractionEventsWhenLoading:) withObject:@NO];
    [self.loadingView performSelector:@selector(setFitFrame:) withObject:@1];
    [self.loadingView performSelector:@selector(startLoading)];
}

- (void)startLoadingWithText:(NSString *)text {
    [self startLoadingNonBlock];
    UILabel *label = [self.loadingView valueForKey:@"m_label"];
    [label setText:text];
}

- (id)createDefaultLoadingView {
    id loadingView = [[objc_getClass("MMLoadingView") alloc] init];

    id languageMgr = WCPLGetService(objc_getClass("MMLanguageMgr"));
    NSString *loadingText = nil;
    if (languageMgr && [languageMgr respondsToSelector:@selector(getStringForCurLanguage:)]) {
        loadingText = [languageMgr getStringForCurLanguage:@"Common_DefaultLoadingText"];
    }
    if (loadingText.length == 0) {
        loadingText = @"加载中…";
    }

    UILabel *label = [loadingView valueForKey:@"m_label"];
    [label setText:loadingText];

    return loadingView;
}

- (void)stopLoading {
    [self.loadingView performSelector:@selector(stopLoading)];
}

- (void)stopLoadingWithFailText:(NSString *)text {
    [self.loadingView performSelector:@selector(stopLoadingAndShowError:) withObject:text];
}

- (void)stopLoadingWithOKText:(NSString *)text {
    [self.loadingView performSelector:@selector(stopLoadingAndShowOK:) withObject:text];
}

@end
