//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, FavoritesItem, FavoritesItemDataField, UINavigationController, WCDataItem;

@interface WNOpenParameter
{
    _Bool _bEditable;
    _Bool _bForbidShowMoreMenu;
    _Bool _bNeedTriggerDataEdited;
    _Bool _bNeedForceShowKeyboard;
    _Bool _bAnimate;
    _Bool _bShowLocateToMsg;
    unsigned int _vcType;
    UINavigationController *_navigationController;
    unsigned long long _enPushType;
    unsigned long long _scene;
    FavoritesItem *_favItem;
    FavoritesItemDataField *_data;
    CMessageWrap *_messageWrap;
    WCDataItem *_wcDataItem;
    FavoritesItemDataField *_scrollToData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bShowLocateToMsg; // @synthesize bShowLocateToMsg=_bShowLocateToMsg;
@property(nonatomic) _Bool bAnimate; // @synthesize bAnimate=_bAnimate;
@property(nonatomic) unsigned int vcType; // @synthesize vcType=_vcType;
@property(nonatomic) _Bool bNeedForceShowKeyboard; // @synthesize bNeedForceShowKeyboard=_bNeedForceShowKeyboard;
@property(nonatomic) _Bool bNeedTriggerDataEdited; // @synthesize bNeedTriggerDataEdited=_bNeedTriggerDataEdited;
@property(retain, nonatomic) FavoritesItemDataField *scrollToData; // @synthesize scrollToData=_scrollToData;
@property(nonatomic) _Bool bForbidShowMoreMenu; // @synthesize bForbidShowMoreMenu=_bForbidShowMoreMenu;
@property(nonatomic) _Bool bEditable; // @synthesize bEditable=_bEditable;
@property(retain, nonatomic) WCDataItem *wcDataItem; // @synthesize wcDataItem=_wcDataItem;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;
@property(retain, nonatomic) FavoritesItemDataField *data; // @synthesize data=_data;
@property(retain, nonatomic) FavoritesItem *favItem; // @synthesize favItem=_favItem;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long enPushType; // @synthesize enPushType=_enPushType;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (id)init;

@end

