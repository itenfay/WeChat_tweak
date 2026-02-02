//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIView, WCFinderContact, WCFinderJumpInfo;
@protocol WCFinderHeadInfoViewDelegate;

@protocol WCFinderHeadInfoViewProtocol <NSObject>
+ (double)defaultHeight;
@property(retain, nonatomic) WCFinderJumpInfo *avatarJumpInfo;
@property(nonatomic) __weak id <WCFinderHeadInfoViewDelegate> delegate;
- (struct CGRect)avatarFrame;
- (struct CGRect)followBtnFrame;
- (UIView *)userAvatarSnapshot;
- (void)resetReuseState;
- (void)reloadHeaderWithContact;
- (void)removeFollowBtn;
- (_Bool)canFollowBtnShow;
- (void)updateBrandLogoImageUrl:(NSString *)arg1;
- (void)setShowFollowBtn:(_Bool)arg1;
- (void)setShouldShowFollowTips:(_Bool)arg1;
- (void)updateDescriptionLabel:(NSString *)arg1;
- (void)updateConstraintsWithContact:(WCFinderContact *)arg1;
@end

