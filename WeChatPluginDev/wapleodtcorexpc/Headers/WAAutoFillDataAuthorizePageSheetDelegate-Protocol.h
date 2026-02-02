//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSURL, WAAutoFillDataAuthorizePageSheet;

@protocol WAAutoFillDataAuthorizePageSheetDelegate <NSObject>
- (void)onWAAutoFillDataAuthorizePageSheet:(WAAutoFillDataAuthorizePageSheet *)arg1 didClickTextViewLinkURL:(NSURL *)arg2;
- (void)onWAAutoFillDataAuthorizePageSheetDidClickRejectButton:(WAAutoFillDataAuthorizePageSheet *)arg1;
- (void)onWAAutoFillDataAuthorizePageSheetDidClickAcceptButton:(WAAutoFillDataAuthorizePageSheet *)arg1;
@end

