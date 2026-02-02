//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILongPressImageView, NSString, UIImage, UIImageView;

@interface MMHeadImageView
{
    UIImageView *_borderImageView;
    NSString *_nsHeadImgUrl;
    NSString *_nsUsrName;
    _Bool _bAutoUpdate;
    UIImage *_borderImage;
    UIImage *_borderImageHL;
    _Bool _addBorder;
    _Bool _bRoundedCorner;
    id _oTarget;
    SEL _selAction;
    id _object;
    id _oLongPressTarget;
    SEL _selLongPressAction;
    id _oDoubleClickTarget;
    SEL _selDoubleClickAction;
    UIImage *_defaultImage;
    unsigned char _headUseScene;
    unsigned char _headCategory;
    _Bool _isHeadImgExistedLocal;
    _Bool _addStoryMaskAction;
    _Bool _bAlwayShowDefaultImage;
    unsigned int _conerSize;
    MMUILongPressImageView *_headImageView;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool bRoundedCorner; // @synthesize bRoundedCorner=_bRoundedCorner;
@property(nonatomic) _Bool bAlwayShowDefaultImage; // @synthesize bAlwayShowDefaultImage=_bAlwayShowDefaultImage;
@property(nonatomic) _Bool addStoryMaskAction; // @synthesize addStoryMaskAction=_addStoryMaskAction;
@property(nonatomic) unsigned int conerSize; // @synthesize conerSize=_conerSize;
@property(retain, nonatomic) MMUILongPressImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) unsigned char headCategory; // @synthesize headCategory=_headCategory;
@property(nonatomic) unsigned char headUseScene; // @synthesize headUseScene=_headUseScene;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(readonly, nonatomic) NSString *nsUsrName; // @synthesize nsUsrName=_nsUsrName;
@property(nonatomic) _Bool addBorder; // @synthesize addBorder=_addBorder;
@property(retain, nonatomic) UIImage *borderImageHL; // @synthesize borderImageHL=_borderImageHL;
@property(retain, nonatomic) UIImage *borderImage; // @synthesize borderImage=_borderImage;
- (void)OnImageDoubleClick:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)OnPress:(id)arg1;
- (void)onModifyEnterpriseContact:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)setHeadImageViewCornerRadius:(double)arg1;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)updateHeadImageUrl:(id)arg1;
- (void)updateHeadImage:(id)arg1;
- (void)resetToDefaultImage;
- (void)updateHighlightRelatedSetting;
- (void)setTargetForDoubleClick:(id)arg1 action:(SEL)arg2 inCell:(_Bool)arg3;
- (void)setTargetForDoubleClick:(id)arg1 action:(SEL)arg2;
- (void)setTargetForLongPress:(id)arg1 action:(SEL)arg2;
- (void)setTarget:(id)arg1 action:(SEL)arg2 withObject:(id)arg3;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)onKFContactHeadImgUpdate:(id)arg1;
- (void)onHeadImageChange:(id)arg1;
@property(nonatomic, getter=isWxHighlighted) _Bool wxHighlighted; // @dynamic wxHighlighted;
- (void)updateExtensionRegister;
- (void)updateUsrName:(id)arg1 withHeadImgUrl:(id)arg2;
- (id)getRealUserName:(id)arg1;
- (void)doUpdateHeadImg:(_Bool)arg1;
- (void)checkAndUpdateImage;
- (void)setHeadImageByName:(id)arg1;
- (double)preferCornerSize;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithUsrName:(id)arg1 headImgUrl:(id)arg2 bAutoUpdate:(_Bool)arg3 bRoundCorner:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

