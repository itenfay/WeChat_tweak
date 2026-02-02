//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView;

@interface MJShootFavTemplateAuthorButton
{
    MMWebImageView *_authorIcon;
    MMUILabel *_authorNameLabel;
}

+ (id)createAuthorButton;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *authorNameLabel; // @synthesize authorNameLabel=_authorNameLabel;
@property(retain, nonatomic) MMWebImageView *authorIcon; // @synthesize authorIcon=_authorIcon;
- (void)updateAuthorDisplayName:(id)arg1;
- (void)updateAuthorProfilePicWithURL:(id)arg1;

@end

