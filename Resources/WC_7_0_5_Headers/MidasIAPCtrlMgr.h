//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MidasIAPNavCtrl, UIViewController;

@interface MidasIAPCtrlMgr : NSObject
{
    MidasIAPNavCtrl *_nav;
    _Bool _needShowLoadingAfterDismiss;
    UIViewController *_rootViewController;
}

+ (void)deInstance;
+ (id)instance;
- (void).cxx_destruct;
- (void)dismiss;
- (unsigned long long)getViewControllerCount;
- (_Bool)hasUi;
- (void)popCtrl:(_Bool)arg1;
- (void)pushCtrl:(id)arg1 ainimated:(_Bool)arg2;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (id)topViewController;

@end
