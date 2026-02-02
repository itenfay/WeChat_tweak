//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView, UILabel;

@interface WCFinderCoverSelectAlbumView
{
    NSString *_iconName;
    NSString *_text;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
- (id)initWithFrame:(struct CGRect)arg1 iconName:(id)arg2 text:(id)arg3 clickBlock:(CDUnknownBlockType)arg4;

@end

