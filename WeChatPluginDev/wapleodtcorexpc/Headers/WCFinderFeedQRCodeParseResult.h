//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderFeedQRCodeParseResult : NSObject
{
    NSString *_encrytedObjectidTid;
    NSString *_nonceID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(retain, nonatomic) NSString *encrytedObjectidTid; // @synthesize encrytedObjectidTid=_encrytedObjectidTid;

@end

