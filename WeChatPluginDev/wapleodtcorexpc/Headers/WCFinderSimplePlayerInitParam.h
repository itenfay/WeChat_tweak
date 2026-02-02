//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface WCFinderSimplePlayerInitParam : NSObject
{
    _Bool _ignoreHDR;
    _Bool _notShowDefaultThumb;
    UIColor *_playerBackgroundColor;
    NSString *_audioModuleGroupName;
}

+ (id)defaultParams;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *audioModuleGroupName; // @synthesize audioModuleGroupName=_audioModuleGroupName;
@property(retain, nonatomic) UIColor *playerBackgroundColor; // @synthesize playerBackgroundColor=_playerBackgroundColor;
@property(nonatomic) _Bool notShowDefaultThumb; // @synthesize notShowDefaultThumb=_notShowDefaultThumb;
@property(nonatomic) _Bool ignoreHDR; // @synthesize ignoreHDR=_ignoreHDR;

@end

