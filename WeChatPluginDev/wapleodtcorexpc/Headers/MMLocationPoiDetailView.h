//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, RichTextView, SnsPoiDetail, UIImageView, UILabel;
@protocol MMLocationPoiDetailViewDelegate;

@interface MMLocationPoiDetailView : UIView
{
    SnsPoiDetail *_poiDetail;
    _Bool _showTakeCarBtn;
    _Bool _shouldShowFullScreenEntrance;
    id <MMLocationPoiDetailViewDelegate> _delegate;
    RichTextView *_priceTipsLabel;
    RichTextView *_businessHourLabel;
    RichTextView *_phoneLabel;
    MMUILabel *_noticeWordingLabel;
    UIView *_separateLine;
    UIView *_addressContainer;
    UILabel *_addressLabel;
    UIImageView *_rightArrowView;
    UIView *_bottomBlankView;
}

+ (double)contentHeight:(id)arg1 maxWidth:(double)arg2 showTakeCarBtn:(_Bool)arg3 isFinderHalfScreen:(_Bool)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomBlankView; // @synthesize bottomBlankView=_bottomBlankView;
@property(retain, nonatomic) UIImageView *rightArrowView; // @synthesize rightArrowView=_rightArrowView;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UIView *addressContainer; // @synthesize addressContainer=_addressContainer;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) MMUILabel *noticeWordingLabel; // @synthesize noticeWordingLabel=_noticeWordingLabel;
@property(retain, nonatomic) RichTextView *phoneLabel; // @synthesize phoneLabel=_phoneLabel;
@property(retain, nonatomic) RichTextView *businessHourLabel; // @synthesize businessHourLabel=_businessHourLabel;
@property(retain, nonatomic) RichTextView *priceTipsLabel; // @synthesize priceTipsLabel=_priceTipsLabel;
@property(nonatomic) _Bool shouldShowFullScreenEntrance; // @synthesize shouldShowFullScreenEntrance=_shouldShowFullScreenEntrance;
@property(nonatomic) _Bool showTakeCarBtn; // @synthesize showTakeCarBtn=_showTakeCarBtn;
@property(nonatomic) __weak id <MMLocationPoiDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateWith:(id)arg1;
- (void)onTapAddressEntrance;
- (void)adjustLabelsPosition;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

