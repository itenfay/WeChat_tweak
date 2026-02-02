//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSValue, UIColor, UIFont, UIImage, UIView;

@interface WCTableViewCellLeftConfig : NSObject
{
    _Bool _selected;
    _Bool _titleCenter;
    unsigned long long _mode;
    NSString *_title;
    double _customTitleLeft;
    double _customTitleTop;
    double _customTitleMaxWidth;
    NSValue *_customImageSize;
    NSNumber *_imageViewLeftMargin;
    NSNumber *_imageViewRightMargin;
    UIColor *_titleColor;
    UIFont *_titleFont;
    unsigned long long _titleNumberOfLines;
    NSString *_detail;
    UIColor *_detailColor;
    long long _customDetailBreakMode;
    double _customDetailMaxWidth;
    double _customDetailHeight;
    double _customDetailTopMargin;
    long long _customDetailNumberOfLines;
    unsigned long long _subOptionStyle;
    UIImage *_image;
    NSString *_imageURL;
    UIImage *_smallIcon;
    UIColor *_imageTintColor;
    NSString *_badgeText;
    NSString *_hintText;
    UIView *_customView;
    NSValue *_customViewSize;
    NSNumber *_customViewRightMargin;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool titleCenter; // @synthesize titleCenter=_titleCenter;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSNumber *customViewRightMargin; // @synthesize customViewRightMargin=_customViewRightMargin;
@property(retain, nonatomic) NSValue *customViewSize; // @synthesize customViewSize=_customViewSize;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(copy, nonatomic) NSString *hintText; // @synthesize hintText=_hintText;
@property(copy, nonatomic) NSString *badgeText; // @synthesize badgeText=_badgeText;
@property(retain, nonatomic) UIColor *imageTintColor; // @synthesize imageTintColor=_imageTintColor;
@property(retain, nonatomic) UIImage *smallIcon; // @synthesize smallIcon=_smallIcon;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned long long subOptionStyle; // @synthesize subOptionStyle=_subOptionStyle;
@property(nonatomic) long long customDetailNumberOfLines; // @synthesize customDetailNumberOfLines=_customDetailNumberOfLines;
@property(nonatomic) double customDetailTopMargin; // @synthesize customDetailTopMargin=_customDetailTopMargin;
@property(nonatomic) double customDetailHeight; // @synthesize customDetailHeight=_customDetailHeight;
@property(nonatomic) double customDetailMaxWidth; // @synthesize customDetailMaxWidth=_customDetailMaxWidth;
@property(nonatomic) long long customDetailBreakMode; // @synthesize customDetailBreakMode=_customDetailBreakMode;
@property(retain, nonatomic) UIColor *detailColor; // @synthesize detailColor=_detailColor;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(nonatomic) unsigned long long titleNumberOfLines; // @synthesize titleNumberOfLines=_titleNumberOfLines;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSNumber *imageViewRightMargin; // @synthesize imageViewRightMargin=_imageViewRightMargin;
@property(retain, nonatomic) NSNumber *imageViewLeftMargin; // @synthesize imageViewLeftMargin=_imageViewLeftMargin;
@property(retain, nonatomic) NSValue *customImageSize; // @synthesize customImageSize=_customImageSize;
@property(nonatomic) double customTitleMaxWidth; // @synthesize customTitleMaxWidth=_customTitleMaxWidth;
@property(nonatomic) double customTitleTop; // @synthesize customTitleTop=_customTitleTop;
@property(nonatomic) double customTitleLeft; // @synthesize customTitleLeft=_customTitleLeft;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;

@end

