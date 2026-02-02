//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WXKBMessageActionReportObject : NSObject
{
    unsigned int _actionType;
    unsigned int _messageType;
    NSString *_contentTitle;
    NSString *_appId;
    NSString *_songName;
    NSString *_emoticonMd5;
    NSString *_emoticonProductId;
    NSString *_cardUsername;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cardUsername; // @synthesize cardUsername=_cardUsername;
@property(retain, nonatomic) NSString *emoticonProductId; // @synthesize emoticonProductId=_emoticonProductId;
@property(retain, nonatomic) NSString *emoticonMd5; // @synthesize emoticonMd5=_emoticonMd5;
@property(retain, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *contentTitle; // @synthesize contentTitle=_contentTitle;
@property(nonatomic) unsigned int messageType; // @synthesize messageType=_messageType;
@property(nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
- (void)report;

@end

