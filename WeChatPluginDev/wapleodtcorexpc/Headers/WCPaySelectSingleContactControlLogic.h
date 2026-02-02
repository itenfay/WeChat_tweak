//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSApiSelectSessionViewController, NSString;
@protocol WCPaySelectSingleContactControlLogicDelegate;

@interface WCPaySelectSingleContactControlLogic
{
    _Bool _pushVC;
    _Bool _onlyShowContactList;
    id <WCPaySelectSingleContactControlLogicDelegate> _delegate;
    NSString *_selectContactVCTitle;
    JSApiSelectSessionViewController *_selectSessionVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JSApiSelectSessionViewController *selectSessionVC; // @synthesize selectSessionVC=_selectSessionVC;
@property(copy, nonatomic) NSString *selectContactVCTitle; // @synthesize selectContactVCTitle=_selectContactVCTitle;
@property(nonatomic) _Bool onlyShowContactList; // @synthesize onlyShowContactList=_onlyShowContactList;
@property(nonatomic) _Bool pushVC; // @synthesize pushVC=_pushVC;
@property(nonatomic) __weak id <WCPaySelectSingleContactControlLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnJSApiSelectSessionViewControllerNewSession;
- (void)OnJSApiSelectSessionViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (_Bool)OnJSApiSelectSessionViewControllerFilterContactCandidate:(id)arg1;
- (void)OnJSApiSelectSessionViewControllerBack;
- (void)OnJSApiSelectContactsViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (_Bool)OnJSApiSelectContactsViewControllerFilterContactCandidate:(id)arg1;
- (void)OnJSApiSelectContactsViewControllerBack;
- (void)stopSelectContact;
- (void)WCPayViewControllerDidBeRemoved:(id)arg1;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)startLogic;
- (id)initWithData:(id)arg1 delegate:(id)arg2;

@end

