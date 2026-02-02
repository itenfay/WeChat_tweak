//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView;

@interface WCFinderNotifyUnifiedThumbsUpTableViewCell
{
    UIImageView *_thumbsUpImageView;
}

+ (double)getHeightWithViewModel:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *thumbsUpImageView; // @synthesize thumbsUpImageView=_thumbsUpImageView;
- (void)updateNofiyCenterCellWithViewModel:(id)arg1 width:(double)arg2;
- (void)prepareForReuse;
- (void)setUpViewLayout;
- (void)setUpUI;

@end

