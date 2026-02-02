//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveGiftResourceExtraInfo, NSString, NSURL;

@interface MMFinderLiveGiftResourceRequestBaseObject : NSObject
{
    _Bool _isPreload;
    unsigned int _retryCount;
    NSURL *_targetURL;
    long long _expectedContentLength;
    NSString *_contentType;
    unsigned long long _beginTimeStamp;
    NSString *_productID;
    long long _resType;
    long long _subResType;
    NSString *_fileMD5;
    unsigned long long _memoryCacheOptions;
    NSString *_observerSubscriptionKey;
    MMFinderLiveGiftResourceExtraInfo *_extraInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveGiftResourceExtraInfo *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSString *observerSubscriptionKey; // @synthesize observerSubscriptionKey=_observerSubscriptionKey;
@property(nonatomic) _Bool isPreload; // @synthesize isPreload=_isPreload;
@property(nonatomic) unsigned long long memoryCacheOptions; // @synthesize memoryCacheOptions=_memoryCacheOptions;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSString *fileMD5; // @synthesize fileMD5=_fileMD5;
@property(nonatomic) long long subResType; // @synthesize subResType=_subResType;
@property(nonatomic) long long resType; // @synthesize resType=_resType;
@property(retain, nonatomic) NSString *productID; // @synthesize productID=_productID;
@property(nonatomic) unsigned long long beginTimeStamp; // @synthesize beginTimeStamp=_beginTimeStamp;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(nonatomic) long long expectedContentLength; // @synthesize expectedContentLength=_expectedContentLength;
@property(retain, nonatomic) NSURL *targetURL; // @synthesize targetURL=_targetURL;

@end

