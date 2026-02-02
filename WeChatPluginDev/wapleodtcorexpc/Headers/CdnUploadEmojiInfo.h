//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CdnUploadEmojiInfo : NSObject
{
    NSString *_filePath;
    NSString *_clientMsgId;
    long long _emojiType;
    NSData *_extInfo;
    unsigned long long _startTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSData *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) long long emojiType; // @synthesize emojiType=_emojiType;
@property(retain, nonatomic) NSString *clientMsgId; // @synthesize clientMsgId=_clientMsgId;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;

@end

