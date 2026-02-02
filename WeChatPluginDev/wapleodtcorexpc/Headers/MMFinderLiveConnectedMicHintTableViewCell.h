//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UIView;

@interface MMFinderLiveConnectedMicHintTableViewCell : UITableViewCell
{
    UILabel *_hintLabel;
    UIView *_separatorBar;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorBar; // @synthesize separatorBar=_separatorBar;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *hint;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

