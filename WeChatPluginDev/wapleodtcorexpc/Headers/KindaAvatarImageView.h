//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMHeadImageView, NSString;

@interface KindaAvatarImageView
{
    MMHeadImageView *_m_headImageView;
    NSString *_m_userName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_userName; // @synthesize m_userName=_m_userName;
@property(retain, nonatomic) MMHeadImageView *m_headImageView; // @synthesize m_headImageView=_m_headImageView;
- (void)setUrl:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setScaleType:(long long)arg1;
- (void)setImageData:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setDefaultUrl:(id)arg1;
- (void)setDarkModeUrl:(id)arg1;
- (id)getUrl;
- (id)getTintColor;
- (long long)getScaleType;
- (id)getImageData;
- (id)getImage;
- (id)getDefaultUrl;
- (id)getDarkModeUrl;
- (void)setHeight:(float)arg1;
- (void)setWidth:(float)arg1;
- (id)getUsername;
- (void)setUsername:(id)arg1;
- (id)getView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

