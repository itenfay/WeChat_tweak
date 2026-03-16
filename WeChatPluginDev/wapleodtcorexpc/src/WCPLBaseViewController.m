//
// WCPLBaseViewController.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WCPLBaseViewController.h"

#import "WCPLLoadingViewHelpers.h"
#import "WCPLLogger.h"

@interface WCPLBaseViewController ()

@property (strong, nonatomic) id loadingView;

@end

@implementation WCPLBaseViewController

- (void)startLoadingBlocked {
    if (self.loadingView) {
        @try {
            [self.loadingView removeFromSuperview];
        } @catch (NSException *exception) { WCPLCatchLog(exception); }
        self.loadingView = nil;
    }

    self.loadingView = WCPLLoadingViewCreateAndStart(self.view, nil, YES);
}

- (void)startLoadingNonBlock {
    if (self.loadingView) {
        @try {
            [self.loadingView removeFromSuperview];
        } @catch (NSException *exception) { WCPLCatchLog(exception); }
        self.loadingView = nil;
    }

    self.loadingView = WCPLLoadingViewCreateAndStart(self.view, nil, NO);
}

- (void)startLoadingWithText:(NSString *)text {
    [self startLoadingNonBlock];
    WCPLLoadingViewSetText(self.loadingView, text);
}

- (void)stopLoading {
    WCPLLoadingViewStop(self.loadingView);
}

- (void)stopLoadingWithFailText:(NSString *)text {
    WCPLLoadingViewStopWithResult(self.loadingView, NO, text);
}

- (void)stopLoadingWithOKText:(NSString *)text {
    WCPLLoadingViewStopWithResult(self.loadingView, YES, text);
}

@end
