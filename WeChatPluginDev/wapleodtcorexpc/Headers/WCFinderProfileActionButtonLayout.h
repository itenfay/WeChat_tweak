//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableDictionary;

@interface WCFinderProfileActionButtonLayout : UIView
{
    double _minLineHeight;
    double _expandHorizontalMargin;
    CDUnknownBlockType _defaultConfig;
    UIView *_followRecommandView;
    NSMutableDictionary *_configMap;
    NSMutableArray *_buttonArray;
    NSMutableDictionary *_cookingBtnMap;
    NSMutableDictionary *_reuseMap;
    unsigned long long _oldLayoutHash;
    struct CGSize _lastLayoutSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize lastLayoutSize; // @synthesize lastLayoutSize=_lastLayoutSize;
@property(nonatomic) unsigned long long oldLayoutHash; // @synthesize oldLayoutHash=_oldLayoutHash;
@property(retain, nonatomic) NSMutableDictionary *reuseMap; // @synthesize reuseMap=_reuseMap;
@property(retain, nonatomic) NSMutableDictionary *cookingBtnMap; // @synthesize cookingBtnMap=_cookingBtnMap;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) NSMutableDictionary *configMap; // @synthesize configMap=_configMap;
@property(retain, nonatomic) UIView *followRecommandView; // @synthesize followRecommandView=_followRecommandView;
@property(copy, nonatomic) CDUnknownBlockType defaultConfig; // @synthesize defaultConfig=_defaultConfig;
@property(nonatomic) double expandHorizontalMargin; // @synthesize expandHorizontalMargin=_expandHorizontalMargin;
@property(nonatomic) double minLineHeight; // @synthesize minLineHeight=_minLineHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)tryGetBtnWithTag:(id)arg1;
- (id)btnWithTag:(id)arg1;
- (void)layout;
- (void)adjustFlexDefines;
- (void)edit:(CDUnknownBlockType)arg1;
- (void)register:(id)arg1 btnCls:(Class)arg2 config:(CDUnknownBlockType)arg3;
- (void)register:(id)arg1 config:(CDUnknownBlockType)arg2;
- (_Bool)needRegister:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

