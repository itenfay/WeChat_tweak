//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveAnchorPromoteInfo;

@protocol MMFinderLivePromoteManagePanelDelegate <NSObject>

@optional
- (void)onManagePanelAddIntroducePanel;
- (void)onManagePanelPromoteItemDelete:(MMFinderLiveAnchorPromoteInfo *)arg1 completion:(void (^)(long long, NSString *))arg2;
- (void)onManagePanelFetchData:(void (^)(MMFinderLivePromoteDataModel *))arg1;
- (void)showLivePromoteAddPanel;
- (void)onPromoteManagePanelContentAction:(MMFinderLiveAnchorPromoteInfo *)arg1 dismissAction:(void (^)(_Bool, void (^)(void)))arg2;
@end

