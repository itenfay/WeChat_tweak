//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WXDynamicVideoMiniProgramObject : NSObject
{
    _Bool _withShareTicket;
    NSString *_webpageUrl;
    NSString *_userName;
    NSString *_path;
    NSData *_hdImageData;
    unsigned long long _miniProgramType;
    NSString *_videoSource;
    NSString *_appThumbUrl;
}

+ (id)object;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appThumbUrl; // @synthesize appThumbUrl=_appThumbUrl;
@property(copy, nonatomic) NSString *videoSource; // @synthesize videoSource=_videoSource;
@property(nonatomic) unsigned long long miniProgramType; // @synthesize miniProgramType=_miniProgramType;
@property(nonatomic) _Bool withShareTicket; // @synthesize withShareTicket=_withShareTicket;
@property(retain, nonatomic) NSData *hdImageData; // @synthesize hdImageData=_hdImageData;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *webpageUrl; // @synthesize webpageUrl=_webpageUrl;
- (id)init;

@end

