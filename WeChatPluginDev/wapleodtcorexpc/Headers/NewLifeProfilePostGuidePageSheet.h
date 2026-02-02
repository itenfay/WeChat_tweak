//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, NewLifeRedDotTipsShowInfo, UIViewController;
@protocol NewLifePostEndDelegate;

@interface NewLifeProfilePostGuidePageSheet
{
    id <NewLifePostEndDelegate> _postEndDelegate;
    UIViewController *_viewController;
    NewLifeRedDotTipsShowInfo *_profilePostRedDotInfo;
    NSMutableDictionary *_reportParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *reportParams; // @synthesize reportParams=_reportParams;
@property(retain, nonatomic) NewLifeRedDotTipsShowInfo *profilePostRedDotInfo; // @synthesize profilePostRedDotInfo=_profilePostRedDotInfo;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <NewLifePostEndDelegate> postEndDelegate; // @synthesize postEndDelegate=_postEndDelegate;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (void)onClickBtn:(id)arg1;
- (void)viewDidLoad;
- (id)initWithViewController:(id)arg1 delegate:(id)arg2 redDotInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

