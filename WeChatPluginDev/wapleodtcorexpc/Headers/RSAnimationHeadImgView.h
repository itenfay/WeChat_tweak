//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMHeadImageView, NSString, RadarSearchMember, UIImageView, UILabel;

@interface RSAnimationHeadImgView
{
    UILabel *_displayName;
    UIImageView *_avatarView;
    MMHeadImageView *_headImage;
    RadarSearchMember *_member;
    NSString *m_nsRemarkName;
}

+ (struct CGSize)getHeadImageSize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsRemarkName; // @synthesize m_nsRemarkName;
@property(retain, nonatomic) RadarSearchMember *member; // @synthesize member=_member;
- (void)initDisplayNameView;
- (void)initAvatarView;
- (void)initHeadImageView;
- (void)initView;
- (id)initWithRadarSearchMember:(id)arg1 remarkName:(id)arg2;

@end

