//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;
@protocol JSApiScopeConfirmWindowDelegate;

@interface JSApiScopeConfirmWindow
{
    NSString *_appName;
    NSString *_appIconURL;
    NSArray *_arrScopeInfo;
    NSString *_confirmTitle;
    unsigned long long _orientationMask;
    id <JSApiScopeConfirmWindowDelegate> _confirmWindowDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <JSApiScopeConfirmWindowDelegate> confirmWindowDelegate; // @synthesize confirmWindowDelegate=_confirmWindowDelegate;
@property(nonatomic) unsigned long long orientationMask; // @synthesize orientationMask=_orientationMask;
@property(retain, nonatomic) NSString *confirmTitle; // @synthesize confirmTitle=_confirmTitle;
@property(retain, nonatomic) NSArray *arrScopeInfo; // @synthesize arrScopeInfo=_arrScopeInfo;
@property(retain, nonatomic) NSString *appIconURL; // @synthesize appIconURL=_appIconURL;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (_Bool)shouldHandleStatusBarAppearance;
- (void)setupView;

@end

