//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, MailRTEImageAttachmentView, NSArray, RTETextAttachment;

@protocol MailRTEImageAttachmentViewDelegate <NSObject>
- (void)onLongPressSelectAttachmentView:(MailRTEImageAttachmentView *)arg1;
- (NSArray *)getAllAttachments;
- (void)onAttachmentNeedReload:(RTETextAttachment *)arg1;
- (MMUIViewController *)getCurrentViewController;
@end

