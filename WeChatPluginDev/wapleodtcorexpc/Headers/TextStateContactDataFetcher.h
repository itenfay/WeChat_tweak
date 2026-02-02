//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString, WCCgiBlockHelper;

@interface TextStateContactDataFetcher : NSObject
{
    NSString *_username;
    NSData *_context;
    WCCgiBlockHelper *_cgiBlockHelper;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) WCCgiBlockHelper *cgiBlockHelper; // @synthesize cgiBlockHelper=_cgiBlockHelper;
@property(retain, nonatomic) NSData *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void)privateRequest;
- (void)startFetchWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToFetcher:(id)arg1;
- (id)initWithUsername:(id)arg1;

@end

