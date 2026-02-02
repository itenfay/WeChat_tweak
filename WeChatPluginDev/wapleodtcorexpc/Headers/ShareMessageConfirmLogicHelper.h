//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, NSData, NSDictionary, NSString, ShareConfirmView;
@protocol ShareMessageConfirmLogicHelperDelegate;

@interface ShareMessageConfirmLogicHelper
{
    ShareConfirmView *_confirmView;
    CMessageWrap *_msgWrap;
    id <ShareMessageConfirmLogicHelperDelegate> _delegate;
    NSData *_imageData;
    NSString *_thumbImageUrl;
    unsigned int _scene;
    _Bool _isShowTextView;
    _Bool _isAddMessage;
    _Bool _isAddTextMessage;
    _Bool _isShowSendSuccessView;
    unsigned int _style;
    _Bool _hasBeenHidden;
    NSDictionary *_userData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *userData; // @synthesize userData=_userData;
@property(nonatomic) _Bool isShowSendSuccessView; // @synthesize isShowSendSuccessView=_isShowSendSuccessView;
@property(nonatomic) _Bool isAddTextMessage; // @synthesize isAddTextMessage=_isAddTextMessage;
@property(nonatomic) _Bool isAddMessage; // @synthesize isAddMessage=_isAddMessage;
@property(retain, nonatomic) NSString *thumbImageUrl; // @synthesize thumbImageUrl=_thumbImageUrl;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(nonatomic) __weak id <ShareMessageConfirmLogicHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnStayAtWeChat:(id)arg1;
- (void)OnBackToApp:(id)arg1;
- (void)OnError:(id)arg1;
- (void)OnCancel:(id)arg1;
- (void)OnSend:(id)arg1;
- (void)rotateToOrientaion:(long long)arg1;
- (void)rotateToCurrentOrietation;
- (void)hideConfirmView;
- (void)showConfirmView;
- (void)showConfirmViewWithInputText:(id)arg1;
- (void)showConfirmViewWithInputText:(id)arg1 showText:(id)arg2;
- (void)setConfirmViewStyle:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithMessageWrap:(id)arg1 isShowTextView:(_Bool)arg2 andAppScene:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

