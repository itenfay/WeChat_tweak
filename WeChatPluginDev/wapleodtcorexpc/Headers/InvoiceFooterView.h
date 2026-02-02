//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface InvoiceFooterView : UIView
{
    NSString *_title;
    UILabel *_titleLabel;
}

+ (id)attrTitleByTitle:(id)arg1;
+ (double)minHeightWithTitle:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithFrame:(struct CGRect)arg1;

@end

