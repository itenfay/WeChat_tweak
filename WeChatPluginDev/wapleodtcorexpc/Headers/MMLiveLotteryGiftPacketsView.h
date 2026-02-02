//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray;

@interface MMLiveLotteryGiftPacketsView : UIView
{
    NSArray *_giftViews;
    NSArray *_viewModels;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
@property(retain, nonatomic) NSArray *giftViews; // @synthesize giftViews=_giftViews;
- (void)clearAll;
- (void)sizeToFit;
- (void)updateWithViewModels:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;

@end

