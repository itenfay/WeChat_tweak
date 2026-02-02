//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class MJSegmentViewModel, UIImageView, UILabel, UIView;
@protocol MJMetaEditGeographicPanelDelegate;

@interface MJMetaEditGeographicPanel : UIViewController
{
    id <MJMetaEditGeographicPanelDelegate> _delegate;
    MJSegmentViewModel *_segmentVM;
    UIView *_containerView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIImageView *_icon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MJSegmentViewModel *segmentVM; // @synthesize segmentVM=_segmentVM;
@property(nonatomic) __weak id <MJMetaEditGeographicPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateDatas;
- (void)setupViews;
- (void)viewDidLoad;
- (id)initWithSegmentVM:(id)arg1;

@end

