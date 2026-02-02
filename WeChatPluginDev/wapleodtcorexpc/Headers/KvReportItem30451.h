//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface KvReportItem30451
{
    unsigned int _blueLinkRedirectionType;
    unsigned int _opType;
    NSString *_bizUsername;
    NSString *_systemMessage;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int opType; // @synthesize opType=_opType;
@property(nonatomic) unsigned int blueLinkRedirectionType; // @synthesize blueLinkRedirectionType=_blueLinkRedirectionType;
@property(copy, nonatomic) NSString *systemMessage; // @synthesize systemMessage=_systemMessage;
@property(copy, nonatomic) NSString *bizUsername; // @synthesize bizUsername=_bizUsername;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportKvId;

@end

