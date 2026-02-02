//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GameCenterMsgAppInfo : NSObject
{
    NSString *_appId;
    NSString *_appName;
    NSString *_entranceText;
    NSString *_iconUrl;
    NSString *_downloadUrl;
}

+ (id)parseFromXml:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *entranceText; // @synthesize entranceText=_entranceText;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;

@end

