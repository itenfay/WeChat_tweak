//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString;

@interface UIView (CSS)
+ (void)load;
- (void)reloadCssStyle;
- (id)cssStyle;
@property(retain, nonatomic) NSString *cssClass;
- (void)cssDidAddSubview:(id)arg1;
@end

