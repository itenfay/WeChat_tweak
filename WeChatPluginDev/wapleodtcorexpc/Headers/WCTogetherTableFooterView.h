//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel;

@interface WCTogetherTableFooterView : UIView
{
    MMUILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (void)layoutSubviews;
- (void)fitMinSizeInTableView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

