//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIView;

@protocol FavTagEditViewDelegate <NSObject>

@optional
- (void)onDeleteButtonFromTagEditView:(NSString *)arg1;
- (void)onAddButtonFromTagEditView:(NSString *)arg1;
- (void)hideKeyboardOnScroll:(UIView *)arg1;
- (void)onLongPressTagBtn:(UIView *)arg1;
- (void)onTagUnHighLight:(NSString *)arg1;
- (void)onTagHighLight:(NSString *)arg1;
- (void)onDeleteButton:(NSString *)arg1;
- (void)onAddButton:(NSString *)arg1;
- (void)cleanTextField:(UIView *)arg1;
- (void)onTextFieldMoved:(UIView *)arg1;
- (void)onTextFieldChanged:(UIView *)arg1;
- (_Bool)onTextFieldShouldBeginEditing:(UIView *)arg1;
@end

