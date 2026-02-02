//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController, WAAuthorizeResultInfo, WAAuthorizeSheetInfo;
@protocol WAAuthorizePageDelegate;

@protocol IWAAuthorizePage <NSObject>

@optional
@property(copy, nonatomic) CDUnknownBlockType rejectAction;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N

@property(copy, nonatomic) CDUnknownBlockType acceptAction;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N

@property(readonly, nonatomic) WAAuthorizeResultInfo *resultInfo;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"WAAuthorizeResultInfo",?,R,N

@property(retain, nonatomic) WAAuthorizeSheetInfo *info;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"WAAuthorizeSheetInfo",?,&,N

@property(nonatomic) __weak id <WAAuthorizePageDelegate> authDelegate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<WAAuthorizePageDelegate>",?,W,N

- (void)pushVC:(UIViewController *)arg1;
- (void)openUrl:(NSString *)arg1;
- (void)onRejectButtonClick;
- (void)onAcceptButtonClick;
- (void)onInfoButtonClick;
- (void)reloadData;
- (void)dismissWithCompletion:(void (^)(void))arg1;
@end

