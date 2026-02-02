//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSArray;

@protocol MailRTEToolViewDelegate <NSObject>
- (_Bool)onShowExceedMaxObjectCountAlert;
- (void)onShowBasicToolView;
- (void)onShowFullToolView;
- (unsigned int)objectCount;
- (void)makeTextViewFirstResponder;
- (void)insertRTEAttachments:(NSArray *)arg1;
- (MMUIViewController *)getCurrentViewController;
@end

