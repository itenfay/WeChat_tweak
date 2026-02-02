//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CBaseContact, NSString, UIImageView;

@interface MultiTalkHDHeadView : UIView
{
    _Bool _m_vaild;
    UIImageView *_m_headView;
    CBaseContact *_m_contact;
    NSString *_m_headImgUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_headImgUrl; // @synthesize m_headImgUrl=_m_headImgUrl;
@property(retain, nonatomic) CBaseContact *m_contact; // @synthesize m_contact=_m_contact;
@property(retain, nonatomic) UIImageView *m_headView; // @synthesize m_headView=_m_headView;
@property(nonatomic) _Bool m_vaild; // @synthesize m_vaild=_m_vaild;
- (void)onStrangerContactUpdateForbidden:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)internalGetImageForUsername;
- (void)internalGetImageForUrl;
- (id)getRealUserName:(id)arg1;
- (void)downloadHDHeadImage;
- (void)dealloc;
- (_Bool)updateHDHeadToView;
- (void)updateNormalHeadToView;
- (void)updateHeadImageUrl:(id)arg1 contact:(id)arg2;
- (void)updateContact:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

