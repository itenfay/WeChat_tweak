//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAAlertModel : NSObject
{
    _Bool _isShow;
    NSString *_title;
    NSString *_message;
    NSString *_okButton;
    CDUnknownBlockType _okButtonClickedAction;
    NSString *_cancelButton;
    CDUnknownBlockType _cancelButtonClickedAction;
    CDUnknownBlockType _alertDidShowAction;
    id _userInfo;
    CDUnknownBlockType _showEvent;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType showEvent; // @synthesize showEvent=_showEvent;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) CDUnknownBlockType alertDidShowAction; // @synthesize alertDidShowAction=_alertDidShowAction;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(copy, nonatomic) CDUnknownBlockType cancelButtonClickedAction; // @synthesize cancelButtonClickedAction=_cancelButtonClickedAction;
@property(retain, nonatomic) NSString *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(copy, nonatomic) CDUnknownBlockType okButtonClickedAction; // @synthesize okButtonClickedAction=_okButtonClickedAction;
@property(retain, nonatomic) NSString *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)show;
- (id)initWithTitle:(id)arg1 message:(id)arg2 okButton:(id)arg3 cancelButton:(id)arg4 okButtonClickedAction:(CDUnknownBlockType)arg5 cancelButtonClickedAction:(CDUnknownBlockType)arg6;

@end

