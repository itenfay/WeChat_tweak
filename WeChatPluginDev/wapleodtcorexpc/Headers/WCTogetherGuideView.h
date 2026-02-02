//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIImageView;

@interface WCTogetherGuideView
{
    UIImageView *_guideImageView;
    MMUILabel *_guideAlbumLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *guideAlbumLabel; // @synthesize guideAlbumLabel=_guideAlbumLabel;
@property(retain, nonatomic) UIImageView *guideImageView; // @synthesize guideImageView=_guideImageView;
- (void)layoutCustomizedContentView;
- (void)loadCustomizedContentView;
- (id)createCancelButton;
- (id)init;

@end

