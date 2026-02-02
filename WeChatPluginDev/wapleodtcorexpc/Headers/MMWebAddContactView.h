//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, JSEvent, MMLoadingView, NSString, WOAPPrivacyConfirmLogic;
@protocol WebAddContactDelegate;

@interface MMWebAddContactView
{
    NSString *m_nsUsrName;
    JSEvent *m_nsCallBack;
    id <WebAddContactDelegate> m_delegate;
    int m_scene;
    MMLoadingView *m_loadingView;
    CContact *m_oContact;
    WOAPPrivacyConfirmLogic *_privacyConfirmLogic;
    NSString *_reportInfo;
    NSString *_scenenote;
    NSString *_finderBuffer;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *finderBuffer; // @synthesize finderBuffer=_finderBuffer;
@property(copy, nonatomic) NSString *scenenote; // @synthesize scenenote=_scenenote;
@property(retain, nonatomic) NSString *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(nonatomic) int m_scene; // @synthesize m_scene;
@property(nonatomic) __weak id <WebAddContactDelegate> m_delegate; // @synthesize m_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleContact:(id)arg1;
- (void)CreateVerify;
- (void)CreateSearch;
- (void)OnAddOk;
- (void)OnConfirm:(long long)arg1;
- (void)OnAdd;
- (void)OnCancel;
- (void)layoutSubviewToOrientation:(long long)arg1;
- (id)generateTextLabel:(id)arg1 frame:(struct CGRect)arg2 fontSize:(double)arg3 numberOfLines:(unsigned long long)arg4;
- (id)generateCustomViewForContact;
- (void)UpdateView:(unsigned int)arg1 errMsg:(id)arg2;
- (void)UpdateView:(unsigned int)arg1;
- (void)initLoadingView;
- (void)initView;
- (void)dealloc;
- (id)initWithUsrName:(id)arg1 CallBack:(id)arg2;

@end

