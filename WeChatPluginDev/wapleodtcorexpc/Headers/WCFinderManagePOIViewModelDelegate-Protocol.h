//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderManagePOIViewModelDelegate <NSObject>
- (void)onUnbindPOIFailure;
- (void)onUnbindPOISuccess;
- (void)onBindPOIFailure:(int)arg1;
- (void)onBindPOISuccess;
- (void)onBindingPOIListError;
- (void)onBindingPOIListNoMore;
- (void)onBindingPOIListUpdate;
- (void)onAuditingPOIListError;
- (void)onAuditingPOIListNoMore;
- (void)onAuditingPOIListUpdate;
@end

