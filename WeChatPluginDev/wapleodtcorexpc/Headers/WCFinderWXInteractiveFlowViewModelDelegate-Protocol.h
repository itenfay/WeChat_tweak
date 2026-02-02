//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCFinderWXInteractiveFlowViewModelDelegate <NSObject>

@optional
- (void)onFlowViewModelDeleteDataItemTid:(NSString *)arg1;
- (void)onFlowViewModelLoadFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onFlowViewModelFetchFail;
- (void)onFlowViewModelFetchSuc;
- (void)onFlowViewModelFetchBegin;
- (void)onFlowViewModelTabChanged;
- (void)onFlowViewModelTabLocalLoaded;
@end

