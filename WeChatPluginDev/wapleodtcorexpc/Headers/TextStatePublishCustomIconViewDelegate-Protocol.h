//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TextStateIcon, TextStatePublishCustomIconView;

@protocol TextStatePublishCustomIconViewDelegate <NSObject>

@optional
- (TextStateIcon *)autoReplacedIconWithDescription:(NSString *)arg1;
- (void)onSwitchIconButtonSelected:(_Bool)arg1 customIconView:(TextStatePublishCustomIconView *)arg2;
- (void)onDescrpitionTextDidBeginEditing:(TextStatePublishCustomIconView *)arg1;
- (void)onTextExceedMaxLength:(TextStatePublishCustomIconView *)arg1;
- (void)onTapDoneButton:(TextStatePublishCustomIconView *)arg1;
- (void)onTapCancelButton:(TextStatePublishCustomIconView *)arg1;
- (void)onTapNonexpandedView:(TextStatePublishCustomIconView *)arg1;
@end

