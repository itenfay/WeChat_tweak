//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class HalfScreen, NSString;

@interface GameJumpInfo : NSObject
{
    NSString *_jumpId;
    long long _jumpType;
    NSString *_jumpUrl;
    HalfScreen *_halfScreen;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HalfScreen *halfScreen; // @synthesize halfScreen=_halfScreen;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(nonatomic) long long jumpType; // @synthesize jumpType=_jumpType;
@property(retain, nonatomic) NSString *jumpId; // @synthesize jumpId=_jumpId;
- (id)getXmlSectionString;

@end

