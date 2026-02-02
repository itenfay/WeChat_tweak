//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class MMUILabel, NSString, UIImageView;

@interface WCFinderProfileNewLifeBannerView : UIControl
{
    NSString *_wording;
    MMUILabel *_wordingLabel;
    UIImageView *_arrowImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *wordingLabel; // @synthesize wordingLabel=_wordingLabel;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateReportParams:(id)arg1;
- (void)initReports;
- (void)initLayouts;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

