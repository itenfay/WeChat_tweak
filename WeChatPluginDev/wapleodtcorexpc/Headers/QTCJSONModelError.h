//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSError.h>

@class NSData, NSHTTPURLResponse;

@interface QTCJSONModelError : NSError
{
    NSHTTPURLResponse *_httpResponse;
    NSData *_responseData;
}

+ (id)errorInputIsNil;
+ (id)errorModelIsInvalid;
+ (id)errorBadJSON;
+ (id)errorBadResponse;
+ (id)errorInvalidDataWithTypeMismatch:(id)arg1;
+ (id)errorInvalidDataWithMissingKeys:(id)arg1;
+ (id)errorInvalidDataWithMessage:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSHTTPURLResponse *httpResponse; // @synthesize httpResponse=_httpResponse;
- (id)errorByPrependingKeyPathComponent:(id)arg1;

@end

