//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class WCRedesignTextItem, WCRedesignVerifyCodeTextItem;

@interface WCAccountNewPhoneVerifyPageView : UIView
{
    unsigned long long _page;
    WCRedesignTextItem *_passwordTextItem;
    WCRedesignVerifyCodeTextItem *_verifyCodeTextItem;
    CDUnknownBlockType _tapVerifyCodeButtonHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType tapVerifyCodeButtonHandler; // @synthesize tapVerifyCodeButtonHandler=_tapVerifyCodeButtonHandler;
@property(retain, nonatomic) WCRedesignVerifyCodeTextItem *verifyCodeTextItem; // @synthesize verifyCodeTextItem=_verifyCodeTextItem;
@property(retain, nonatomic) WCRedesignTextItem *passwordTextItem; // @synthesize passwordTextItem=_passwordTextItem;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
- (void)changeToPage:(unsigned long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)initItems;
- (id)initWithFrame:(struct CGRect)arg1;

@end

