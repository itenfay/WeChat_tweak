//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UILabel;

@interface MMMusicLiveCommentStatusView : UIView
{
    UILabel *_currentLabel;
    UILabel *_historyLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *historyLabel; // @synthesize historyLabel=_historyLabel;
@property(retain, nonatomic) UILabel *currentLabel; // @synthesize currentLabel=_currentLabel;
- (void)setCurrentAudience:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

