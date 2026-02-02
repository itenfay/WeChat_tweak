//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, MsgImgDataLogic, UIView;
@protocol MsgImgFullScreenViewControllerDelegate;

@interface MsgImgFullScreenParam : NSObject
{
    _Bool _soundable;
    _Bool _bNeedEdit;
    _Bool _isShowSingleMsg;
    _Bool _bIsEditMode;
    CMessageWrap *_currentMsg;
    UIView *_snapshotView;
    unsigned long long _eScene;
    unsigned long long _transitioningStyle;
    id <MsgImgFullScreenViewControllerDelegate> _delegate;
    MsgImgDataLogic *_msgImgDataLogic;
    unsigned long long _subScene;
    unsigned long long _m_eType;
    CDUnknownBlockType _customBottomLeftString;
    CDUnknownBlockType _customBottomLeftActioin;
    struct CGRect _originFrame;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType customBottomLeftActioin; // @synthesize customBottomLeftActioin=_customBottomLeftActioin;
@property(copy, nonatomic) CDUnknownBlockType customBottomLeftString; // @synthesize customBottomLeftString=_customBottomLeftString;
@property(nonatomic) _Bool bIsEditMode; // @synthesize bIsEditMode=_bIsEditMode;
@property(nonatomic) unsigned long long m_eType; // @synthesize m_eType=_m_eType;
@property(nonatomic) unsigned long long subScene; // @synthesize subScene=_subScene;
@property(retain, nonatomic) MsgImgDataLogic *msgImgDataLogic; // @synthesize msgImgDataLogic=_msgImgDataLogic;
@property(retain, nonatomic) id <MsgImgFullScreenViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long transitioningStyle; // @synthesize transitioningStyle=_transitioningStyle;
@property(nonatomic) unsigned long long eScene; // @synthesize eScene=_eScene;
@property(nonatomic) _Bool isShowSingleMsg; // @synthesize isShowSingleMsg=_isShowSingleMsg;
@property(nonatomic) _Bool bNeedEdit; // @synthesize bNeedEdit=_bNeedEdit;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(nonatomic) _Bool soundable; // @synthesize soundable=_soundable;
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
@property(retain, nonatomic) CMessageWrap *currentMsg; // @synthesize currentMsg=_currentMsg;
- (id)init;

@end

