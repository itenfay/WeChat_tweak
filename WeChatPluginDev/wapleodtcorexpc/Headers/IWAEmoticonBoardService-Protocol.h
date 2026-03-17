//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIFont, UIView;

@protocol IWAEmoticonBoardService <NSObject>

@optional
+ (_Bool)IsSupportEmoticonBoard;
- (void)setOverrideUserInterfaceStyle:(long long)arg1;
- (_Bool)isSticker;
- (void)setShowSearchEmoticon:(_Bool)arg1;
- (void)setShowStoreEmoticon:(_Bool)arg1;
- (void)setEmoticonFont:(UIFont *)arg1;
- (void)setFinishButtonTitle:(NSString *)arg1;
- (void)setCanSend:(_Bool)arg1;
- (struct _NSRange)rangeOfEmoticon:(NSString *)arg1 inRange:(struct _NSRange)arg2;
- (void)setAppId:(NSString *)arg1;
- (double)getEmoticonBoardViewPreferHeight;
- (void)showEmoticonBoardViewInView:(UIView *)arg1 animated:(_Bool)arg2;
@end

