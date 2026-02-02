//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FacingMember, UIImageView;

@interface RSCreateRoomHeadImageView
{
    UIImageView *m_statusView;
    FacingMember *m_facingMember;
}

+ (struct CGSize)getHeadImageSize;
- (void).cxx_destruct;
@property(retain, nonatomic) FacingMember *m_facingMember; // @synthesize m_facingMember;
- (void)updateWithFacingMember:(id)arg1;
- (id)initWithFacingMember:(id)arg1;

@end

