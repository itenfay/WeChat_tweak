//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMAssetPickerUserActionTipsProtocol <NSObject>
@property(nonatomic) _Bool shouldRemoveOnPickerAppear;
@property(nonatomic) _Bool isUserActionManuallyCheckedOnTipsShow;
@property(nonatomic) _Bool hasAppeared;
- (void)didClickCloseTipsButton;
- (void)didClickTips;
- (void)didShowTips;
- (NSString *)displayTips;
- (double)tipsDisplayDuration;
- (_Bool)canShowTips;

@optional
@property(readonly, nonatomic) long long maasEventType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

- (_Bool)isTipsMeetExpectations;
@end

