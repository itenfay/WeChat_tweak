//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface OMJAIGCParams : NSObject
{
    long long _requestID;
    NSString *_imageFilePath;
    NSData *_aigcBuffer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *aigcBuffer; // @synthesize aigcBuffer=_aigcBuffer;
@property(readonly, nonatomic) NSString *imageFilePath; // @synthesize imageFilePath=_imageFilePath;
@property(readonly, nonatomic) long long requestID; // @synthesize requestID=_requestID;
- (id)initWithRequestID:(long long)arg1 imageFilePath:(id)arg2 aigcBuffer:(id)arg3;
- (id)initWithRequestID:(long long)arg1 imageFilePath:(id)arg2;

@end

