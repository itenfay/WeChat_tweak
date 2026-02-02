//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UIView;

@interface MMFinderLiveConnectMicModePageSheetSecondaryHeaderTableViewCell : UITableViewCell
{
    UILabel *_headerLabel;
    UIView *_separatorBar;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorBar; // @synthesize separatorBar=_separatorBar;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *title;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

