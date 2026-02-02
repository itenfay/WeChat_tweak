//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIFont;

@interface MMFinderLiveFansGroupSignUIStateInfo : NSObject
{
    _Bool _autoAdjustWidth;
    _Bool _autoAdjustHeight;
    _Bool _isSuperfan;
    _Bool _isFansGroupIconCenter;
    double _width;
    double _height;
    long long _uiStyle;
    long long _uiMode;
    long long _uiShape;
    NSString *_fansGroupText;
    unsigned long long _fansGroupRank;
    double _fansGroupIconLeft;
    UIFont *_fanGroupTextFont;
    struct CGSize _fanGroupIconSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *fanGroupTextFont; // @synthesize fanGroupTextFont=_fanGroupTextFont;
@property(nonatomic) double fansGroupIconLeft; // @synthesize fansGroupIconLeft=_fansGroupIconLeft;
@property(nonatomic) _Bool isFansGroupIconCenter; // @synthesize isFansGroupIconCenter=_isFansGroupIconCenter;
@property(nonatomic) struct CGSize fanGroupIconSize; // @synthesize fanGroupIconSize=_fanGroupIconSize;
@property(nonatomic) _Bool isSuperfan; // @synthesize isSuperfan=_isSuperfan;
@property(nonatomic) _Bool autoAdjustHeight; // @synthesize autoAdjustHeight=_autoAdjustHeight;
@property(nonatomic) _Bool autoAdjustWidth; // @synthesize autoAdjustWidth=_autoAdjustWidth;
@property(nonatomic) unsigned long long fansGroupRank; // @synthesize fansGroupRank=_fansGroupRank;
@property(retain, nonatomic) NSString *fansGroupText; // @synthesize fansGroupText=_fansGroupText;
@property(nonatomic) long long uiShape; // @synthesize uiShape=_uiShape;
@property(nonatomic) long long uiMode; // @synthesize uiMode=_uiMode;
@property(nonatomic) long long uiStyle; // @synthesize uiStyle=_uiStyle;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
- (_Bool)isEqual:(id)arg1;

@end

