//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderProfileCoverUploadTask : NSObject
{
    NSString *_mediaUrl;
    NSString *_mediaMd5;
    NSString *_clientID;
    NSString *_uploadMediaLocalURL;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *uploadMediaLocalURL; // @synthesize uploadMediaLocalURL=_uploadMediaLocalURL;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(retain, nonatomic) NSString *mediaMd5; // @synthesize mediaMd5=_mediaMd5;
@property(retain, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;

@end

