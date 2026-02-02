//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCardAcceptCardInfo
{
    unsigned int _succCount;
    unsigned int _retCode;
    NSString *_retMsg;
    NSString *_retJson;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *retJson; // @synthesize retJson=_retJson;
@property(retain, nonatomic) NSString *retMsg; // @synthesize retMsg=_retMsg;
@property(nonatomic) unsigned int retCode; // @synthesize retCode=_retCode;
@property(nonatomic) unsigned int succCount; // @synthesize succCount=_succCount;

@end

