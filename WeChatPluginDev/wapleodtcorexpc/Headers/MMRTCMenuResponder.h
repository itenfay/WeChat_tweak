//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;
@protocol MMRTCMenuEventDelegate, MMRTCMenuResponderDelegate, MMRTCMenuSelectDelegate;

@interface MMRTCMenuResponder : NSObject
{
    _Bool _disableLongPress;
    _Bool _disableSelectAll;
    _Bool _disableForward;
    _Bool _disableCopy;
    _Bool _useSystemMenu;
    id <MMRTCMenuSelectDelegate> _selectDelegate;
    id <MMRTCMenuResponderDelegate> _responderDelegate;
    id <MMRTCMenuEventDelegate> _eventDelegate;
    NSArray *_originMenuItems;
    NSArray *_originExtraMenuItems;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useSystemMenu; // @synthesize useSystemMenu=_useSystemMenu;
@property(retain, nonatomic) NSArray *originExtraMenuItems; // @synthesize originExtraMenuItems=_originExtraMenuItems;
@property(retain, nonatomic) NSArray *originMenuItems; // @synthesize originMenuItems=_originMenuItems;
@property(nonatomic) _Bool disableCopy; // @synthesize disableCopy=_disableCopy;
@property(nonatomic) _Bool disableForward; // @synthesize disableForward=_disableForward;
@property(nonatomic) _Bool disableSelectAll; // @synthesize disableSelectAll=_disableSelectAll;
@property(nonatomic) _Bool disableLongPress; // @synthesize disableLongPress=_disableLongPress;
@property(nonatomic) __weak id <MMRTCMenuEventDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(nonatomic) __weak id <MMRTCMenuResponderDelegate> responderDelegate; // @synthesize responderDelegate=_responderDelegate;
@property(nonatomic) __weak id <MMRTCMenuSelectDelegate> selectDelegate; // @synthesize selectDelegate=_selectDelegate;
- (void)onMenuHidden;
- (id)getSelectMenuItem;
- (id)getMenuActionResponder:(SEL)arg1;
- (_Bool)canMatchMenuItemWithSelector:(SEL)arg1 Menus:(id)arg2;
- (_Bool)canRespondsToMenuAction:(SEL)arg1;
- (void)onSelectAllText:(id)arg1;
- (void)onSelectSearch:(id)arg1;
- (void)onSelectTextCopy:(id)arg1;
- (void)onSelectTextForward:(id)arg1;

@end

