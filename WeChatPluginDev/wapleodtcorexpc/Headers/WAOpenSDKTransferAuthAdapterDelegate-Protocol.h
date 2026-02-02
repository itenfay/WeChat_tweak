//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSString, WAOpenSDKTransferAuthAdapter;

@protocol WAOpenSDKTransferAuthAdapterDelegate <NSObject>
- (void)onWAOpenSDKTransferAuthAdapter:(WAOpenSDKTransferAuthAdapter *)arg1 confirmAuthRequestDidComplete:(_Bool)arg2;
- (void)onWAOpenSDKTransferAuthAdapter:(WAOpenSDKTransferAuthAdapter *)arg1 authDidFailWithErrMsg:(NSString *)arg2;
- (void)onWAOpenSDKTransferAuthAdapterUserDidReject:(WAOpenSDKTransferAuthAdapter *)arg1;
- (void)onWAOpenSDKTransferAuthAdapterUserDidAccept:(WAOpenSDKTransferAuthAdapter *)arg1;
- (MMUIViewController *)containerVCForWAOpenSDKTransferAuthAdapter:(WAOpenSDKTransferAuthAdapter *)arg1;
@end

