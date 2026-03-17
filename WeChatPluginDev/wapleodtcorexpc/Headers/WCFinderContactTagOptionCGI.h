//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class NSString;

@interface WCFinderContactTagOptionCGI : NSObject
{
    NSString *_wxUsername;
    unsigned long long _optionType;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
}

@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(nonatomic) unsigned long long optionType; // @synthesize optionType=_optionType;
@property(copy, nonatomic) NSString *wxUsername; // @synthesize wxUsername=_wxUsername;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithWxUsername:(id)arg1 optionType:(unsigned long long)arg2 successful:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;

@end
