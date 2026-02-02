//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView;

@interface FakeHeadImageView
{
    UIImageView *m_headImageView;
    UIImageView *m_borderImageView;
    NSString *m_usrName;
    _Bool m_bRoundedCorner;
    unsigned char _headUseScene;
    unsigned char _headCategory;
    unsigned int _conerSize;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int conerSize; // @synthesize conerSize=_conerSize;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) unsigned char headCategory; // @synthesize headCategory=_headCategory;
@property(nonatomic) unsigned char headUseScene; // @synthesize headUseScene=_headUseScene;
- (id)getRealUserName:(id)arg1;
- (void)updateWithUserName:(id)arg1;
- (void)layoutSubviews;
- (id)initWithRoundCorner:(_Bool)arg1;

@end

