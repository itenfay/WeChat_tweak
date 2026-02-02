//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIView, UIViewController;
@protocol TLProfileBaseMediaView;

@protocol TLProfileMediaViewProvider <NSObject>
@property(readonly, nonatomic) _Bool useCoverForContent;
@property(readonly, nonatomic) _Bool preferCustomView;
@property(readonly, nonatomic) NSString *expandableHeaderAccessibilityLabel;
@property(nonatomic) unsigned int type;
- (_Bool)doHeadImageActionWithViewController:(UIViewController *)arg1;
- (_Bool)doSourceActionWithViewController:(UIViewController *)arg1;
- (UIView *)customView;
- (UIView *)headImageView;
- (NSString *)title;
- (_Bool)supportCustomMedia;

@optional
@property(readonly, nonatomic) _Bool hidesBlurForShortHeightMedias;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (NSString *)reportSourceFeedId;
- (_Bool)isInvalid;
- (NSString *)mediaDescription;
- (_Bool)allowReferBackground;
- (UIView *)mediaCoverView;
- (UIView<TLProfileBaseMediaView> *)mediaContentView;
@end

