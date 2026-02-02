//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor, UIFont;
@protocol WCImageViewDelegate, WCPuzzleImageViewDelegate;

@interface WCThumbViewParams : NSObject
{
    _Bool _ImageView_displaysPuzzleImageViews;
    id <WCImageViewDelegate> _WCImageView_delegate;
    id <WCPuzzleImageViewDelegate> _WCPuzzleImageView_delegate;
    UIColor *_TextView_backgroundColor;
    UIFont *_TextView_font;
    UIColor *_TextView_textColor;
    long long _TextView_textVerticalAlignment;
    long long _puzzleImageViewLayoutStyle;
    struct CGRect _ImageView_frame;
    struct CGRect _TextView_frame;
    struct UIEdgeInsets _TextView_textPadding;
}

- (void).cxx_destruct;
@property(nonatomic) long long puzzleImageViewLayoutStyle; // @synthesize puzzleImageViewLayoutStyle=_puzzleImageViewLayoutStyle;
@property(nonatomic) long long TextView_textVerticalAlignment; // @synthesize TextView_textVerticalAlignment=_TextView_textVerticalAlignment;
@property(nonatomic) struct UIEdgeInsets TextView_textPadding; // @synthesize TextView_textPadding=_TextView_textPadding;
@property(retain, nonatomic) UIColor *TextView_textColor; // @synthesize TextView_textColor=_TextView_textColor;
@property(retain, nonatomic) UIFont *TextView_font; // @synthesize TextView_font=_TextView_font;
@property(retain, nonatomic) UIColor *TextView_backgroundColor; // @synthesize TextView_backgroundColor=_TextView_backgroundColor;
@property(nonatomic) struct CGRect TextView_frame; // @synthesize TextView_frame=_TextView_frame;
@property(nonatomic) __weak id <WCPuzzleImageViewDelegate> WCPuzzleImageView_delegate; // @synthesize WCPuzzleImageView_delegate=_WCPuzzleImageView_delegate;
@property(nonatomic) __weak id <WCImageViewDelegate> WCImageView_delegate; // @synthesize WCImageView_delegate=_WCImageView_delegate;
@property(nonatomic) _Bool ImageView_displaysPuzzleImageViews; // @synthesize ImageView_displaysPuzzleImageViews=_ImageView_displaysPuzzleImageViews;
@property(nonatomic) struct CGRect ImageView_frame; // @synthesize ImageView_frame=_ImageView_frame;
- (id)init;

@end

