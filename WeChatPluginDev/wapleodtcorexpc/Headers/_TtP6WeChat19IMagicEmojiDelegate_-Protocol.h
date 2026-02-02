//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "_TtP6WeChat23IMagicBaseEmojiDelegate_-Protocol.h"

@class NSDictionary, NSString, UIView, _TtC6WeChat6MEMeta;

@protocol _TtP6WeChat19IMagicEmojiDelegate_ <_TtP6WeChat23IMagicBaseEmojiDelegate_>
- (UIView *)getMagicEmojiBackgroudParentView;
- (void)shakeAllVisiableViews:(_Bool)arg1;
- (NSDictionary *)getVisibleMetaDict:(_Bool)arg1;
- (_TtC6WeChat6MEMeta *)getMetaByID:(NSString *)arg1 needFrame:(_Bool)arg2;
@end

