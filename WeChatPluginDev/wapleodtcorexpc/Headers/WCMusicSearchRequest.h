//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WXPBGeneratedMessage;

@interface WCMusicSearchRequest : NSObject
{
    WXPBGeneratedMessage *_pbRequest;
    NSString *_requestId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) WXPBGeneratedMessage *pbRequest; // @synthesize pbRequest=_pbRequest;

@end

