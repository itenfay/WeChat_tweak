//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, UIBezierPath, UIColor, UITableViewCell, WCTableViewCellBaseConfig;

@interface WCTableViewCellManager : NSObject
{
    _Bool _isNeedFixWidthAndAdjustFont;
    _Bool _bNeedRemoveSystemSeperateLine;
    _Bool _bNeedSeperateLine;
    _Bool _bSeperateLineBackToSide;
    WCTableViewCellBaseConfig *_cellConfig;
    id _userInfo;
    UIColor *_tintColor;
    UIColor *_backgroundColor;
    UIColor *_cellBackgroundColor;
    UIColor *_borderColor;
    double _cornerRadius;
    UITableViewCell *_cell;
    double _fCellHeight;
    UIBezierPath *_cornerPath;
    double _fSeperateLineLeftInset;
    unsigned long long _seperateLineMode;
    double _fSeperateLineRightInset;
    UIColor *_fSeperateLineColor;
    NSArray *_customRowAction;
    NSObject *_eventHandler;
}

+ (id)cellForMakeSel:(SEL)arg1 makeTarget:(id)arg2 actionSel:(SEL)arg3 actionTarget:(id)arg4 height:(double)arg5 userInfo:(id)arg6;
+ (id)loadingCell;
+ (id)switchCellForSel:(SEL)arg1 target:(id)arg2 customView:(id)arg3 on:(_Bool)arg4;
+ (id)switchCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 leftMargin:(double)arg4 title:(id)arg5 desc:(id)arg6 on:(_Bool)arg7 disable:(_Bool)arg8;
+ (id)switchCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 leftMargin:(double)arg4 title:(id)arg5 desc:(id)arg6 on:(_Bool)arg7;
+ (id)switchCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 desc:(id)arg5 on:(_Bool)arg6;
+ (id)switchCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 on:(_Bool)arg5;
+ (id)switchCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 on:(_Bool)arg4;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 badge:(id)arg5 pathKey:(id)arg6;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 badge:(id)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 badge:(id)arg5 rightValue:(id)arg6 rightImageUrl:(id)arg7 withRightRedDot:(_Bool)arg8 selected:(_Bool)arg9 pathKey:(id)arg10;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 titleColor:(id)arg5 badge:(id)arg6 rightValue:(id)arg7 rightColor:(id)arg8 withRightRedDot:(_Bool)arg9 selected:(_Bool)arg10;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 titleColor:(id)arg5 badge:(id)arg6 rightValue:(id)arg7 rightImage:(id)arg8 withRightRedDot:(_Bool)arg9 selected:(_Bool)arg10 pathKey:(id)arg11;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 titleColor:(id)arg5 badge:(id)arg6 rightValue:(id)arg7 rightImage:(id)arg8 withRightRedDot:(_Bool)arg9 selected:(_Bool)arg10;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 badge:(id)arg5 rightValue:(id)arg6 rightImage:(id)arg7 withRightRedDot:(_Bool)arg8 selected:(_Bool)arg9 pathKey:(id)arg10;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 badge:(id)arg5 rightValue:(id)arg6 rightImage:(id)arg7 withRightRedDot:(_Bool)arg8 selected:(_Bool)arg9;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 rightView:(id)arg4;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 customView:(id)arg4;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightView:(id)arg4;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 leftBadge:(id)arg4 rightView:(id)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 rightImage:(id)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 canRightValueCopy:(_Bool)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 badge:(id)arg4 rightValue:(id)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 pathKey:(id)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 pathKey:(id)arg4;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 withRightRedDot:(_Bool)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 badge:(id)arg4 pathKey:(id)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 badge:(id)arg4;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 pathKey:(id)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 detail:(id)arg4;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 titleColor:(id)arg4 leftImage:(id)arg5 withRightRedDot:(_Bool)arg6;
+ (id)normalCellForTitle:(id)arg1;
+ (id)centerCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 detail:(id)arg4;
+ (id)centerCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(copy, nonatomic) NSArray *customRowAction; // @synthesize customRowAction=_customRowAction;
@property(retain, nonatomic) UIColor *fSeperateLineColor; // @synthesize fSeperateLineColor=_fSeperateLineColor;
@property(nonatomic) double fSeperateLineRightInset; // @synthesize fSeperateLineRightInset=_fSeperateLineRightInset;
@property(nonatomic) unsigned long long seperateLineMode; // @synthesize seperateLineMode=_seperateLineMode;
@property(nonatomic) double fSeperateLineLeftInset; // @synthesize fSeperateLineLeftInset=_fSeperateLineLeftInset;
@property(retain, nonatomic) UIBezierPath *cornerPath; // @synthesize cornerPath=_cornerPath;
@property(nonatomic) double fCellHeight; // @synthesize fCellHeight=_fCellHeight;
@property(nonatomic) __weak UITableViewCell *cell; // @synthesize cell=_cell;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *cellBackgroundColor; // @synthesize cellBackgroundColor=_cellBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) _Bool bSeperateLineBackToSide; // @synthesize bSeperateLineBackToSide=_bSeperateLineBackToSide;
@property(nonatomic) _Bool bNeedSeperateLine; // @synthesize bNeedSeperateLine=_bNeedSeperateLine;
@property(nonatomic) _Bool bNeedRemoveSystemSeperateLine; // @synthesize bNeedRemoveSystemSeperateLine=_bNeedRemoveSystemSeperateLine;
@property(nonatomic) _Bool isNeedFixWidthAndAdjustFont; // @synthesize isNeedFixWidthAndAdjustFont=_isNeedFixWidthAndAdjustFont;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) WCTableViewCellBaseConfig *cellConfig; // @synthesize cellConfig=_cellConfig;
- (long long)systemSelectionStyle:(unsigned long long)arg1;
- (void)willDisplayAt:(id)arg1;
- (void)didBeClickedAt:(id)arg1;
- (double)cellSeperateLineRightInset;
- (double)cellSeparatorLeftInset;
- (double)cellHeightFor:(id)arg1;
- (void)setNotStretchCellHeight:(double)arg1;
- (void)configureCell:(id)arg1;
- (void)clearCell:(id)arg1;
- (void)drawCell:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (id)init;

@end

