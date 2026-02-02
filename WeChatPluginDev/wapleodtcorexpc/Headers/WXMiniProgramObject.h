//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WXMiniProgramObject : NSObject
{
    _Bool _withShareTicket;
    _Bool _disableForward;
    NSString *webpageUrl;
    NSString *userName;
    NSString *path;
    NSData *_hdImageData;
    unsigned long long _miniProgramType;
}

+ (id)object;
- (void).cxx_destruct;
@property(nonatomic) _Bool disableForward; // @synthesize disableForward=_disableForward;
@property(nonatomic) unsigned long long miniProgramType; // @synthesize miniProgramType=_miniProgramType;
@property(nonatomic) _Bool withShareTicket; // @synthesize withShareTicket=_withShareTicket;
@property(retain, nonatomic) NSData *hdImageData; // @synthesize hdImageData=_hdImageData;
@property(retain, nonatomic) NSString *path; // @synthesize path;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
@property(retain, nonatomic) NSString *webpageUrl; // @synthesize webpageUrl;

@end

