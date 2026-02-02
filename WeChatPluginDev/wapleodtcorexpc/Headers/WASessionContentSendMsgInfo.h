//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WASessionContentSendMsgInfo : NSObject
{
    unsigned int _appVersion;
    unsigned int _appType;
    NSString *_title;
    NSString *_path;
    NSString *_imageURL;
    NSData *_imageData;
    NSString *_appID;
    NSString *_userName;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int appType; // @synthesize appType=_appType;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;

@end

