//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMActionSheetDatePicker, MMPickLocationViewController, NSString, WCAccountBindPhoneControlLogic;
@protocol SolitaireToolLogicControllerDelegate;

@interface SolitaireToolLogicController : NSObject
{
    id <SolitaireToolLogicControllerDelegate> _delegate;
    MMPickLocationViewController *_locationViewController;
    MMActionSheetDatePicker *_datePicker;
    WCAccountBindPhoneControlLogic *_bindPhoneLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAccountBindPhoneControlLogic *bindPhoneLogic; // @synthesize bindPhoneLogic=_bindPhoneLogic;
@property(retain, nonatomic) MMActionSheetDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) MMPickLocationViewController *locationViewController; // @synthesize locationViewController=_locationViewController;
@property(nonatomic) __weak id <SolitaireToolLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)getPhoneNumberDidComfirm:(id)arg1;
- (void)getPhoneNumberDidCancel;
- (void)datePickerCancel:(id)arg1;
- (void)datePickerConfirm:(id)arg1;
- (void)onCancelSeletctedLocation;
- (void)onFinishSelectedLocation;
- (id)onGetRightBarButton;
- (void)cancelBindPhone;
- (void)showGetPhoneNumberSheet;
- (void)showDatePicker;
- (void)jumpToLocationView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

