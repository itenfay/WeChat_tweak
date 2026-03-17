//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMTitleViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class MMTagTextField;

@protocol WCFinderSearchTitleViewDelegate <UITextFieldDelegate, MMTitleViewDelegate>
- (void)onClickCleanButton:(MMTagTextField *)arg1;
- (void)onTextFieldChanged:(MMTagTextField *)arg1;
@end

