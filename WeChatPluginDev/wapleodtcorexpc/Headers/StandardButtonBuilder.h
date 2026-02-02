//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIButton;

@interface StandardButtonBuilder : NSObject
{
    _Bool _btnLoading;
    unsigned long long _btnType;
    unsigned long long _btnSize;
    unsigned long long _btnStyle;
    NSString *_btnIconName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *btnIconName; // @synthesize btnIconName=_btnIconName;
@property(nonatomic) _Bool btnLoading; // @synthesize btnLoading=_btnLoading;
@property(nonatomic) unsigned long long btnStyle; // @synthesize btnStyle=_btnStyle;
@property(nonatomic) unsigned long long btnSize; // @synthesize btnSize=_btnSize;
@property(nonatomic) unsigned long long btnType; // @synthesize btnType=_btnType;
- (void)applySmallSizeTo:(id)arg1;
- (void)applyMediumSizeTo:(id)arg1;
- (void)applyLargeSizeTo:(id)arg1;
- (void)applyNegativeTypeTo:(id)arg1;
- (void)applySecondaryTypeTo:(id)arg1;
- (void)applyPrimaryTypeTo:(id)arg1;
- (id)realGenStandatdBtn;
@property(readonly, nonatomic) UIButton *standardButton;
@property(readonly, copy, nonatomic) CDUnknownBlockType customizedBtn;
@property(readonly, copy, nonatomic) CDUnknownBlockType iconName;
@property(readonly, copy, nonatomic) CDUnknownBlockType loading;
@property(readonly, copy, nonatomic) CDUnknownBlockType style;
@property(readonly, copy, nonatomic) CDUnknownBlockType size;
@property(readonly, copy, nonatomic) CDUnknownBlockType type;
- (id)init;

@end

