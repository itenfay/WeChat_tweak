//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class MMUIButton, UILabel;

@interface WCFinderNotifyExpandFooterView : UITableViewHeaderFooterView
{
    CDUnknownBlockType _expandActionBlock;
    UILabel *_tipsLabel;
    MMUIButton *_expandButton;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *expandButton; // @synthesize expandButton=_expandButton;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(copy, nonatomic) CDUnknownBlockType expandActionBlock; // @synthesize expandActionBlock=_expandActionBlock;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithReuseIdentifier:(id)arg1;

@end

