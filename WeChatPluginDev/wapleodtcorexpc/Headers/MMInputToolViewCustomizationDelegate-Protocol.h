//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMInputToolViewCustomizationDelegate <NSObject>

@optional
- (_Bool)textViewHeadViewSeparateStyle;
- (_Bool)isEnableTopicSearchShare;
- (_Bool)isEnableTopicSearchInteraction;
- (double)getExtraToolViewHegith;
- (_Bool)showKeyboardImmediately;
- (_Bool)shouldHideOrginInputToolView;
- (double)getCustomizedAreaWidth;
@end

