//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, NSMutableDictionary, UILabel, WCFinderJumpInfo, WCFinderNetIconTextBtn;
@protocol WCFinderPanelJumpInfoCarouselViewDelegate;

@interface WCFinderPanelJumpInfoCarouselView : UIView
{
    int _showPosition;
    WCFinderJumpInfo *_jumpInfo;
    id <WCFinderPanelJumpInfoCarouselViewDelegate> _delegate;
    NSMutableDictionary *_actionDic;
    MMWebImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    WCFinderNetIconTextBtn *_jumpButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderNetIconTextBtn *jumpButton; // @synthesize jumpButton=_jumpButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) NSMutableDictionary *actionDic; // @synthesize actionDic=_actionDic;
@property(nonatomic) __weak id <WCFinderPanelJumpInfoCarouselViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) int showPosition; // @synthesize showPosition=_showPosition;
- (void)layoutAllSubviews;
- (void)bindSessionReportFromJumpInfo:(id)arg1 contentVM:(id)arg2;
- (void)updateWithBGMJumpInfo:(id)arg1 contentVM:(id)arg2;
- (void)jumpButtonClicked;
- (void)resetUIState;
- (id)initWithFrame:(struct CGRect)arg1 showPosition:(int)arg2;

@end

