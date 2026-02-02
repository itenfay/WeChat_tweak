//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UISwitch, UIView;
@protocol MMLiveConnectedMicAudienceCellViewDelegate;

@interface MMLiveConnectedMicStateCellView : UITableViewCell
{
    _Bool _canConnectMic;
    _Bool _isDisabled;
    UILabel *_titleLabel;
    UISwitch *_connectMicSwitch;
    id <MMLiveConnectedMicAudienceCellViewDelegate> _delegate;
    UIView *_topSeparatorLine;
    UIView *_bottomSeparatorLine;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
@property(retain, nonatomic) UIView *bottomSeparatorLine; // @synthesize bottomSeparatorLine=_bottomSeparatorLine;
@property(retain, nonatomic) UIView *topSeparatorLine; // @synthesize topSeparatorLine=_topSeparatorLine;
@property(nonatomic) __weak id <MMLiveConnectedMicAudienceCellViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UISwitch *connectMicSwitch; // @synthesize connectMicSwitch=_connectMicSwitch;
@property(nonatomic) _Bool canConnectMic; // @synthesize canConnectMic=_canConnectMic;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)switchDidChanged:(id)arg1;
- (void)layoutSubviews;
- (void)updateViews;
- (void)prepareForReuse;

@end

