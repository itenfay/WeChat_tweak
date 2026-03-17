//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMHeadImageView, NSString;

@interface MMLiveLikeHeaderImageView : NSObject
{
    MMHeadImageView *_headImageView;
    NSString *_identityId;
    NSString *_headImageUrl;
}

@property(copy, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(copy, nonatomic) NSString *identityId; // @synthesize identityId=_identityId;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void)updateIdentityId:(id)arg1 headUrl:(id)arg2;
- (void)layoutHeaderImageView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

