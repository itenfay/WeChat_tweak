//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GetSearchShareResponse, NSDictionary;

@interface WCTopicSearchRequestWrapper : NSObject
{
    _Bool _isEmoticonRequest;
    CDUnknownBlockType _resultBlock;
    CDUnknownBlockType _emoticonResultBlock;
    NSDictionary *_requestParams;
    GetSearchShareResponse *_shareResponse;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GetSearchShareResponse *shareResponse; // @synthesize shareResponse=_shareResponse;
@property(retain, nonatomic) NSDictionary *requestParams; // @synthesize requestParams=_requestParams;
@property(nonatomic) _Bool isEmoticonRequest; // @synthesize isEmoticonRequest=_isEmoticonRequest;
@property(copy, nonatomic) CDUnknownBlockType emoticonResultBlock; // @synthesize emoticonResultBlock=_emoticonResultBlock;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
- (void)callResultBlockOnFailedWithContext:(id)arg1;
- (void)callResultBlockOnFailed;
- (_Bool)isValidWrapper;

@end

