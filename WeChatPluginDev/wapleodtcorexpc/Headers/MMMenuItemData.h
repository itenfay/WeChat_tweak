//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, UIView;

@interface MMMenuItemData : NSObject
{
    long long _arrowPosition;
    double _arrowCenterX;
    long long _menuStyle;
    UIView *_customHeaderView;
    NSArray *_itemRows;
    double _screenWidth;
    long long _maxCountPerLine;
    double _minWidth;
    double _menuItemInnerGap;
    double _menuItemWidth;
    struct CGPoint _menuOrigin;
    struct CGSize _menuSize;
}

- (void).cxx_destruct;
@property(nonatomic) double menuItemWidth; // @synthesize menuItemWidth=_menuItemWidth;
@property(nonatomic) double menuItemInnerGap; // @synthesize menuItemInnerGap=_menuItemInnerGap;
@property(nonatomic) double minWidth; // @synthesize minWidth=_minWidth;
@property(nonatomic) long long maxCountPerLine; // @synthesize maxCountPerLine=_maxCountPerLine;
@property(nonatomic) double screenWidth; // @synthesize screenWidth=_screenWidth;
@property(nonatomic) struct CGSize menuSize; // @synthesize menuSize=_menuSize;
@property(retain, nonatomic) NSArray *itemRows; // @synthesize itemRows=_itemRows;
@property(nonatomic) __weak UIView *customHeaderView; // @synthesize customHeaderView=_customHeaderView;
@property(nonatomic) long long menuStyle; // @synthesize menuStyle=_menuStyle;
@property(nonatomic) double arrowCenterX; // @synthesize arrowCenterX=_arrowCenterX;
@property(nonatomic) struct CGPoint menuOrigin; // @synthesize menuOrigin=_menuOrigin;
@property(nonatomic) long long arrowPosition; // @synthesize arrowPosition=_arrowPosition;
- (struct CGSize)menuAreaSize;
- (struct CGSize)menuContentSize;
- (void)calculateMenuLayout;
- (_Bool)isPlainTextMenu;
- (double)caculateMenuItemWidth;
- (long long)menuItemCount;
- (id)itemsAtRow:(long long)arg1;
- (long long)rowCount;
- (id)initWithItemRows:(id)arg1 screenWidth:(double)arg2 maxCountPerLine:(long long)arg3 menuStyle:(long long)arg4 customHeaderView:(id)arg5 minWidth:(double)arg6 menuItemInnerGap:(double)arg7 menuItemWidth:(double)arg8;

@end

