//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WARichTextViewHelperDelegate <NSObject>
- (void)onTextClicked:(NSString *)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(NSString *)arg1 linkRect:(struct CGRect)arg2;
@end

