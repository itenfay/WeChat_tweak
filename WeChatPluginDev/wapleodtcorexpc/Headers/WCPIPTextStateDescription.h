//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIFont;

@interface WCPIPTextStateDescription : NSObject
{
    _Bool _disbleDisplayIcon;
    NSString *_text;
    NSString *_iconName;
    UIFont *_customTextFont;
    struct CGSize _containerSize;
    struct CGRect _normalizedFrame;
}

+ (id)createLiveStateDescription:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *customTextFont; // @synthesize customTextFont=_customTextFont;
@property(nonatomic) _Bool disbleDisplayIcon; // @synthesize disbleDisplayIcon=_disbleDisplayIcon;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) struct CGRect normalizedFrame; // @synthesize normalizedFrame=_normalizedFrame;
@property(nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
- (_Bool)isEqual:(id)arg1;
- (id)initWithText:(id)arg1 icon:(id)arg2 normalizedFrame:(struct CGRect)arg3 containerSize:(struct CGSize)arg4;
- (id)initWithText:(id)arg1 icon:(id)arg2;

@end

