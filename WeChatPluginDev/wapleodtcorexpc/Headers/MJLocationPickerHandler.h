//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMPickLocationViewController;

@interface MJLocationPickerHandler : NSObject
{
    CDUnknownBlockType _didFinishPick;
    CDUnknownBlockType _didCancel;
    MMPickLocationViewController *_picker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMPickLocationViewController *picker; // @synthesize picker=_picker;
@property(copy, nonatomic) CDUnknownBlockType didCancel; // @synthesize didCancel=_didCancel;
@property(copy, nonatomic) CDUnknownBlockType didFinishPick; // @synthesize didFinishPick=_didFinishPick;
- (void)onCancelSeletctedLocation;
- (void)onTapAddButton;
- (id)onGetRightBarButton;
- (void)dealloc;
- (id)initWithPicker:(id)arg1;

@end

