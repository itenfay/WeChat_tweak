//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class UIImageView;

@interface MMFinderLiveConnectMicTeamPkSplitView : UICollectionReusableView
{
    UIImageView *_pkLogoView;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *pkLogoView; // @synthesize pkLogoView=_pkLogoView;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

