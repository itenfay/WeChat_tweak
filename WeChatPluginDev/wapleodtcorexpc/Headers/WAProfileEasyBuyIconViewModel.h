//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont;

@interface WAProfileEasyBuyIconViewModel : NSObject
{
    unsigned int _iconWidth;
    unsigned int _iconHeight;
    NSString *_desc;
    UIFont *_descFont;
    UIColor *_descColor;
    NSString *_iconUrl;
}

+ (id)createWithRelievedBuyInfo:(id)arg1 position:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned int iconHeight; // @synthesize iconHeight=_iconHeight;
@property(nonatomic) unsigned int iconWidth; // @synthesize iconWidth=_iconWidth;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) UIColor *descColor; // @synthesize descColor=_descColor;
@property(retain, nonatomic) UIFont *descFont; // @synthesize descFont=_descFont;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (long long)iconViewWidth;
- (long long)descViewWidth;
- (struct CGSize)viewSize;

@end

