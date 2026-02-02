//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMEasterEgg, NSString;

@interface MMEasterEggMatch : NSObject
{
    NSString *_keyword;
    MMEasterEgg *_egg;
    id _userInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) MMEasterEgg *egg; // @synthesize egg=_egg;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;

@end

