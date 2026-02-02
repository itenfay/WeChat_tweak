//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderDynamicRichTextView;

@protocol WCFinderDynamicRichTextViewDelegate <NSObject>

@optional
- (void)onTextViewClickText:(WCFinderDynamicRichTextView *)arg1;
- (void)onTextView:(WCFinderDynamicRichTextView *)arg1 onClickLinkWithHref:(NSString *)arg2;
@end

