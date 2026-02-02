//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel;

@interface WCFinderProfilePrivateAccountPage
{
    UIImageView *_lockIconView;
    UILabel *_textLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *lockIconView; // @synthesize lockIconView=_lockIconView;
- (void)updateLabelSize;
- (void)reLayout;
- (void)viewDidLoad;
- (void)pageSizeDidChanged;
- (id)loadView;

@end

