//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface WCColorProxy : NSObject
{
    long long _userInterfaceStyle;
    NSString *_brandColorReplacement;
    UIColor *_brandColor;
}

+ (_Bool)resolveInstanceMethod:(SEL)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *brandColor; // @synthesize brandColor=_brandColor;
@property(retain, nonatomic) NSString *brandColorReplacement; // @synthesize brandColorReplacement=_brandColorReplacement;
@property(nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
- (id)colorInCurrentUserInterfaceStyle:(id)arg1;
- (id)forwardingBrandColor;
- (id)forwardingRealColor;

@end

