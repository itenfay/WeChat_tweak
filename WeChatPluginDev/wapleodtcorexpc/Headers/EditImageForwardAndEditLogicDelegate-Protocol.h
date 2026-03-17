//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditImageAttr;

@protocol EditImageForwardAndEditLogicDelegate <NSObject>

@optional
- (void)onEditImageForwardAndEditResult:(EditImageAttr *)arg1;
- (void)onSaveImageSuccessInEditView;
- (void)onAddFavoritesSuccessInEditView;
- (void)onForwardMessageCancelInEditView;
- (void)onForwardMessageSendOKInEditView;
- (void)onDismissEditView;
- (void)onShowingEditView;
@end

